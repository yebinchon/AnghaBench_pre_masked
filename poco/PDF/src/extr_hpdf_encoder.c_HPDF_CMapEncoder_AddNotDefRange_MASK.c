
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int notdef_range; } ;
struct TYPE_4__ {int mmgr; int attr; } ;
typedef int HPDF_STATUS ;
typedef TYPE_1__* HPDF_Encoder ;
typedef int HPDF_CidRange_Rec ;
typedef TYPE_2__* HPDF_CMapEncoderAttr ;


 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (char*) ;

HPDF_STATUS
FUNC_2 (HPDF_Encoder VAR_0,
                                  HPDF_CidRange_Rec VAR_1)
{
    HPDF_CMapEncoderAttr VAR_2 = (HPDF_CMapEncoderAttr)VAR_0->attr;

    FUNC_1 ((" HPDF_CMapEncoder_AddNotDefRange\n"));

    return FUNC_0 (VAR_0->mmgr, VAR_1, VAR_2->notdef_range);
}
