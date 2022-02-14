
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (struct sk_buff*,int ,int *,int) ;
 int FUNC_2 (struct sk_buff*) ;
 int * FUNC_3 (struct sk_buff*,int) ;

__attribute__((used)) static void FUNC_4(struct sk_buff *VAR_1,
        struct sk_buff *VAR_2,
        int VAR_3)
{
 u8 *VAR_4 = FUNC_3(VAR_1, VAR_3);

 FUNC_0(VAR_4, 0, 8);
 *(VAR_4++) = VAR_0;
 *(VAR_4++) = (VAR_3 >> 3);
 VAR_4 += 6;

 FUNC_1(VAR_2, FUNC_2(VAR_2), VAR_4,
        VAR_3 - 8);
}
