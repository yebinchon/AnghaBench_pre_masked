
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {int dummy; } ;
typedef int s8 ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct sk_buff*,void*) ;
 void* FUNC_2 (struct sk_buff*,int) ;
 scalar_t__ FUNC_3 (struct sk_buff*,int,int ) ;

__attribute__((used)) static bool FUNC_4(struct sk_buff *VAR_1, u8 VAR_2, s8 *VAR_3,
          int VAR_4)
{
 void *VAR_5;
 int VAR_6 = 0;

 if (!VAR_2)
  return 1;

 VAR_5 = FUNC_2(VAR_1, VAR_4);
 if (!VAR_5)
  return 0;

 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
  if (!(VAR_2 & FUNC_0(VAR_6)))
   continue;

  if (FUNC_3(VAR_1, VAR_6, VAR_3[VAR_6]))
   return 0;
 }

 FUNC_1(VAR_1, VAR_5);

 return 1;
}
