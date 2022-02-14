
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_protocol {int netns_ok; } ;


 int VAR_0 ;
 int FUNC_0 (struct net_protocol const**,int *,struct net_protocol const*) ;
 int * VAR_1 ;
 int FUNC_1 (char*,unsigned char) ;

int FUNC_2(const struct net_protocol *VAR_2, unsigned char VAR_3)
{
 if (!VAR_2->netns_ok) {
  FUNC_1("Protocol %u is not namespace aware, cannot register.\n",
   VAR_3);
  return -VAR_0;
 }

 return !FUNC_0((const struct net_protocol **)&VAR_1[VAR_3],
   ((void*)0), VAR_2) ? 0 : -1;
}
