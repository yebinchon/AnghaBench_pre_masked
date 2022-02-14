
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {int writing_mode; scalar_t__ suppliment; scalar_t__ ordering; scalar_t__ registry; int * is_trial_byte_fn; int * is_lead_byte_fn; } ;
struct TYPE_10__ {int type; TYPE_1__* error; scalar_t__ attr; int encode_text_fn; int to_unicode_fn; int byte_type_fn; } ;
struct TYPE_9__ {scalar_t__ error_no; } ;
typedef scalar_t__ HPDF_STATUS ;
typedef TYPE_2__* HPDF_Encoder ;
typedef TYPE_3__* HPDF_CMapEncoderAttr ;


 scalar_t__ FUNC_0 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_1 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_2 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_4 (scalar_t__,char*,scalar_t__) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static HPDF_STATUS
FUNC_5 (HPDF_Encoder VAR_10)
{
    HPDF_CMapEncoderAttr VAR_11;
    HPDF_STATUS VAR_12;

    if ((VAR_12 = FUNC_3 (VAR_10)) != VAR_2)
        return VAR_12;




    VAR_10->byte_type_fn = VAR_5;
    VAR_10->to_unicode_fn = VAR_7;
    VAR_10->encode_text_fn = VAR_6;

    VAR_11 = (HPDF_CMapEncoderAttr)VAR_10->attr;

    if (FUNC_0 (VAR_10, VAR_4) != VAR_2)
        return VAR_10->error->error_no;

    if (FUNC_1 (VAR_10, VAR_9)
        != VAR_2)
      return VAR_10->error->error_no;

    if (FUNC_2 (VAR_10, VAR_8)
                != VAR_2)
        return VAR_10->error->error_no;

    VAR_11->is_lead_byte_fn = ((void*)0);
    VAR_11->is_trial_byte_fn = ((void*)0);

    FUNC_4 (VAR_11->registry, "Adobe", VAR_11->registry +
                VAR_1);
    FUNC_4 (VAR_11->ordering, "Identity-H", VAR_11->ordering +
                VAR_1);
    VAR_11->suppliment = 0;
    VAR_11->writing_mode = VAR_3;
    VAR_10->type = VAR_0;

    return VAR_2;
}
