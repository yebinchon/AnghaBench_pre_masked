
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct switch_dev {int dummy; } ;
struct adm6996_priv {int* pvid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int,int) ;
 struct adm6996_priv* FUNC_1 (struct switch_dev*) ;

__attribute__((used)) static int
FUNC_2(struct switch_dev *VAR_2, int VAR_3, int VAR_4)
{
 struct adm6996_priv *VAR_5 = FUNC_1(VAR_2);

 FUNC_0("set_pvid port %d vlan %d\n", VAR_3, VAR_4);

 if (VAR_4 > VAR_0)
  return -VAR_1;

 VAR_5->pvid[VAR_3] = VAR_4;

 return 0;
}
