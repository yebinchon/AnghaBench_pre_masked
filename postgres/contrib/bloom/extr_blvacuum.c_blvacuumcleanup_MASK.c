
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ num_index_tuples; scalar_t__ pages_free; scalar_t__ num_pages; } ;
struct TYPE_6__ {int index; int strategy; scalar_t__ analyze_only; } ;
typedef int Relation ;
typedef scalar_t__ Page ;
typedef TYPE_1__ IndexVacuumInfo ;
typedef TYPE_2__ IndexBulkDeleteResult ;
typedef int Buffer ;
typedef scalar_t__ BlockNumber ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 int VAR_3 ;
 int FUNC_6 (int ,int ,scalar_t__,int ,int ) ;
 int FUNC_7 (int ,scalar_t__) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int) ;
 int FUNC_11 () ;

IndexBulkDeleteResult *
FUNC_12(IndexVacuumInfo *VAR_4, IndexBulkDeleteResult *VAR_5)
{
 Relation VAR_6 = VAR_4->index;
 BlockNumber VAR_7,
    VAR_8;

 if (VAR_4->analyze_only)
  return VAR_5;

 if (VAR_5 == ((void*)0))
  VAR_5 = (IndexBulkDeleteResult *) FUNC_10(sizeof(IndexBulkDeleteResult));





 VAR_7 = FUNC_8(VAR_6);
 VAR_5->num_pages = VAR_7;
 VAR_5->pages_free = 0;
 VAR_5->num_index_tuples = 0;
 for (VAR_8 = VAR_0; VAR_8 < VAR_7; VAR_8++)
 {
  Buffer VAR_9;
  Page VAR_10;

  FUNC_11();

  VAR_9 = FUNC_6(VAR_6, VAR_2, VAR_8,
         VAR_3, VAR_4->strategy);
  FUNC_4(VAR_9, VAR_1);
  VAR_10 = (Page) FUNC_2(VAR_9);

  if (FUNC_5(VAR_10) || FUNC_1(VAR_10))
  {
   FUNC_7(VAR_6, VAR_8);
   VAR_5->pages_free++;
  }
  else
  {
   VAR_5->num_index_tuples += FUNC_0(VAR_10);
  }

  FUNC_9(VAR_9);
 }

 FUNC_3(VAR_4->index);

 return VAR_5;
}
