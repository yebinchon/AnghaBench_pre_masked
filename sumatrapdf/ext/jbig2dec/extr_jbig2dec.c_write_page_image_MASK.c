
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int output_format; } ;
typedef TYPE_1__ jbig2dec_params_t ;
typedef int Jbig2Image ;
typedef int FILE ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *) ;


 int VAR_0 ;

__attribute__((used)) static int
FUNC_3(jbig2dec_params_t *VAR_1, FILE *VAR_2, Jbig2Image *VAR_3)
{
    switch (VAR_1->output_format) {




    case 129:
        return FUNC_1(VAR_3, VAR_2);
    default:
        FUNC_0(VAR_0, "unsupported output format.\n");
        return 1;
    }

    return 0;
}
