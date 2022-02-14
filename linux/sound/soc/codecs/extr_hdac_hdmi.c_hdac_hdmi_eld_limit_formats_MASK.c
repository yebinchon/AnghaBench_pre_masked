
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
struct snd_pcm_runtime {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (int const*) ;
 int FUNC_1 (int const*) ;
 int FUNC_2 (int const*) ;
 int FUNC_3 (int const*) ;
 int FUNC_4 (struct snd_pcm_runtime*,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct snd_pcm_runtime *VAR_3,
      void *VAR_4)
{
 u64 VAR_5 = VAR_0;
 int VAR_6;
 const u8 *VAR_7, *VAR_8 = VAR_4;

 VAR_7 = FUNC_0(VAR_8);
 if (!VAR_7)
  goto format_constraint;

 for (VAR_6 = FUNC_1(VAR_8); VAR_6 > 0; VAR_6--, VAR_7 += 3) {
  if (FUNC_2(VAR_7) == 1) {





   if (FUNC_3(VAR_7) & 0x6)
    VAR_5 |= VAR_1;
  }
 }

format_constraint:
 return FUNC_4(VAR_3, VAR_2,
    VAR_5);

}
