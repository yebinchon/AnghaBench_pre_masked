
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_13__ {int suppliment; int uid_offset; int* xuid; int writing_mode; scalar_t__ ordering; scalar_t__ registry; int is_trial_byte_fn; int is_lead_byte_fn; } ;
struct TYPE_12__ {int type; TYPE_1__* error; scalar_t__ attr; } ;
struct TYPE_11__ {scalar_t__ error_no; } ;
typedef scalar_t__ HPDF_STATUS ;
typedef TYPE_2__* HPDF_Encoder ;
typedef TYPE_3__* HPDF_CMapEncoderAttr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_2 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*,int ) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_5 (scalar_t__,char*,scalar_t__) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_6 (TYPE_2__*) ;
 int VAR_9 ;
 int VAR_10 ;

__attribute__((used)) static HPDF_STATUS
FUNC_7 (HPDF_Encoder VAR_11)
{
    HPDF_CMapEncoderAttr VAR_12;
    HPDF_STATUS VAR_13;

    if ((VAR_13 = FUNC_3 (VAR_11)) != VAR_5)
        return VAR_13;

    VAR_12 = (HPDF_CMapEncoderAttr)VAR_11->attr;

    if ((VAR_13 = FUNC_0 (VAR_11, VAR_0)) !=
            VAR_5)
        return VAR_13;

    if ((VAR_13 = FUNC_0 (VAR_11, VAR_1)) !=
            VAR_5)
        return VAR_13;

    if ((VAR_13 = FUNC_6 (VAR_11)) != VAR_5)
        return VAR_13;

    if (FUNC_2 (VAR_11, VAR_8)
                != VAR_5)
        return VAR_11->error->error_no;

    FUNC_4 (VAR_11, VAR_2);

    VAR_12->is_lead_byte_fn = VAR_9;
    VAR_12->is_trial_byte_fn = VAR_10;
    FUNC_5 (VAR_12->registry, "Adobe", VAR_12->registry +
                VAR_4);
    FUNC_5 (VAR_12->ordering, "Japan1", VAR_12->ordering +
                VAR_4);
    VAR_12->suppliment = 2;
    VAR_12->uid_offset = 1020;
    VAR_12->xuid[0] = 1;
    VAR_12->xuid[1] = 10;
    VAR_12->xuid[2] = 25344;

    VAR_12->writing_mode = VAR_6;

    VAR_11->type = VAR_3;

    FUNC_1 (VAR_11, VAR_7);

    return VAR_5;
}
