
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct tomoyo_addr_info {unsigned int protocol; int operation; } ;
struct socket {unsigned int type; TYPE_1__* ops; int sk; } ;
struct sockaddr_storage {int dummy; } ;
struct sockaddr {int dummy; } ;
struct TYPE_2__ {int (* getname ) (struct socket*,struct sockaddr*,int ) ;} ;


 scalar_t__ const VAR_0 ;
 unsigned int const VAR_1 ;
 unsigned int const VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct socket*,struct sockaddr*,int ) ;
 int FUNC_1 (struct sockaddr*,int,int ,struct tomoyo_addr_info*) ;
 int FUNC_2 (struct sockaddr*,int,struct tomoyo_addr_info*) ;
 scalar_t__ FUNC_3 (int ) ;

int FUNC_4(struct socket *VAR_4)
{
 struct tomoyo_addr_info VAR_5;
 const u8 VAR_6 = FUNC_3(VAR_4->sk);
 const unsigned int VAR_7 = VAR_4->type;
 struct sockaddr_storage VAR_8;
 int VAR_9;

 if (!VAR_6 || (VAR_7 != VAR_2 && VAR_7 != VAR_1))
  return 0;
 {
  const int VAR_10 = VAR_4->ops->getname(VAR_4, (struct sockaddr *)
           &VAR_8, 0);

  if (VAR_10 < 0)
   return VAR_10;
  VAR_9 = VAR_10;
 }
 VAR_5.protocol = VAR_7;
 VAR_5.operation = VAR_3;
 if (VAR_6 == VAR_0)
  return FUNC_2((struct sockaddr *) &VAR_8,
       VAR_9, &VAR_5);
 return FUNC_1((struct sockaddr *) &VAR_8, VAR_9,
      0, &VAR_5);
}
