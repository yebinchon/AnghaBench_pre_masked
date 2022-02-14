
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {scalar_t__ sa_data; } ;
struct net_device {int flags; int addr_len; scalar_t__ dev_addr; } ;
typedef int rose_address ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,scalar_t__,int ) ;
 int FUNC_1 (scalar_t__,scalar_t__,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_1, void *VAR_2)
{
 struct sockaddr *VAR_3 = VAR_2;
 int VAR_4;

 if (!FUNC_0(VAR_1->dev_addr, VAR_3->sa_data, VAR_1->addr_len))
  return 0;

 if (VAR_1->flags & VAR_0) {
  VAR_4 = FUNC_2((rose_address *)VAR_3->sa_data);
  if (VAR_4)
   return VAR_4;

  FUNC_3((rose_address *)VAR_1->dev_addr);
 }

 FUNC_1(VAR_1->dev_addr, VAR_3->sa_data, VAR_1->addr_len);

 return 0;
}
