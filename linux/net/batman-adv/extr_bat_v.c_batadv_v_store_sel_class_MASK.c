
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_2__ {int sel_class; } ;
struct batadv_priv {TYPE_1__ gw; int soft_iface; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 (struct batadv_priv*) ;
 int FUNC_3 (int ,char*,char*,scalar_t__*) ;

__attribute__((used)) static ssize_t FUNC_4(struct batadv_priv *VAR_1,
     char *VAR_2, size_t VAR_3)
{
 u32 VAR_4, VAR_5;

 if (!FUNC_3(VAR_1->soft_iface, VAR_2,
         "B.A.T.M.A.N. V GW selection class",
         &VAR_5))
  return -VAR_0;

 VAR_4 = FUNC_0(&VAR_1->gw.sel_class);
 FUNC_1(&VAR_1->gw.sel_class, VAR_5);

 if (VAR_4 != VAR_5)
  FUNC_2(VAR_1);

 return VAR_3;
}
