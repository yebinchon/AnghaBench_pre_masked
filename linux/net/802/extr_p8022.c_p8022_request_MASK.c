
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct datalink_proto {TYPE_2__* sap; } ;
struct TYPE_3__ {int lsap; } ;
struct TYPE_4__ {TYPE_1__ laddr; } ;


 int FUNC_0 (TYPE_2__*,struct sk_buff*,unsigned char*,int ) ;

__attribute__((used)) static int FUNC_1(struct datalink_proto *VAR_0, struct sk_buff *VAR_1,
    unsigned char *VAR_2)
{
 FUNC_0(VAR_0->sap, VAR_1, VAR_2, VAR_0->sap->laddr.lsap);
 return 0;
}
