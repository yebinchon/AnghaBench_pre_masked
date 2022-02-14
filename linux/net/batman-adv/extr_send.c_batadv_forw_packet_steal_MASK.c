
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct batadv_forw_packet {int cleanup_list; int list; } ;
typedef int spinlock_t ;


 scalar_t__ FUNC_0 (struct batadv_forw_packet*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

bool FUNC_5(struct batadv_forw_packet *VAR_0,
         spinlock_t *VAR_1)
{

 FUNC_3(VAR_1);
 if (FUNC_0(VAR_0)) {
  FUNC_4(VAR_1);
  return 0;
 }

 FUNC_2(&VAR_0->list);


 FUNC_1(&VAR_0->cleanup_list);

 FUNC_4(VAR_1);
 return 1;
}
