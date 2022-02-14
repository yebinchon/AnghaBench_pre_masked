
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t uint32 ;
struct TYPE_5__ {scalar_t__ buffer; scalar_t__ matchBitmap; scalar_t__ matchIterator; scalar_t__ list; } ;
struct TYPE_4__ {size_t totalentries; TYPE_2__** entries; scalar_t__ nkeys; int * keys; int keyCtx; } ;
typedef TYPE_1__* GinScanOpaque ;
typedef TYPE_2__* GinScanEntry ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;

void
FUNC_5(GinScanOpaque VAR_1)
{
 uint32 VAR_2;

 if (VAR_1->keys == ((void*)0))
  return;

 for (VAR_2 = 0; VAR_2 < VAR_1->totalentries; VAR_2++)
 {
  GinScanEntry VAR_3 = VAR_1->entries[VAR_2];

  if (VAR_3->buffer != VAR_0)
   FUNC_1(VAR_3->buffer);
  if (VAR_3->list)
   FUNC_2(VAR_3->list);
  if (VAR_3->matchIterator)
   FUNC_3(VAR_3->matchIterator);
  if (VAR_3->matchBitmap)
   FUNC_4(VAR_3->matchBitmap);
 }

 FUNC_0(VAR_1->keyCtx);

 VAR_1->keys = ((void*)0);
 VAR_1->nkeys = 0;
 VAR_1->entries = ((void*)0);
 VAR_1->totalentries = 0;
}
