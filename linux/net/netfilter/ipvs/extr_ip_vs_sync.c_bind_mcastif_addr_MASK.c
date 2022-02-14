
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct socket {TYPE_1__* ops; } ;
struct TYPE_4__ {scalar_t__ s_addr; } ;
struct sockaddr_in {scalar_t__ sin_port; TYPE_2__ sin_addr; int sin_family; } ;
struct sockaddr {int dummy; } ;
struct net_device {int name; } ;
typedef int sin ;
typedef scalar_t__ __be32 ;
struct TYPE_3__ {int (* bind ) (struct socket*,struct sockaddr*,int) ;} ;


 int VAR_0 ;
 int FUNC_0 (int,char*,int ,scalar_t__*) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct net_device*,int ,int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct socket*,struct sockaddr*,int) ;

__attribute__((used)) static int FUNC_4(struct socket *VAR_2, struct net_device *VAR_3)
{
 __be32 VAR_4;
 struct sockaddr_in VAR_5;

 VAR_4 = FUNC_1(VAR_3, 0, VAR_1);
 if (!VAR_4)
  FUNC_2("You probably need to specify IP address on "
         "multicast interface.\n");

 FUNC_0(7, "binding socket with (%s) %pI4\n",
    VAR_3->name, &VAR_4);


 VAR_5.sin_family = VAR_0;
 VAR_5.sin_addr.s_addr = VAR_4;
 VAR_5.sin_port = 0;

 return VAR_2->ops->bind(VAR_2, (struct sockaddr*)&VAR_5, sizeof(VAR_5));
}
