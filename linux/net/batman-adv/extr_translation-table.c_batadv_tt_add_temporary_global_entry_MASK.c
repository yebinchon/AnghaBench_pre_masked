
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct batadv_priv {int dummy; } ;
struct batadv_orig_node {int orig; int last_ttvn; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (unsigned char const*) ;
 int FUNC_2 (int ,struct batadv_priv*,char*,unsigned char const*,int ,int ) ;
 int FUNC_3 (unsigned short) ;
 int FUNC_4 (struct batadv_priv*,struct batadv_orig_node*,unsigned char const*,unsigned short,int ,int ) ;

bool FUNC_5(struct batadv_priv *VAR_2,
       struct batadv_orig_node *VAR_3,
       const unsigned char *VAR_4,
       unsigned short VAR_5)
{



 if (FUNC_1(VAR_4))
  return 0;

 if (!FUNC_4(VAR_2, VAR_3, VAR_4, VAR_5,
      VAR_1,
      FUNC_0(&VAR_3->last_ttvn)))
  return 0;

 FUNC_2(VAR_0, VAR_2,
     "Added temporary global client (addr: %pM, vid: %d, orig: %pM)\n",
     VAR_4, FUNC_3(VAR_5), VAR_3->orig);

 return 1;
}
