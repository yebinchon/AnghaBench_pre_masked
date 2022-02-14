
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct batadv_orig_node {int orig; int capabilities; } ;
struct batadv_dat_candidate {struct batadv_orig_node* orig_node; } ;
typedef scalar_t__ batadv_dat_addr_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static bool FUNC_2(struct batadv_dat_candidate *VAR_1,
      int VAR_2, batadv_dat_addr_t VAR_3,
      batadv_dat_addr_t VAR_4,
      batadv_dat_addr_t VAR_5,
      struct batadv_orig_node *VAR_6,
      struct batadv_orig_node *VAR_7)
{
 bool VAR_8 = 0;
 int VAR_9;


 if (!FUNC_1(VAR_0, &VAR_6->capabilities))
  goto out;


 for (VAR_9 = 0; VAR_9 < VAR_2; VAR_9++)
  if (VAR_1[VAR_9].orig_node == VAR_6)
   break;

 if (VAR_9 < VAR_2)
  goto out;

 if (VAR_3 > VAR_5)
  goto out;



 if (VAR_3 < VAR_4)
  goto out;



 if (VAR_3 == VAR_4 && VAR_7 &&
     FUNC_0(VAR_6->orig, VAR_7->orig))
  goto out;

 VAR_8 = 1;
out:
 return VAR_8;
}
