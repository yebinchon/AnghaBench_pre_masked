
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct snd_azf3328_codec_data {unsigned int io_base; } ;


 int FUNC_0 (int ,unsigned long) ;

__attribute__((used)) static inline void
FUNC_1(const struct snd_azf3328_codec_data *VAR_0,
        unsigned VAR_1, const void *VAR_2, int VAR_3
)
{
 unsigned long VAR_4 = VAR_0->io_base + VAR_1;
 if (VAR_3) {
  const u32 *VAR_5 = VAR_2;
  do {
   FUNC_0(*VAR_5++, VAR_4);
   VAR_4 += 4;
  } while (--VAR_3);
 }
}
