
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct napi_struct {struct net_device* dev; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (int) ;
 struct napi_struct* FUNC_1 (unsigned int) ;
 int FUNC_2 () ;

struct net_device *FUNC_3(unsigned int VAR_1)
{
 struct napi_struct *VAR_2;

 FUNC_0(!FUNC_2());

 if (VAR_1 < VAR_0)
  return ((void*)0);

 VAR_2 = FUNC_1(VAR_1);

 return VAR_2 ? VAR_2->dev : ((void*)0);
}
