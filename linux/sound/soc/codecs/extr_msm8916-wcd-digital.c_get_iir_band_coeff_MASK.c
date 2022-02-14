
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct snd_soc_component {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct snd_soc_component*,scalar_t__) ;
 int FUNC_1 (struct snd_soc_component*,scalar_t__,int) ;

__attribute__((used)) static uint32_t FUNC_2(struct snd_soc_component *VAR_3,
       int VAR_4, int VAR_5,
       int VAR_6)
{
 uint32_t VAR_7 = 0;


 FUNC_1(VAR_3,
  (VAR_1 + 64 * VAR_4),
  ((VAR_5 * VAR_0 + VAR_6)
  * sizeof(uint32_t)) & 0x7F);

 VAR_7 |= FUNC_0(VAR_3,
  (VAR_2 + 64 * VAR_4));

 FUNC_1(VAR_3,
  (VAR_1 + 64 * VAR_4),
  ((VAR_5 * VAR_0 + VAR_6)
  * sizeof(uint32_t) + 1) & 0x7F);

 VAR_7 |= (FUNC_0(VAR_3,
  (VAR_2 + 64 * VAR_4)) << 8);

 FUNC_1(VAR_3,
  (VAR_1 + 64 * VAR_4),
  ((VAR_5 * VAR_0 + VAR_6)
  * sizeof(uint32_t) + 2) & 0x7F);

 VAR_7 |= (FUNC_0(VAR_3,
  (VAR_2 + 64 * VAR_4)) << 16);

 FUNC_1(VAR_3,
  (VAR_1 + 64 * VAR_4),
  ((VAR_5 * VAR_0 + VAR_6)
  * sizeof(uint32_t) + 3) & 0x7F);


 VAR_7 |= ((FUNC_0(VAR_3,
   (VAR_2 + 64 * VAR_4)) & 0x3f) << 24);
 return VAR_7;

}
