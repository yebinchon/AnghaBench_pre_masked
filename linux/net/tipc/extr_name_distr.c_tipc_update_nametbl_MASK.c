
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct publication {int binding_node; } ;
struct net {int dummy; } ;
struct distr_item {int key; int port; int type; int upper; int lower; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct publication*,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,scalar_t__,scalar_t__,scalar_t__) ;
 int VAR_3 ;
 struct publication* FUNC_4 (struct net*,scalar_t__,scalar_t__,scalar_t__,int ,scalar_t__,scalar_t__,scalar_t__) ;
 struct publication* FUNC_5 (struct net*,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_6 (struct net*,int *,scalar_t__) ;
 int FUNC_7 (struct net*,int *,scalar_t__) ;

__attribute__((used)) static bool FUNC_8(struct net *VAR_4, struct distr_item *VAR_5,
    u32 VAR_6, u32 VAR_7)
{
 struct publication *VAR_8 = ((void*)0);
 u32 VAR_9 = FUNC_1(VAR_5->lower);
 u32 VAR_10 = FUNC_1(VAR_5->upper);
 u32 VAR_11 = FUNC_1(VAR_5->type);
 u32 VAR_12 = FUNC_1(VAR_5->port);
 u32 VAR_13 = FUNC_1(VAR_5->key);

 if (VAR_7 == VAR_0) {
  VAR_8 = FUNC_4(VAR_4, VAR_11, VAR_9, VAR_10,
          VAR_1, VAR_6,
          VAR_12, VAR_13);
  if (VAR_8) {
   FUNC_6(VAR_4, &VAR_8->binding_node, VAR_6);
   return 1;
  }
 } else if (VAR_7 == VAR_2) {
  VAR_8 = FUNC_5(VAR_4, VAR_11, VAR_9,
          VAR_10, VAR_6, VAR_13);
  if (VAR_8) {
   FUNC_7(VAR_4, &VAR_8->binding_node, VAR_6);
   FUNC_0(VAR_8, VAR_3);
   return 1;
  }
  FUNC_3("Failed to remove binding %u,%u from %x\n",
        VAR_11, VAR_9, VAR_6);
 } else {
  FUNC_2("Unrecognized name table message received\n");
 }
 return 0;
}
