
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct napi_struct {unsigned long gro_bitmask; } ;


 int FUNC_0 (struct napi_struct*,unsigned int,int) ;
 unsigned int FUNC_1 (unsigned long) ;

void FUNC_2(struct napi_struct *VAR_0, bool VAR_1)
{
 unsigned long VAR_2 = VAR_0->gro_bitmask;
 unsigned int VAR_3, VAR_4 = ~0U;

 while ((VAR_3 = FUNC_1(VAR_2)) != 0) {
  VAR_2 >>= VAR_3;
  VAR_4 += VAR_3;
  FUNC_0(VAR_0, VAR_4, VAR_1);
 }
}
