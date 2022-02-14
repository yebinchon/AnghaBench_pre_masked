
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ int64 ;
struct TYPE_6__ {int xs_snapshot; int indexRelation; int opaque; } ;
struct TYPE_5__ {int want_itup; scalar_t__ ntids; int * tbm; } ;
typedef int TIDBitmap ;
typedef TYPE_1__* SpGistScanOpaque ;
typedef TYPE_2__* IndexScanDesc ;


 int FUNC_0 (int ,TYPE_1__*,int,int ,int ) ;
 int VAR_0 ;

int64
FUNC_1(IndexScanDesc VAR_1, TIDBitmap *VAR_2)
{
 SpGistScanOpaque VAR_3 = (SpGistScanOpaque) VAR_1->opaque;


 VAR_3->want_itup = 0;

 VAR_3->tbm = VAR_2;
 VAR_3->ntids = 0;

 FUNC_0(VAR_1->indexRelation, VAR_3, 1, VAR_0, VAR_1->xs_snapshot);

 return VAR_3->ntids;
}
