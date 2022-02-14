
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct snd_soc_component {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct snd_soc_component*,scalar_t__,int) ;

__attribute__((used)) static void FUNC_1(struct snd_soc_component *VAR_1,
    int VAR_2, int VAR_3,
    uint32_t VAR_4)
{
 FUNC_0(VAR_1,
  (VAR_0 + 64 * VAR_2),
  (VAR_4 & 0xFF));

 FUNC_0(VAR_1,
  (VAR_0 + 64 * VAR_2),
  (VAR_4 >> 8) & 0xFF);

 FUNC_0(VAR_1,
  (VAR_0 + 64 * VAR_2),
  (VAR_4 >> 16) & 0xFF);


 FUNC_0(VAR_1,
  (VAR_0 + 64 * VAR_2),
  (VAR_4 >> 24) & 0x3F);
}
