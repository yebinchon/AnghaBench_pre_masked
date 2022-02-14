
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct batadv_priv {int dummy; } ;
struct batadv_orig_node {int tt_buff_lock; scalar_t__ tt_buff_len; scalar_t__ tt_buff; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (scalar_t__,void const*,scalar_t__) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct batadv_priv *VAR_1,
           struct batadv_orig_node *VAR_2,
           const void *VAR_3,
           u16 VAR_4)
{



 FUNC_3(&VAR_2->tt_buff_lock);
 if (VAR_4 > 0) {
  FUNC_0(VAR_2->tt_buff);
  VAR_2->tt_buff_len = 0;
  VAR_2->tt_buff = FUNC_1(VAR_4, VAR_0);
  if (VAR_2->tt_buff) {
   FUNC_2(VAR_2->tt_buff, VAR_3, VAR_4);
   VAR_2->tt_buff_len = VAR_4;
  }
 }
 FUNC_4(&VAR_2->tt_buff_lock);
}
