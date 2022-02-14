
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int int64 ;
struct TYPE_14__ {scalar_t__ pageDataCxt; scalar_t__ nPageData; scalar_t__ curPageData; int qual_ok; } ;
struct TYPE_11__ {int parentlsn; } ;
struct TYPE_13__ {int * distances; TYPE_1__ data; int blkno; } ;
struct TYPE_12__ {int * xs_hitup; int indexRelation; int opaque; } ;
typedef int TIDBitmap ;
typedef TYPE_2__* IndexScanDesc ;
typedef int GistNSN ;
typedef TYPE_3__ GISTSearchItem ;
typedef TYPE_4__* GISTScanOpaque ;


 int FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 (scalar_t__) ;
 TYPE_3__* FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (TYPE_2__*,TYPE_3__*,int *,int *,int *) ;
 int FUNC_4 (int *,int ,int) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (int ) ;

int64
FUNC_7(IndexScanDesc VAR_1, TIDBitmap *VAR_2)
{
 GISTScanOpaque VAR_3 = (GISTScanOpaque) VAR_1->opaque;
 int64 VAR_4 = 0;
 GISTSearchItem VAR_5;

 if (!VAR_3->qual_ok)
  return 0;

 FUNC_6(VAR_1->indexRelation);


 VAR_3->curPageData = VAR_3->nPageData = 0;
 VAR_1->xs_hitup = ((void*)0);
 if (VAR_3->pageDataCxt)
  FUNC_1(VAR_3->pageDataCxt);

 VAR_5.blkno = VAR_0;
 FUNC_4(&VAR_5.data.parentlsn, 0, sizeof(GistNSN));
 FUNC_3(VAR_1, &VAR_5, ((void*)0), VAR_2, &VAR_4);





 for (;;)
 {
  GISTSearchItem *VAR_6 = FUNC_2(VAR_3);

  if (!VAR_6)
   break;

  FUNC_0();

  FUNC_3(VAR_1, VAR_6, VAR_6->distances, VAR_2, &VAR_4);

  FUNC_5(VAR_6);
 }

 return VAR_4;
}
