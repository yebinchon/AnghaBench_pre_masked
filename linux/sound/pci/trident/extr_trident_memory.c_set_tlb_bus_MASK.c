
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_trident {int dummy; } ;
typedef int dma_addr_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct snd_trident*,int,unsigned long,int ) ;

__attribute__((used)) static inline void FUNC_1(struct snd_trident *VAR_2, int VAR_3,
          unsigned long VAR_4, dma_addr_t VAR_5)
{
 int VAR_6;
 VAR_3 *= VAR_1;
 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++, VAR_3++) {
  FUNC_0(VAR_2, VAR_3, VAR_4, VAR_5);
  VAR_4 += VAR_0;
  VAR_5 += VAR_0;
 }
}
