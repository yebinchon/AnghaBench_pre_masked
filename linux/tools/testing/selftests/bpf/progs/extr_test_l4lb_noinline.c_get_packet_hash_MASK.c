
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct packet_description {int ports; int src; int srcv6; } ;
typedef int __u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int,int ) ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static __u32 FUNC_2(struct packet_description *VAR_2,
        bool VAR_3)
{
 if (VAR_3)
  return FUNC_1(FUNC_0(VAR_2->srcv6, 16, VAR_1),
        VAR_2->ports, VAR_0);
 else
  return FUNC_1(VAR_2->src, VAR_2->ports, VAR_0);
}
