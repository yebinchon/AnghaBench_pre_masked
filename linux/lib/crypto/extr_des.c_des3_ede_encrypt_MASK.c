
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct des3_ede_ctx {int * expkey; } ;


 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ,int ,int const*,int) ;
 int FUNC_3 (int const*) ;
 int FUNC_4 (int ,int *) ;

void FUNC_5(const struct des3_ede_ctx *VAR_0, u8 *VAR_1, const u8 *VAR_2)
{
 const u32 *VAR_3 = VAR_0->expkey;
 u32 VAR_4, VAR_5, VAR_6, VAR_7;
 int VAR_8;

 VAR_4 = FUNC_3(VAR_2);
 VAR_5 = FUNC_3(VAR_2 + 4);

 FUNC_1(VAR_4, VAR_5, VAR_6);
 for (VAR_8 = 0; VAR_8 < 8; VAR_8++) {
  FUNC_2(VAR_4, VAR_5, VAR_6, VAR_7, VAR_3, 2);
  FUNC_2(VAR_5, VAR_4, VAR_6, VAR_7, VAR_3, 2);
 }
 for (VAR_8 = 0; VAR_8 < 8; VAR_8++) {
  FUNC_2(VAR_5, VAR_4, VAR_6, VAR_7, VAR_3, 2);
  FUNC_2(VAR_4, VAR_5, VAR_6, VAR_7, VAR_3, 2);
 }
 for (VAR_8 = 0; VAR_8 < 8; VAR_8++) {
  FUNC_2(VAR_4, VAR_5, VAR_6, VAR_7, VAR_3, 2);
  FUNC_2(VAR_5, VAR_4, VAR_6, VAR_7, VAR_3, 2);
 }
 FUNC_0(VAR_5, VAR_4, VAR_6);

 FUNC_4(VAR_5, VAR_1);
 FUNC_4(VAR_4, VAR_1 + 4);
}
