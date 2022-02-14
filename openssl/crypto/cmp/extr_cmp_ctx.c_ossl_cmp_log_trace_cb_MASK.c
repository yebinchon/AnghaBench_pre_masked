
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ log_verbosity; int (* log_cb ) (char*,char*,int,scalar_t__,char const*) ;} ;
typedef scalar_t__ OSSL_CMP_severity ;
typedef TYPE_1__ OSSL_CMP_CTX ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 char* FUNC_1 (char const*,scalar_t__*,char**,char**,int*) ;
 int FUNC_2 (char*,char*,int,scalar_t__,char const*) ;

__attribute__((used)) static size_t FUNC_3(const char *VAR_1, size_t VAR_2,
                                    int VAR_3, int VAR_4, void *VAR_5)
{
    OSSL_CMP_CTX *VAR_6 = VAR_5;
    const char *VAR_7;
    OSSL_CMP_severity VAR_8 = -1;
    char *VAR_9 = ((void*)0);
    char *VAR_10 = ((void*)0);
    int VAR_11 = 0;

    if (VAR_1 == ((void*)0) || VAR_2 == 0 || VAR_4 != VAR_0 || VAR_6 == ((void*)0))
        return 0;
    if (VAR_6->log_cb == ((void*)0))
        return 1;

    VAR_7 = FUNC_1(VAR_1, &VAR_8, &VAR_9, &VAR_10, &VAR_11);

    if (VAR_8 > VAR_6->log_verbosity)
        goto end;

    if (!VAR_6->log_cb(VAR_9 != ((void*)0) ? VAR_9 : "(no func)",
                     VAR_10 != ((void*)0) ? VAR_10 : "(no file)",
                     VAR_11, VAR_8, VAR_7))
        VAR_2 = 0;

 end:
    FUNC_0(VAR_9);
    FUNC_0(VAR_10);
    return VAR_2;
}
