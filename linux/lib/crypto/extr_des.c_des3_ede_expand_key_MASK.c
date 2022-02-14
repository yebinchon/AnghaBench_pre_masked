
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct des3_ede_ctx {int * expkey; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int const*,unsigned int,int) ;
 int FUNC_1 (int *,int const*) ;
 int FUNC_2 (int *,int const*) ;

int FUNC_3(struct des3_ede_ctx *VAR_5, const u8 *VAR_6,
   unsigned int VAR_7)
{
 u32 *VAR_8 = VAR_5->expkey;
 int VAR_9;

 if (VAR_7 != VAR_0)
  return -VAR_3;

 VAR_9 = FUNC_0(VAR_6, VAR_7, 1);
 if (VAR_9 && VAR_9 != -VAR_4)
  return VAR_9;

 FUNC_1(VAR_8, VAR_6); VAR_8 += VAR_1; VAR_6 += VAR_2;
 FUNC_2(VAR_8, VAR_6); VAR_8 += VAR_1; VAR_6 += VAR_2;
 FUNC_1(VAR_8, VAR_6);

 return VAR_9;
}
