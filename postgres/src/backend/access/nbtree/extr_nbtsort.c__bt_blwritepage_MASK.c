
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int rd_smgr; int rd_node; } ;
struct TYPE_4__ {TYPE_3__* index; int btws_pages_written; scalar_t__ btws_zeropage; scalar_t__ btws_use_wal; } ;
typedef scalar_t__ Page ;
typedef int BlockNumber ;
typedef TYPE_1__ BTWriteState ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int *,int ,int ,scalar_t__,int) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int ,int ,int ,char*,int) ;
 int FUNC_6 (int ,int ,int ,char*,int) ;

__attribute__((used)) static void
FUNC_7(BTWriteState *VAR_2, Page VAR_3, BlockNumber VAR_4)
{

 FUNC_1(VAR_2->index);


 if (VAR_2->btws_use_wal)
 {

  FUNC_2(&VAR_2->index->rd_node, VAR_1, VAR_4, VAR_3, 1);
 }
 while (VAR_4 > VAR_2->btws_pages_written)
 {
  if (!VAR_2->btws_zeropage)
   VAR_2->btws_zeropage = (Page) FUNC_3(VAR_0);

  FUNC_5(VAR_2->index->rd_smgr, VAR_1,
       VAR_2->btws_pages_written++,
       (char *) VAR_2->btws_zeropage,
       1);
 }

 FUNC_0(VAR_3, VAR_4);





 if (VAR_4 == VAR_2->btws_pages_written)
 {

  FUNC_5(VAR_2->index->rd_smgr, VAR_1, VAR_4,
       (char *) VAR_3, 1);
  VAR_2->btws_pages_written++;
 }
 else
 {

  FUNC_6(VAR_2->index->rd_smgr, VAR_1, VAR_4,
      (char *) VAR_3, 1);
 }

 FUNC_4(VAR_3);
}
