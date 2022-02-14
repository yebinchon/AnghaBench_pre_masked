
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct des_ctx {int expkey; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int const*) ;

int FUNC_1(struct des_ctx *VAR_3, const u8 *VAR_4, unsigned int VAR_5)
{
 if (VAR_5 != VAR_0)
  return -VAR_1;

 return FUNC_0(VAR_3->expkey, VAR_4) ? 0 : -VAR_2;
}
