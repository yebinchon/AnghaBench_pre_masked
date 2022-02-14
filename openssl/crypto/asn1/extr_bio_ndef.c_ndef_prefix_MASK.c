
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned char* derbuf; unsigned char** boundary; int it; int val; } ;
typedef TYPE_1__ NDEF_SUPPORT ;
typedef int BIO ;


 int VAR_0 ;
 int FUNC_0 (int ,unsigned char**,int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_1 ;
 unsigned char* FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(BIO *VAR_2, unsigned char **VAR_3, int *VAR_4, void *VAR_5)
{
    NDEF_SUPPORT *VAR_6;
    unsigned char *VAR_7;
    int VAR_8;

    if (VAR_5 == ((void*)0))
        return 0;

    VAR_6 = *(NDEF_SUPPORT **)VAR_5;

    VAR_8 = FUNC_0(VAR_6->val, ((void*)0), VAR_6->it);
    if ((VAR_7 = FUNC_2(VAR_8)) == ((void*)0)) {
        FUNC_1(VAR_0, VAR_1);
        return 0;
    }

    VAR_6->derbuf = VAR_7;
    *VAR_3 = VAR_7;
    VAR_8 = FUNC_0(VAR_6->val, &VAR_7, VAR_6->it);

    if (*VAR_6->boundary == ((void*)0))
        return 0;

    *VAR_4 = *VAR_6->boundary - *VAR_3;

    return 1;
}
