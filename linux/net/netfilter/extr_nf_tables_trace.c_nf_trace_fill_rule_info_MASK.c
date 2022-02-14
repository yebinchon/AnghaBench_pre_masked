
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct nft_traceinfo {scalar_t__ type; TYPE_2__* rule; TYPE_1__* verdict; } ;
struct TYPE_4__ {int handle; } ;
struct TYPE_3__ {scalar_t__ code; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct sk_buff*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct sk_buff *VAR_4,
       const struct nft_traceinfo *VAR_5)
{
 if (!VAR_5->rule)
  return 0;






 if (VAR_5->type == VAR_3 &&
     VAR_5->verdict->code == VAR_2)
  return 0;

 return FUNC_1(VAR_4, VAR_1,
       FUNC_0(VAR_5->rule->handle),
       VAR_0);
}
