
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int (* byte_type_fn ) (TYPE_1__*,int *) ;} ;
typedef int HPDF_ParseText_Rec ;
typedef TYPE_1__* HPDF_Encoder ;
typedef int HPDF_ByteType ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (TYPE_1__*,int *) ;

HPDF_ByteType
FUNC_2 (HPDF_Encoder VAR_1,
                        HPDF_ParseText_Rec *VAR_2)
{
    FUNC_0 ((" HPDF_Encoder_ByteType\n"));

    if (VAR_1->byte_type_fn)
        return VAR_1->byte_type_fn (VAR_1, VAR_2);
    else
        return VAR_0;
}
