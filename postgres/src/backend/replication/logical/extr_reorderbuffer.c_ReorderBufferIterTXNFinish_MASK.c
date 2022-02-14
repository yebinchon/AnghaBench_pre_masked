
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t int32 ;
struct TYPE_6__ {size_t nr_txns; int heap; int old_change; TYPE_1__* entries; } ;
struct TYPE_5__ {int fd; } ;
typedef TYPE_2__ ReorderBufferIterTXNState ;
typedef int ReorderBuffer ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int ) ;
 int VAR_1 ;
 int FUNC_4 (int,int ,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int VAR_2 ;
 int FUNC_7 (TYPE_2__*) ;

__attribute__((used)) static void
FUNC_8(ReorderBuffer *VAR_3,
         ReorderBufferIterTXNState *VAR_4)
{
 int32 VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_4->nr_txns; VAR_5++)
 {
  if (VAR_4->entries[VAR_5].fd != -1)
   FUNC_1(VAR_4->entries[VAR_5].fd);
 }


 if (!FUNC_5(&VAR_4->old_change))
 {
  VAR_0 *VAR_1;

  VAR_1 = FUNC_4(VAR_0, VAR_2,
         FUNC_6(&VAR_4->old_change));
  FUNC_2(VAR_3, VAR_1);
  FUNC_0(FUNC_5(&VAR_4->old_change));
 }

 FUNC_3(VAR_4->heap);
 FUNC_7(VAR_4);
}
