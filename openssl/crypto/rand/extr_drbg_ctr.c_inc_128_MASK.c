
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned char* V; } ;
typedef TYPE_1__ RAND_DRBG_CTR ;



__attribute__((used)) static void FUNC_0(RAND_DRBG_CTR *VAR_0)
{
    int VAR_1;
    unsigned char VAR_2;
    unsigned char *VAR_3 = &VAR_0->V[15];

    for (VAR_1 = 0; VAR_1 < 16; VAR_1++, VAR_3--) {
        VAR_2 = *VAR_3;
        VAR_2++;
        *VAR_3 = VAR_2;
        if (VAR_2 != 0) {

            break;
        }
    }
}
