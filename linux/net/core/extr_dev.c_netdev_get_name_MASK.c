
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int name; } ;
struct net {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 struct net_device* FUNC_1 (struct net*,int) ;
 int VAR_1 ;
 unsigned int FUNC_2 (int *) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (int *,unsigned int) ;
 int FUNC_6 (char*,int ) ;

int FUNC_7(struct net *VAR_2, char *VAR_3, int VAR_4)
{
 struct net_device *VAR_5;
 unsigned int VAR_6;

retry:
 VAR_6 = FUNC_2(&VAR_1);
 FUNC_3();
 VAR_5 = FUNC_1(VAR_2, VAR_4);
 if (!VAR_5) {
  FUNC_4();
  return -VAR_0;
 }

 FUNC_6(VAR_3, VAR_5->name);
 FUNC_4();
 if (FUNC_5(&VAR_1, VAR_6)) {
  FUNC_0();
  goto retry;
 }

 return 0;
}
