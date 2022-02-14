
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct list {int dummy; } ;
typedef int nsresult ;
typedef int nsACString ;
struct TYPE_3__ {int data; } ;
typedef TYPE_1__ http_header_t ;
typedef char WCHAR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (char const*) ;
 TYPE_1__* FUNC_2 (struct list*,char*,int ) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (char const*) ;
 char* FUNC_5 (int ) ;
 int FUNC_6 (int const*,char const**) ;
 int FUNC_7 (int *,char*) ;
 int FUNC_8 (char*) ;

__attribute__((used)) static nsresult FUNC_9(struct list *VAR_3, const nsACString *VAR_4,
        nsACString *VAR_5)
{
    const char *VAR_6;
    http_header_t *VAR_7;
    WCHAR *VAR_8;
    char *VAR_9;

    FUNC_6(VAR_4, &VAR_6);
    VAR_8 = FUNC_4(VAR_6);
    if(!VAR_8)
        return VAR_1;

    VAR_7 = FUNC_2(VAR_3, VAR_8, FUNC_8(VAR_8));
    FUNC_3(VAR_8);
    if(!VAR_7)
        return VAR_0;

    VAR_9 = FUNC_5(VAR_7->data);
    if(!VAR_9)
        return VAR_1;

    FUNC_0("%s -> %s\n", FUNC_1(VAR_6), FUNC_1(VAR_9));
    FUNC_7(VAR_5, VAR_9);
    FUNC_3(VAR_9);
    return VAR_2;
}
