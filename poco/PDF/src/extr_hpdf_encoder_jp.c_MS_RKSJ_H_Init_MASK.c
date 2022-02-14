
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_13__ {int suppliment; int uid_offset; int* xuid; scalar_t__ ordering; scalar_t__ registry; int is_trial_byte_fn; int is_lead_byte_fn; } ;
struct TYPE_12__ {int type; TYPE_1__* error; scalar_t__ attr; } ;
struct TYPE_11__ {scalar_t__ error_no; } ;
typedef scalar_t__ HPDF_STATUS ;
typedef TYPE_2__* HPDF_Encoder ;
typedef TYPE_3__* HPDF_CMapEncoderAttr ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_2 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*,int ) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_5 (scalar_t__,char*,scalar_t__) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_6 (TYPE_2__*) ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static HPDF_STATUS
FUNC_7 (HPDF_Encoder VAR_9)
{
    HPDF_CMapEncoderAttr VAR_10;
    HPDF_STATUS VAR_11;

    if ((VAR_11 = FUNC_3 (VAR_9)) != VAR_4)
        return VAR_11;

    VAR_10 = (HPDF_CMapEncoderAttr)VAR_9->attr;

    if (FUNC_0 (VAR_9, VAR_0) != VAR_4)
        return VAR_9->error->error_no;

    if ((VAR_11 = FUNC_6 (VAR_9)) != VAR_4)
        return VAR_11;

    if (FUNC_2 (VAR_9, VAR_6)
                != VAR_4)
        return VAR_9->error->error_no;

    FUNC_4 (VAR_9, VAR_1);

    VAR_10->is_lead_byte_fn = VAR_7;
    VAR_10->is_trial_byte_fn = VAR_8;
    FUNC_5 (VAR_10->registry, "Adobe", VAR_10->registry +
                VAR_3);
    FUNC_5 (VAR_10->ordering, "Japan1", VAR_10->ordering +
                VAR_3);
    VAR_10->suppliment = 2;
    VAR_10->uid_offset = 950;
    VAR_10->xuid[0] = 1;
    VAR_10->xuid[1] = 10;
    VAR_10->xuid[2] = 25343;

    VAR_9->type = VAR_2;

    FUNC_1 (VAR_9, VAR_5);

    return VAR_4;
}
