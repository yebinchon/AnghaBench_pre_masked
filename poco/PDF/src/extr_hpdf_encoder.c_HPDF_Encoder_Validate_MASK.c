
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ sig_bytes; } ;
typedef int HPDF_STATUS ;
typedef TYPE_1__* HPDF_Encoder ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int VAR_2 ;

HPDF_STATUS
FUNC_1 (HPDF_Encoder VAR_3)
{
    FUNC_0 ((" HPDF_Encoder_Validate\n"));

    if (!VAR_3 || VAR_3->sig_bytes != VAR_0)
        return VAR_1;
    else
        return VAR_2;
}
