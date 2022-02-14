
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct realm_password_file_t {int entries; } ;
struct coro {int dummy; } ;


 scalar_t__ FUNC_0 (int) ;
 unsigned char* FUNC_1 (unsigned char*,size_t,size_t*) ;
 scalar_t__ FUNC_2 (int ,struct coro*,char const*) ;
 int FUNC_3 (unsigned char*) ;
 char* FUNC_4 (int ,unsigned char*) ;
 char* FUNC_5 (unsigned char*,char,size_t) ;
 int VAR_0 ;
 int FUNC_6 (char*,char*) ;

__attribute__((used)) static bool FUNC_7(struct coro *VAR_1,
                      const char *VAR_2,
                      size_t VAR_3,
                      const char *VAR_4)
{
    struct realm_password_file_t *VAR_5;
    unsigned char *VAR_6;
    char *VAR_7;
    char *VAR_8;
    char *VAR_9;
    size_t VAR_10;
    bool VAR_11 = 0;

    VAR_5 = (struct realm_password_file_t *)FUNC_2(
        VAR_0, VAR_1, VAR_4);
    if (FUNC_0(!VAR_5))
        return 0;

    VAR_6 = FUNC_1((unsigned char *)VAR_2, VAR_3, &VAR_10);
    if (FUNC_0(!VAR_6))
        return 0;

    VAR_7 = FUNC_5(VAR_6, ':', VAR_10);
    if (FUNC_0(!VAR_7))
        goto out;

    *VAR_7 = '\0';
    VAR_8 = VAR_7 + 1;

    VAR_9 = FUNC_4(VAR_5->entries, VAR_6);
    if (VAR_9)
        VAR_11 = FUNC_6(VAR_8, VAR_9);

out:
    FUNC_3(VAR_6);
    return VAR_11;
}
