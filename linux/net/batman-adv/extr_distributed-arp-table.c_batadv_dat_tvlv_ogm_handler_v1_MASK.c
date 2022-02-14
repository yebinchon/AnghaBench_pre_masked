
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct batadv_priv {int dummy; } ;
struct batadv_orig_node {int capabilities; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static void FUNC_2(struct batadv_priv *VAR_2,
        struct batadv_orig_node *VAR_3,
        u8 VAR_4,
        void *VAR_5, u16 VAR_6)
{
 if (VAR_4 & VAR_1)
  FUNC_0(VAR_0, &VAR_3->capabilities);
 else
  FUNC_1(VAR_0, &VAR_3->capabilities);
}
