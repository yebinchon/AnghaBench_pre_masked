
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_13__ {int cid; int to; int from; } ;
struct TYPE_12__ {TYPE_1__* error; } ;
struct TYPE_11__ {int error_no; } ;
typedef int HPDF_STATUS ;
typedef TYPE_2__* HPDF_MMgr ;
typedef int HPDF_List ;
typedef TYPE_3__ HPDF_CidRange_Rec ;


 int FUNC_0 (TYPE_2__*,TYPE_3__*) ;
 TYPE_3__* FUNC_1 (TYPE_2__*,int) ;
 int FUNC_2 (int ,TYPE_3__*) ;
 int VAR_0 ;

__attribute__((used)) static HPDF_STATUS
FUNC_3 (HPDF_MMgr VAR_1,
               HPDF_CidRange_Rec VAR_2,
               HPDF_List VAR_3)
{
    HPDF_CidRange_Rec *VAR_4;
    HPDF_STATUS VAR_5;

    VAR_4 = FUNC_1 (VAR_1, sizeof(HPDF_CidRange_Rec));
    if (!VAR_4)
        return VAR_1->error->error_no;

    VAR_4->from = VAR_2.from;
    VAR_4->to = VAR_2.to;
    VAR_4->cid = VAR_2.cid;

    if ((VAR_5 = FUNC_2 (VAR_3, VAR_4))
                != VAR_0) {
        FUNC_0 (VAR_1, VAR_4);
        return VAR_5;
    }

    return VAR_0;
}
