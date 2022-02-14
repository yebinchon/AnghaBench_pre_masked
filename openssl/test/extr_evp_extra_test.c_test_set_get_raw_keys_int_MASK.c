
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int buf ;
struct TYPE_2__ {int type; int * priv; int * pub; } ;
typedef int EVP_PKEY ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,unsigned char*,size_t*) ;
 int FUNC_2 (int *,unsigned char*,size_t*) ;
 int * FUNC_3 (int ,int *,unsigned char*,size_t) ;
 int * FUNC_4 (int ,int *,unsigned char*,size_t) ;
 int FUNC_5 (unsigned char*,size_t,unsigned char*,size_t) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int) ;
 TYPE_1__* VAR_0 ;
 int FUNC_8 (unsigned char*,int ,int) ;
 size_t FUNC_9 (int *) ;

__attribute__((used)) static int FUNC_10(int VAR_1, int VAR_2)
{
    int VAR_3 = 0;
    unsigned char VAR_4[80];
    unsigned char *VAR_5;
    size_t VAR_6, VAR_7 = 0;
    EVP_PKEY *VAR_8;


    if (VAR_0[VAR_1].pub == ((void*)0))
        return 1;

    FUNC_8(VAR_4, 0, sizeof(VAR_4));

    if (VAR_2) {
        VAR_6 = FUNC_9(VAR_0[VAR_1].pub);
        VAR_5 = (unsigned char *)VAR_0[VAR_1].pub;
        VAR_8 = FUNC_4(VAR_0[VAR_1].type,
                                           ((void*)0),
                                           VAR_5,
                                           VAR_6);
    } else {
        VAR_6 = FUNC_9(VAR_0[VAR_1].priv);
        VAR_5 = (unsigned char *)VAR_0[VAR_1].priv;
        VAR_8 = FUNC_3(VAR_0[VAR_1].type,
                                            ((void*)0),
                                            VAR_5,
                                            VAR_6);
    }

    if (!FUNC_6(VAR_8)
            || (!VAR_2 && !FUNC_7(FUNC_1(VAR_8, ((void*)0), &VAR_7)))
            || (VAR_2 && !FUNC_7(FUNC_2(VAR_8, ((void*)0), &VAR_7)))
            || !FUNC_7(VAR_7 == VAR_6)
            || (!VAR_2 && !FUNC_7(FUNC_1(VAR_8, VAR_4, &VAR_7)))
            || (VAR_2 && !FUNC_7(FUNC_2(VAR_8, VAR_4, &VAR_7)))
            || !FUNC_5(VAR_5, VAR_6, VAR_4, VAR_7))
        goto done;

    VAR_3 = 1;
 done:
    FUNC_0(VAR_8);
    return VAR_3;
}
