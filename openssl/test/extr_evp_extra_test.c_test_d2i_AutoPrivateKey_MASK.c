
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned char* kder; size_t size; int evptype; } ;
typedef int EVP_PKEY ;
typedef TYPE_1__ APK_DATA ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (unsigned char const*,unsigned char const*) ;
 int * FUNC_5 (int *,unsigned char const**,size_t) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static int FUNC_6(int VAR_1)
{
    int VAR_2 = 0;
    const unsigned char *VAR_3;
    EVP_PKEY *VAR_4 = ((void*)0);
    const APK_DATA *VAR_5 = &VAR_0[VAR_1];
    const unsigned char *VAR_6 = VAR_5->kder;
    size_t VAR_7 = VAR_5->size;
    int VAR_8 = VAR_5->evptype;

    VAR_3 = VAR_6;
    if (!FUNC_3(VAR_4 = FUNC_5(((void*)0), &VAR_3, VAR_7))
            || !FUNC_4(VAR_3, VAR_6 + VAR_7)
            || !FUNC_2(FUNC_1(VAR_4), VAR_8))
        goto done;

    VAR_2 = 1;

 done:
    FUNC_0(VAR_4);
    return VAR_2;
}
