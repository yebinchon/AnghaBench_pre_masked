
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {int uid_offset; int* xuid; scalar_t__ suppliment; scalar_t__ ordering; scalar_t__ registry; int is_trial_byte_fn; int is_lead_byte_fn; } ;
struct TYPE_11__ {int type; TYPE_1__* error; scalar_t__ attr; } ;
struct TYPE_10__ {scalar_t__ error_no; } ;
typedef scalar_t__ HPDF_STATUS ;
typedef TYPE_2__* HPDF_Encoder ;
typedef TYPE_3__* HPDF_CMapEncoderAttr ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_2 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*,int ) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_5 (scalar_t__,char*,scalar_t__) ;

__attribute__((used)) static HPDF_STATUS
FUNC_6 (HPDF_Encoder VAR_8)
{
    HPDF_CMapEncoderAttr VAR_9;
    HPDF_STATUS VAR_10;

    if ((VAR_10 = FUNC_3 (VAR_8)) != VAR_7)
        return VAR_10;

    VAR_9 = (HPDF_CMapEncoderAttr)VAR_8->attr;

    if (FUNC_1 (VAR_8, VAR_0) != VAR_7)
        return VAR_8->error->error_no;

    if ((VAR_10 = FUNC_0 (VAR_8)) != VAR_7)
        return VAR_10;

    if (FUNC_2 (VAR_8, VAR_4)
                != VAR_7)
        return VAR_8->error->error_no;

    FUNC_4 (VAR_8, VAR_1);

    VAR_9->is_lead_byte_fn = VAR_2;
    VAR_9->is_trial_byte_fn = VAR_3;
    FUNC_5 (VAR_9->registry, "Adobe", VAR_9->registry +
                VAR_6);
    FUNC_5 (VAR_9->ordering, "CNS1", VAR_9->ordering +
                VAR_6);
    VAR_9->suppliment = 0;
    VAR_9->uid_offset = 200;
    VAR_9->xuid[0] = 1;
    VAR_9->xuid[1] = 10;
    VAR_9->xuid[2] = 25390;

    VAR_8->type = VAR_5;

    return VAR_7;
}
