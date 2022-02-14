
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ (* is_lead_byte_fn ) (TYPE_2__*,int ) ;scalar_t__ (* is_trial_byte_fn ) (TYPE_2__*,int ) ;} ;
struct TYPE_9__ {int attr; } ;
struct TYPE_8__ {size_t index; size_t len; scalar_t__ byte_type; int * text; } ;
typedef TYPE_1__ HPDF_ParseText_Rec ;
typedef TYPE_2__* HPDF_Encoder ;
typedef TYPE_3__* HPDF_CMapEncoderAttr ;
typedef scalar_t__ HPDF_ByteType ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_2 (TYPE_2__*,int ) ;

HPDF_ByteType
FUNC_3 (HPDF_Encoder VAR_4,
                            HPDF_ParseText_Rec *VAR_5)
{
    HPDF_CMapEncoderAttr VAR_6 = (HPDF_CMapEncoderAttr)VAR_4->attr;

    FUNC_0 ((" HPDF_CMapEncoder_ByteType\n"));

    if (VAR_5->index >= VAR_5->len)
        return VAR_3;

    if (VAR_5->byte_type == VAR_0) {
        if (VAR_6->is_trial_byte_fn (VAR_4, VAR_5->text[VAR_5->index]))
            VAR_5->byte_type = VAR_2;
        else
            VAR_5->byte_type = VAR_3;
   } else {
        if (VAR_6->is_lead_byte_fn (VAR_4, VAR_5->text[VAR_5->index]))
            VAR_5->byte_type = VAR_0;
        else
            VAR_5->byte_type = VAR_1;
   }

   VAR_5->index++;

   return VAR_5->byte_type;
}
