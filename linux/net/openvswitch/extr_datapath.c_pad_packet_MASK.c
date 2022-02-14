
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {size_t len; } ;
struct datapath {int user_features; } ;


 size_t FUNC_0 (size_t) ;
 int VAR_0 ;
 int FUNC_1 (struct sk_buff*,size_t) ;

__attribute__((used)) static void FUNC_2(struct datapath *VAR_1, struct sk_buff *VAR_2)
{
 if (!(VAR_1->user_features & VAR_0)) {
  size_t VAR_3 = FUNC_0(VAR_2->len) - VAR_2->len;

  if (VAR_3 > 0)
   FUNC_1(VAR_2, VAR_3);
 }
}
