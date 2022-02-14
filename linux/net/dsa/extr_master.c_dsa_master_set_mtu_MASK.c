
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {unsigned int max_mtu; } ;
struct dsa_port {TYPE_1__* tag_ops; } ;
struct TYPE_2__ {unsigned int overhead; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (struct net_device*,unsigned int) ;
 int FUNC_1 (struct net_device*,char*) ;
 int FUNC_2 () ;
 int FUNC_3 () ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_1, struct dsa_port *VAR_2)
{
 unsigned int VAR_3 = VAR_0 + VAR_2->tag_ops->overhead;
 int VAR_4;

 FUNC_2();
 if (VAR_3 <= VAR_1->max_mtu) {
  VAR_4 = FUNC_0(VAR_1, VAR_3);
  if (VAR_4)
   FUNC_1(VAR_1, "Unable to set MTU to include for DSA overheads\n");
 }
 FUNC_3();
}
