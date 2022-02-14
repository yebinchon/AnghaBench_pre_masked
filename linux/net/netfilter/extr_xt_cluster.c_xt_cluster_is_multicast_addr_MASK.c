
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int8_t ;
struct sk_buff {int dummy; } ;
struct TYPE_4__ {int daddr; } ;
struct TYPE_3__ {int daddr; } ;




 int FUNC_0 (int) ;
 TYPE_2__* FUNC_1 (struct sk_buff const*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 TYPE_1__* FUNC_4 (struct sk_buff const*) ;

__attribute__((used)) static inline bool
FUNC_5(const struct sk_buff *VAR_0, u_int8_t VAR_1)
{
 bool VAR_2 = 0;

 switch(VAR_1) {
 case 129:
  VAR_2 = FUNC_2(FUNC_1(VAR_0)->daddr);
  break;
 case 128:
  VAR_2 = FUNC_3(&FUNC_4(VAR_0)->daddr);
  break;
 default:
  FUNC_0(1);
  break;
 }
 return VAR_2;
}
