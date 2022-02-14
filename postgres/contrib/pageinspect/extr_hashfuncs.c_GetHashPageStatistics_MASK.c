
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int hasho_page_id; int hasho_flag; int hasho_bucket; int hasho_nextblkno; int hasho_prevblkno; } ;
struct TYPE_4__ {int free_size; scalar_t__ dead_items; scalar_t__ live_items; int hasho_page_id; int hasho_flag; int hasho_bucket; int hasho_nextblkno; int hasho_prevblkno; int page_size; } ;
typedef int Page ;
typedef int OffsetNumber ;
typedef int ItemId ;
typedef TYPE_1__ HashPageStat ;
typedef TYPE_2__* HashPageOpaque ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void
FUNC_6(Page VAR_1, HashPageStat *VAR_2)
{
 OffsetNumber VAR_3 = FUNC_3(VAR_1);
 HashPageOpaque VAR_4 = (HashPageOpaque) FUNC_5(VAR_1);
 int VAR_5;

 VAR_2->dead_items = VAR_2->live_items = 0;
 VAR_2->page_size = FUNC_4(VAR_1);


 VAR_2->hasho_prevblkno = VAR_4->hasho_prevblkno;
 VAR_2->hasho_nextblkno = VAR_4->hasho_nextblkno;
 VAR_2->hasho_bucket = VAR_4->hasho_bucket;
 VAR_2->hasho_flag = VAR_4->hasho_flag;
 VAR_2->hasho_page_id = VAR_4->hasho_page_id;


 for (VAR_5 = VAR_0; VAR_5 <= VAR_3; VAR_5++)
 {
  ItemId VAR_6 = FUNC_2(VAR_1, VAR_5);

  if (!FUNC_0(VAR_6))
   VAR_2->live_items++;
  else
   VAR_2->dead_items++;
 }
 VAR_2->free_size = FUNC_1(VAR_1);
}
