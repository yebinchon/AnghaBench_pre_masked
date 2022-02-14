
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_13__ {int** cid_map; int cmap_range; } ;
struct TYPE_12__ {int from; int to; int cid; } ;
struct TYPE_11__ {scalar_t__ to_unicode_fn; int mmgr; TYPE_1__* error; int attr; } ;
struct TYPE_10__ {int error_no; } ;
typedef int HPDF_UINT16 ;
typedef int HPDF_STATUS ;
typedef TYPE_2__* HPDF_Encoder ;
typedef TYPE_3__ HPDF_CidRange_Rec ;
typedef TYPE_4__* HPDF_CMapEncoderAttr ;
typedef size_t HPDF_BYTE ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,TYPE_3__*) ;
 TYPE_3__* FUNC_1 (int ,int) ;
 int FUNC_2 (int ,TYPE_3__*) ;
 int VAR_1 ;
 int FUNC_3 (char*) ;

HPDF_STATUS
FUNC_4 (HPDF_Encoder VAR_2,
                           const HPDF_CidRange_Rec *VAR_3)
{
    HPDF_CMapEncoderAttr VAR_4 = (HPDF_CMapEncoderAttr)VAR_2->attr;

    FUNC_3 ((" HPDF_CMapEncoder_AddCMap\n"));


    while (VAR_3->from != 0xffff || VAR_3->to != 0xffff) {
 HPDF_CidRange_Rec *VAR_5;
 HPDF_STATUS VAR_6;




 if (VAR_2->to_unicode_fn == VAR_0) {
     HPDF_UINT16 VAR_7 = VAR_3->from;
     HPDF_UINT16 VAR_8 = VAR_3->cid;

     while (VAR_7 <= VAR_3->to) {
  HPDF_BYTE VAR_9 = VAR_7;
  HPDF_BYTE VAR_10 = VAR_7 >> 8;

  VAR_4->cid_map[VAR_9][VAR_10] = VAR_8;
  VAR_7++;
  VAR_8++;
     }
 }

        VAR_5 = FUNC_1 (VAR_2->mmgr, sizeof(HPDF_CidRange_Rec));
        if (!VAR_5)
            return VAR_2->error->error_no;

        VAR_5->from = VAR_3->from;
        VAR_5->to = VAR_3->to;
        VAR_5->cid = VAR_3->cid;

        if ((VAR_6 = FUNC_2 (VAR_4->cmap_range, VAR_5)) != VAR_1) {
            FUNC_0 (VAR_2->mmgr, VAR_5);
            return VAR_6;
        }

        VAR_3++;
    }

    return VAR_1;
}
