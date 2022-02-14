
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dst_entry {TYPE_1__* dev; } ;
struct TYPE_2__ {unsigned int mtu; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (struct dst_entry const*,int ) ;

__attribute__((used)) static unsigned int FUNC_1(const struct dst_entry *VAR_1)
{
 unsigned int VAR_2 = FUNC_0(VAR_1, VAR_0);

 return VAR_2 ? : VAR_1->dev->mtu;
}
