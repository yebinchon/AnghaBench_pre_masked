
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hlist_head {int dummy; } ;
struct batadv_forw_packet {int delayed_work; int list; int cleanup_list; } ;
typedef int spinlock_t ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct batadv_forw_packet*) ;
 int FUNC_2 (int *,struct hlist_head*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ VAR_1 ;
 int FUNC_5 (int ,int *,scalar_t__) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(struct batadv_forw_packet *VAR_2,
         spinlock_t *VAR_3, struct hlist_head *VAR_4,
         unsigned long VAR_5)
{
 FUNC_6(VAR_3);


 if (FUNC_1(VAR_2)) {



  FUNC_0(FUNC_4(&VAR_2->cleanup_list),
     "Requeuing after batadv_forw_packet_steal() not allowed!\n");

  FUNC_7(VAR_3);
  return;
 }

 FUNC_3(&VAR_2->list);
 FUNC_2(&VAR_2->list, VAR_4);

 FUNC_5(VAR_0,
      &VAR_2->delayed_work,
      VAR_5 - VAR_1);
 FUNC_7(VAR_3);
}
