
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct sk_buff {TYPE_1__* dev; } ;
struct TYPE_2__ {scalar_t__ hard_header_len; scalar_t__ mtu; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static u32 FUNC_0(const struct sk_buff *VAR_1)
{
 return VAR_1->dev ? VAR_1->dev->mtu + VAR_1->dev->hard_header_len :
     VAR_0;
}
