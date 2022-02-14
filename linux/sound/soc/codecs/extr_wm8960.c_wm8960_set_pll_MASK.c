
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct snd_soc_component {int dummy; } ;
struct _pll_div {int pre_div; int n; int k; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (unsigned int,unsigned int,struct _pll_div*) ;
 int FUNC_2 (struct snd_soc_component*,int ) ;
 int FUNC_3 (struct snd_soc_component*,int ,int,int) ;
 int FUNC_4 (struct snd_soc_component*,int ,int) ;

__attribute__((used)) static int FUNC_5(struct snd_soc_component *VAR_6,
  unsigned int VAR_7, unsigned int VAR_8)
{
 u16 VAR_9;
 static struct _pll_div VAR_10;
 int VAR_11;

 if (VAR_7 && VAR_8) {
  VAR_11 = FUNC_1(VAR_7, VAR_8, &VAR_10);
  if (VAR_11 != 0)
   return VAR_11;
 }



 FUNC_3(VAR_6, VAR_0, 0x1, 0);
 FUNC_3(VAR_6, VAR_5, 0x1, 0);

 if (!VAR_7 || !VAR_8)
  return 0;

 VAR_9 = FUNC_2(VAR_6, VAR_1) & ~0x3f;
 VAR_9 |= VAR_10.pre_div << 4;
 VAR_9 |= VAR_10.n;

 if (VAR_10.k) {
  VAR_9 |= 0x20;

  FUNC_4(VAR_6, VAR_2, (VAR_10.k >> 16) & 0xff);
  FUNC_4(VAR_6, VAR_3, (VAR_10.k >> 8) & 0xff);
  FUNC_4(VAR_6, VAR_4, VAR_10.k & 0xff);
 }
 FUNC_4(VAR_6, VAR_1, VAR_9);


 FUNC_3(VAR_6, VAR_5, 0x1, 0x1);
 FUNC_0(250);
 FUNC_3(VAR_6, VAR_0, 0x1, 0x1);

 return 0;
}
