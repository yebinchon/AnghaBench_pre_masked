
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int member_0; int member_1; int member_2; } ;
struct TYPE_8__ {TYPE_1__* error; } ;
struct TYPE_7__ {scalar_t__ error_no; } ;
typedef scalar_t__ HPDF_STATUS ;
typedef TYPE_2__* HPDF_Encoder ;
typedef TYPE_3__ HPDF_CidRange_Rec ;


 scalar_t__ FUNC_0 (TYPE_2__*,TYPE_3__) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static HPDF_STATUS
FUNC_1 (HPDF_Encoder VAR_1)
{
    HPDF_CidRange_Rec VAR_2 = {0x00, 0x80, 0};
    HPDF_CidRange_Rec VAR_3 = {0x8141, 0xFEFE, 0};

    if (FUNC_0 (VAR_1, VAR_2)
                    != VAR_0)
        return VAR_1->error->error_no;

    if (FUNC_0 (VAR_1, VAR_3)
                    != VAR_0)
        return VAR_1->error->error_no;

    return VAR_0;
}
