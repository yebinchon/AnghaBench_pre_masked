
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ exact_pages; scalar_t__ lossy_pages; } ;
struct TYPE_6__ {scalar_t__ format; int indent; int str; } ;
typedef TYPE_1__ ExplainState ;
typedef TYPE_2__ BitmapHeapScanState ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,int *,scalar_t__,TYPE_1__*) ;
 int FUNC_1 (int ,char*,scalar_t__) ;
 int FUNC_2 (int ,char) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,char*) ;

__attribute__((used)) static void
FUNC_5(BitmapHeapScanState *VAR_1, ExplainState *VAR_2)
{
 if (VAR_2->format != VAR_0)
 {
  FUNC_0("Exact Heap Blocks", ((void*)0),
          VAR_1->exact_pages, VAR_2);
  FUNC_0("Lossy Heap Blocks", ((void*)0),
          VAR_1->lossy_pages, VAR_2);
 }
 else
 {
  if (VAR_1->exact_pages > 0 || VAR_1->lossy_pages > 0)
  {
   FUNC_3(VAR_2->str, VAR_2->indent * 2);
   FUNC_4(VAR_2->str, "Heap Blocks:");
   if (VAR_1->exact_pages > 0)
    FUNC_1(VAR_2->str, " exact=%ld", VAR_1->exact_pages);
   if (VAR_1->lossy_pages > 0)
    FUNC_1(VAR_2->str, " lossy=%ld", VAR_1->lossy_pages);
   FUNC_2(VAR_2->str, '\n');
  }
 }
}
