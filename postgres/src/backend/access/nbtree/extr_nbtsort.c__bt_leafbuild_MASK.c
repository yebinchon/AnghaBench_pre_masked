
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int index; int heap; int sortstate; } ;
struct TYPE_8__ {int btws_use_wal; int * btws_zeropage; scalar_t__ btws_pages_written; scalar_t__ btws_pages_alloced; int index; int inskey; int heap; } ;
typedef TYPE_1__ BTWriteState ;
typedef TYPE_2__ BTSpool ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (TYPE_1__*,TYPE_2__*,TYPE_2__*) ;
 int FUNC_5 (int ,int *) ;
 scalar_t__ VAR_5 ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static void
FUNC_8(BTSpool *VAR_6, BTSpool *VAR_7)
{
 BTWriteState VAR_8;
 FUNC_6(VAR_4,
         VAR_2);
 FUNC_7(VAR_6->sortstate);
 if (VAR_7)
 {
  FUNC_6(VAR_4,
          VAR_3);
  FUNC_7(VAR_7->sortstate);
 }

 VAR_8.heap = VAR_6->heap;
 VAR_8.index = VAR_6->index;
 VAR_8.inskey = FUNC_5(VAR_8.index, ((void*)0));





 VAR_8.btws_use_wal = FUNC_3() && FUNC_0(VAR_8.index);


 VAR_8.btws_pages_alloced = VAR_0 + 1;
 VAR_8.btws_pages_written = 0;
 VAR_8.btws_zeropage = ((void*)0);

 FUNC_6(VAR_4,
         VAR_1);
 FUNC_4(&VAR_8, VAR_6, VAR_7);
}
