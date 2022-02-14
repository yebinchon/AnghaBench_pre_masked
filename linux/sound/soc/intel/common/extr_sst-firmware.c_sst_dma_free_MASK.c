
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sst_dma {scalar_t__ chip; scalar_t__ ch; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct sst_dma *VAR_0)
{

 if (VAR_0 == ((void*)0))
  return;

 if (VAR_0->ch)
  FUNC_0(VAR_0->ch);

 if (VAR_0->chip)
  FUNC_1(VAR_0->chip);

}
