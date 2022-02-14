
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int priv_flags; int flags; } ;
struct net {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct net_device* FUNC_0 (struct net*,char const*) ;
 int FUNC_1 (struct net_device*,int *) ;
 int FUNC_2 () ;
 int FUNC_3 () ;

int FUNC_4(struct net *VAR_5, const char *VAR_6)
{
 struct net_device *VAR_7;
 int VAR_8 = 0;

 FUNC_2();
 VAR_7 = FUNC_0(VAR_5, VAR_6);
 if (VAR_7 == ((void*)0))
  VAR_8 = -VAR_1;

 else if (!(VAR_7->priv_flags & VAR_3)) {

  VAR_8 = -VAR_2;
 }

 else if (VAR_7->flags & VAR_4) {

  VAR_8 = -VAR_0;
 }

 else
  FUNC_1(VAR_7, ((void*)0));

 FUNC_3();
 return VAR_8;
}
