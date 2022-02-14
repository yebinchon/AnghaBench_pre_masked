
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct TYPE_2__ {int ra; int flags; } ;


 TYPE_1__* FUNC_0 (struct sk_buff*) ;
 int VAR_0 ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (int *,unsigned char const*,int) ;
 int FUNC_3 (char*,unsigned char const) ;
 unsigned char* FUNC_4 (struct sk_buff*) ;

__attribute__((used)) static bool FUNC_5(struct sk_buff *VAR_1, int VAR_2)
{
 const unsigned char *VAR_3 = FUNC_4(VAR_1);

 if (VAR_3[VAR_2 + 1] == 2) {
  FUNC_0(VAR_1)->flags |= VAR_0;
  FUNC_2(&FUNC_0(VAR_1)->ra, VAR_3 + VAR_2 + 2, sizeof(FUNC_0(VAR_1)->ra));
  return 1;
 }
 FUNC_3("ipv6_hop_ra: wrong RA length %d\n",
       VAR_3[VAR_2 + 1]);
 FUNC_1(VAR_1);
 return 0;
}
