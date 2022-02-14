
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {int uid_offset; int* xuid; int writing_mode; scalar_t__ suppliment; scalar_t__ ordering; scalar_t__ registry; int is_trial_byte_fn; int is_lead_byte_fn; } ;
struct TYPE_11__ {int type; TYPE_1__* error; scalar_t__ attr; } ;
struct TYPE_10__ {scalar_t__ error_no; } ;
typedef scalar_t__ HPDF_STATUS ;
typedef TYPE_2__* HPDF_Encoder ;
typedef TYPE_3__* HPDF_CMapEncoderAttr ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_1 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*,int ) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_4 (scalar_t__,char*,scalar_t__) ;
 int VAR_5 ;
 scalar_t__ FUNC_5 (TYPE_2__*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static HPDF_STATUS
FUNC_6 (HPDF_Encoder VAR_10)
{
    HPDF_CMapEncoderAttr VAR_11;
    HPDF_STATUS VAR_12;

    if ((VAR_12 = FUNC_2 (VAR_10)) != VAR_4)
        return VAR_12;

    VAR_11 = (HPDF_CMapEncoderAttr)VAR_10->attr;

    if (FUNC_0 (VAR_10, VAR_0) != VAR_4)
        return VAR_10->error->error_no;

    if (FUNC_0 (VAR_10, VAR_1) != VAR_4)
        return VAR_10->error->error_no;

    if ((VAR_12 = FUNC_5 (VAR_10)) != VAR_4)
        return VAR_12;

    if (FUNC_1 (VAR_10, VAR_8)
                != VAR_4)
        return VAR_10->error->error_no;

    FUNC_3 (VAR_10, VAR_9);

    VAR_11->is_lead_byte_fn = VAR_6;
    VAR_11->is_trial_byte_fn = VAR_7;
    FUNC_4 (VAR_11->registry, "Adobe", VAR_11->registry +
                VAR_3);
    FUNC_4 (VAR_11->ordering, "Korea1", VAR_11->ordering +
                VAR_3);
    VAR_11->suppliment = 0;
    VAR_11->writing_mode = VAR_5;
    VAR_11->uid_offset = 310;
    VAR_11->xuid[0] = 1;
    VAR_11->xuid[1] = 10;
    VAR_11->xuid[2] = 25401;

    VAR_10->type = VAR_2;

    return VAR_4;
}
