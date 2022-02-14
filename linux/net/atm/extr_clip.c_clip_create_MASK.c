
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int name; } ;
struct clip_priv {int number; struct net_device* next; int xoff_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct clip_priv* FUNC_0 (struct net_device*) ;
 struct net_device* FUNC_1 (int,char*,int ,int ) ;
 struct net_device* VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,char*,int) ;

__attribute__((used)) static int FUNC_7(int VAR_5)
{
 struct net_device *VAR_6;
 struct clip_priv *VAR_7;
 int VAR_8;

 if (VAR_5 != -1) {
  for (VAR_6 = VAR_3; VAR_6; VAR_6 = FUNC_0(VAR_6)->next)
   if (FUNC_0(VAR_6)->number == VAR_5)
    return -VAR_0;
 } else {
  VAR_5 = 0;
  for (VAR_6 = VAR_3; VAR_6; VAR_6 = FUNC_0(VAR_6)->next)
   if (FUNC_0(VAR_6)->number >= VAR_5)
    VAR_5 = FUNC_0(VAR_6)->number + 1;
 }
 VAR_6 = FUNC_1(sizeof(struct clip_priv), "", VAR_2,
      VAR_4);
 if (!VAR_6)
  return -VAR_1;
 VAR_7 = FUNC_0(VAR_6);
 FUNC_6(VAR_6->name, "atm%d", VAR_5);
 FUNC_5(&VAR_7->xoff_lock);
 VAR_7->number = VAR_5;
 VAR_8 = FUNC_4(VAR_6);
 if (VAR_8) {
  FUNC_2(VAR_6);
  return VAR_8;
 }
 VAR_7->next = VAR_3;
 VAR_3 = VAR_6;
 FUNC_3("registered (net:%s)\n", VAR_6->name);
 return VAR_5;
}
