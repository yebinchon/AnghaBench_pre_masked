
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {scalar_t__ st_size; } ;
struct lwan_var_descriptor {int dummy; } ;
struct lwan_tpl {int dummy; } ;


 char* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int,struct stat*) ;
 int FUNC_2 (char*) ;
 struct lwan_tpl* FUNC_3 (char*,struct lwan_var_descriptor const*) ;
 char* FUNC_4 (int *,size_t,int ,int ,int,int ) ;
 scalar_t__ FUNC_5 (char*,size_t) ;
 int FUNC_6 (char const*,int) ;

struct lwan_tpl *
FUNC_7(const char *VAR_5,
                      const struct lwan_var_descriptor *VAR_6)
{
    int VAR_7;
    struct stat VAR_8;
    char *VAR_9;
    struct lwan_tpl *VAR_10 = ((void*)0);

    VAR_7 = FUNC_6(VAR_5, VAR_3 | VAR_2);
    if (VAR_7 < 0)
        goto end;

    if (FUNC_1(VAR_7, &VAR_8) < 0)
        goto close_file;

    VAR_9 = FUNC_4(((void*)0), (size_t)VAR_8.st_size, VAR_4, VAR_1, VAR_7, 0);
    if (VAR_9 == VAR_0)
        goto close_file;

    VAR_10 = FUNC_3(VAR_9, VAR_6);

    if (FUNC_5(VAR_9, (size_t)VAR_8.st_size) < 0)
        FUNC_2("munmap");

close_file:
    FUNC_0(VAR_7);
end:
    return VAR_10;
}
