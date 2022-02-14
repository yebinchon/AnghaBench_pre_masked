
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_protocol {int dummy; } ;





 struct net_protocol const VAR_0 ;
 struct net_protocol const VAR_1 ;
 struct net_protocol const VAR_2 ;

__attribute__((used)) static inline const struct net_protocol *FUNC_0(unsigned char VAR_3)
{
 switch (VAR_3) {
 case 128:
  return &VAR_1;
 case 130:
  return &VAR_0;
 case 129:
  return &VAR_2;
 }

 return ((void*)0);
}
