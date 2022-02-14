
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ sig_bytes; } ;
typedef TYPE_1__* HPDF_Stream ;
typedef int HPDF_STATUS ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;

HPDF_STATUS
FUNC_0 (HPDF_Stream VAR_3)
{
    if (!VAR_3 || VAR_3->sig_bytes != VAR_1)
        return VAR_0;
    else
        return VAR_2;
}
