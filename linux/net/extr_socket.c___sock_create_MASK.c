
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct socket {int type; TYPE_1__* ops; } ;
struct net_proto_family {int (* create ) (struct net*,struct socket*,int,int) ;int owner; } ;
struct net {int dummy; } ;
struct TYPE_4__ {int comm; } ;
struct TYPE_3__ {int owner; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_2__* VAR_8 ;
 int FUNC_0 (int ) ;
 int * VAR_9 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,int ) ;
 int * FUNC_3 (int ) ;
 struct net_proto_family* FUNC_4 (int ) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (char*,int) ;
 int FUNC_8 (int,int,int,int) ;
 int FUNC_9 (struct socket*,int,int,int,int) ;
 struct socket* FUNC_10 () ;
 int FUNC_11 (struct socket*) ;
 int FUNC_12 (struct net*,struct socket*,int,int) ;
 int FUNC_13 (int ) ;

int FUNC_14(struct net *VAR_10, int VAR_11, int VAR_12, int VAR_13,
    struct socket **VAR_14, int VAR_15)
{
 int VAR_16;
 struct socket *VAR_17;
 const struct net_proto_family *VAR_18;




 if (VAR_11 < 0 || VAR_11 >= VAR_3)
  return -VAR_0;
 if (VAR_12 < 0 || VAR_12 >= VAR_6)
  return -VAR_1;






 if (VAR_11 == VAR_4 && VAR_12 == VAR_7) {
  FUNC_2("%s uses obsolete (PF_INET,SOCK_PACKET)\n",
        VAR_8->comm);
  VAR_11 = VAR_5;
 }

 VAR_16 = FUNC_8(VAR_11, VAR_12, VAR_13, VAR_15);
 if (VAR_16)
  return VAR_16;






 VAR_17 = FUNC_10();
 if (!VAR_17) {
  FUNC_1("socket: no more sockets\n");
  return -VAR_2;

 }

 VAR_17->type = VAR_12;
 FUNC_5();
 VAR_18 = FUNC_4(VAR_9[VAR_11]);
 VAR_16 = -VAR_0;
 if (!VAR_18)
  goto out_release;





 if (!FUNC_13(VAR_18->owner))
  goto out_release;


 FUNC_6();

 VAR_16 = VAR_18->create(VAR_10, VAR_17, VAR_13, VAR_15);
 if (VAR_16 < 0)
  goto out_module_put;





 if (!FUNC_13(VAR_17->ops->owner))
  goto out_module_busy;





 FUNC_0(VAR_18->owner);
 VAR_16 = FUNC_9(VAR_17, VAR_11, VAR_12, VAR_13, VAR_15);
 if (VAR_16)
  goto out_sock_release;
 *VAR_14 = VAR_17;

 return 0;

out_module_busy:
 VAR_16 = -VAR_0;
out_module_put:
 VAR_17->ops = ((void*)0);
 FUNC_0(VAR_18->owner);
out_sock_release:
 FUNC_11(VAR_17);
 return VAR_16;

out_release:
 FUNC_6();
 goto out_sock_release;
}
