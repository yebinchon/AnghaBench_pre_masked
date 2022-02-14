
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;
struct TYPE_2__ {int pre_div; int n; int k; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_1__ VAR_6 ;
 int FUNC_0 (unsigned int,unsigned int) ;
 int FUNC_1 (struct snd_soc_component*,int ) ;
 int FUNC_2 (struct snd_soc_component*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct snd_soc_dai *VAR_7, int VAR_8,
  int VAR_9, unsigned int VAR_10, unsigned int VAR_11)
{
 struct snd_soc_component *VAR_12 = VAR_7->component;
 u16 VAR_13;

 if (VAR_10 == 0 || VAR_11 == 0) {

  VAR_13 = FUNC_1(VAR_12, VAR_0);
  FUNC_2(VAR_12, VAR_0, VAR_13 & 0x0ff);


  VAR_13 = FUNC_1(VAR_12, VAR_5);
  FUNC_2(VAR_12, VAR_5, VAR_13 & 0x1df);
  return 0;
 }

 FUNC_0(VAR_11*4, VAR_10);

 FUNC_2(VAR_12, VAR_4, (VAR_6.pre_div << 4) | VAR_6.n);
 FUNC_2(VAR_12, VAR_1, VAR_6.k >> 18);
 FUNC_2(VAR_12, VAR_2, (VAR_6.k >> 9) & 0x1ff);
 FUNC_2(VAR_12, VAR_3, VAR_6.k & 0x1ff);
 VAR_13 = FUNC_1(VAR_12, VAR_5);
 FUNC_2(VAR_12, VAR_5, VAR_13 | 0x020);


 VAR_13 = FUNC_1(VAR_12, VAR_0);
 FUNC_2(VAR_12, VAR_0, VAR_13 | 0x100);

 return 0;
}
