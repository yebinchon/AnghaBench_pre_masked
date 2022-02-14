
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct switchdev_obj {int complete_priv; int (* complete ) (struct net_device*,int,int ) ;int id; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct net_device*,char*,int,int ) ;
 int FUNC_1 (struct net_device*,int,int ) ;
 int FUNC_2 (struct net_device*,struct switchdev_obj const*,int *) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_1,
         const void *VAR_2)
{
 const struct switchdev_obj *VAR_3 = VAR_2;
 int VAR_4;

 VAR_4 = FUNC_2(VAR_1, VAR_3, ((void*)0));
 if (VAR_4 && VAR_4 != -VAR_0)
  FUNC_0(VAR_1, "failed (err=%d) to add object (id=%d)\n",
      VAR_4, VAR_3->id);
 if (VAR_3->complete)
  VAR_3->complete(VAR_1, VAR_4, VAR_3->complete_priv);
}
