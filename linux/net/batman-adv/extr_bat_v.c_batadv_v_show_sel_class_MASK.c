
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int sel_class; } ;
struct batadv_priv {TYPE_1__ gw; } ;
typedef int ssize_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (char*,char*,int,int) ;

__attribute__((used)) static ssize_t FUNC_2(struct batadv_priv *VAR_0, char *VAR_1)
{
 u32 VAR_2 = FUNC_0(&VAR_0->gw.sel_class);

 return FUNC_1(VAR_1, "%u.%u MBit\n", VAR_2 / 10, VAR_2 % 10);
}
