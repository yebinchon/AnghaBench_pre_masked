
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {int dummy; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int*,void*,int) ;
 int FUNC_2 (int*,int ,int) ;
 int* FUNC_3 (struct sk_buff*,int) ;

void FUNC_4(struct sk_buff *VAR_0, int VAR_1, void *VAR_2,
         int VAR_3, int VAR_4)
{
 int VAR_5 = FUNC_0(VAR_3, VAR_4);
 u8 *VAR_6 = FUNC_3(VAR_0, VAR_5);

 VAR_6[0] = VAR_1;
 VAR_6[1] = VAR_5>>3;

 FUNC_2(VAR_6 + 2, 0, VAR_4);
 VAR_6 += VAR_4;
 VAR_5 -= VAR_4;

 FUNC_1(VAR_6+2, VAR_2, VAR_3);
 VAR_3 += 2;
 VAR_6 += VAR_3;
 VAR_5 -= VAR_3;
 if (VAR_5 > 0)
  FUNC_2(VAR_6, 0, VAR_5);
}
