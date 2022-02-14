
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sw_flow_mask {int list; int ref_count; } ;
struct flow_table {int dummy; } ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct sw_flow_mask*,int ) ;
 int FUNC_3 (int *) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_4(struct flow_table *VAR_1, struct sw_flow_mask *VAR_2)
{
 if (VAR_2) {



  FUNC_0();
  FUNC_1(!VAR_2->ref_count);
  VAR_2->ref_count--;

  if (!VAR_2->ref_count) {
   FUNC_3(&VAR_2->list);
   FUNC_2(VAR_2, VAR_0);
  }
 }
}
