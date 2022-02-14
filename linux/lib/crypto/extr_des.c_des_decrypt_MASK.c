
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct des_ctx {int * expkey; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ,int ,int const*,int) ;
 int FUNC_3 (int const*) ;
 int FUNC_4 (int ,int *) ;

void FUNC_5(const struct des_ctx *VAR_1, u8 *VAR_2, const u8 *VAR_3)
{
 const u32 *VAR_4 = VAR_1->expkey + VAR_0 - 2;
 u32 VAR_5, VAR_6, VAR_7, VAR_8;
 int VAR_9;

 VAR_5 = FUNC_3(VAR_3);
 VAR_6 = FUNC_3(VAR_3 + 4);

 FUNC_1(VAR_5, VAR_6, VAR_7);
 for (VAR_9 = 0; VAR_9 < 8; VAR_9++) {
  FUNC_2(VAR_5, VAR_6, VAR_7, VAR_8, VAR_4, -2);
  FUNC_2(VAR_6, VAR_5, VAR_7, VAR_8, VAR_4, -2);
 }
 FUNC_0(VAR_6, VAR_5, VAR_7);

 FUNC_4(VAR_6, VAR_2);
 FUNC_4(VAR_5, VAR_2 + 4);
}
