
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int hash_ctx; } ;
typedef TYPE_1__ jbig2dec_params_t ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int ,unsigned char*) ;
 int FUNC_1 (int *,char*,char*) ;
 int FUNC_2 (char*,int,char*,unsigned char) ;

__attribute__((used)) static void
FUNC_3(jbig2dec_params_t *VAR_1, FILE *VAR_2)
{
    unsigned char VAR_3[VAR_0];
    char VAR_4[2 * VAR_0 + 1];
    int VAR_5;

    FUNC_0(VAR_1->hash_ctx, VAR_3);
    for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
        FUNC_2(&(VAR_4[2 * VAR_5]), 3, "%02x", VAR_3[VAR_5]);
    }
    FUNC_1(VAR_2, "%s", VAR_4);
}
