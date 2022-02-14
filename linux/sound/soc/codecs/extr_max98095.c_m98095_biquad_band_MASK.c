
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct snd_soc_component {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct snd_soc_component*,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct snd_soc_component *VAR_3, unsigned int VAR_4,
      unsigned int VAR_5, u16 *VAR_6)
{
 unsigned int VAR_7;
 unsigned int VAR_8;

 if (FUNC_2(VAR_5 > 1) ||
     FUNC_2(VAR_4 > 1))
  return;


 VAR_7 = VAR_4 ? VAR_1 : VAR_0;


 VAR_7 += VAR_5 * (VAR_2 << 1);


 for (VAR_8 = 0; VAR_8 < VAR_2; VAR_8++) {
  FUNC_3(VAR_3, VAR_7++, FUNC_1(VAR_6[VAR_8]));
  FUNC_3(VAR_3, VAR_7++, FUNC_0(VAR_6[VAR_8]));
 }
}
