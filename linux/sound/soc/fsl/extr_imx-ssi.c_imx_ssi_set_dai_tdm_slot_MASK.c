
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct snd_soc_dai {int dummy; } ;
struct imx_ssi {scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned int FUNC_0 (int) ;
 unsigned int VAR_3 ;
 scalar_t__ VAR_4 ;
 unsigned int FUNC_1 (scalar_t__) ;
 struct imx_ssi* FUNC_2 (struct snd_soc_dai*) ;
 int FUNC_3 (unsigned int,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct snd_soc_dai *VAR_5,
 unsigned int VAR_6, unsigned int VAR_7, int VAR_8, int VAR_9)
{
 struct imx_ssi *VAR_10 = FUNC_2(VAR_5);
 u32 VAR_11;

 VAR_11 = FUNC_1(VAR_10->base + VAR_2);
 VAR_11 &= ~VAR_3;
 VAR_11 |= FUNC_0(VAR_8 - 1);
 FUNC_3(VAR_11, VAR_10->base + VAR_2);

 VAR_11 = FUNC_1(VAR_10->base + VAR_0);
 VAR_11 &= ~VAR_3;
 VAR_11 |= FUNC_0(VAR_8 - 1);
 FUNC_3(VAR_11, VAR_10->base + VAR_0);

 FUNC_3(~VAR_6, VAR_10->base + VAR_4);
 FUNC_3(~VAR_7, VAR_10->base + VAR_1);

 return 0;
}
