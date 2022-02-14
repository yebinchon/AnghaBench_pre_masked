
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct TYPE_4__ {TYPE_1__* dev; } ;
struct TYPE_3__ {int hard_header_len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct sk_buff*,int,int ,int ) ;
 TYPE_2__* FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_4(struct sk_buff *VAR_2)
{
 int VAR_3 = FUNC_2(VAR_2)->dev->hard_header_len;

 if (FUNC_3(VAR_2) < VAR_3) {
  int VAR_4 = FUNC_0(VAR_3 - FUNC_3(VAR_2));

  if (FUNC_1(VAR_2, VAR_4, 0, VAR_1))
   return -VAR_0;
 }

 return 0;
}
