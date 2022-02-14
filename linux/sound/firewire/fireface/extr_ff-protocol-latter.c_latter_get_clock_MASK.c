
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct snd_ff {int unit; } ;
typedef int reg ;
typedef enum snd_ff_clock_src { ____Placeholder_snd_ff_clock_src } snd_ff_clock_src ;
typedef int __le32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,unsigned int*,int*) ;
 int FUNC_2 (int ,int ,int ,int *,int,int ) ;

__attribute__((used)) static int FUNC_3(struct snd_ff *VAR_2, unsigned int *VAR_3,
      enum snd_ff_clock_src *VAR_4)
{
 __le32 VAR_5;
 u32 VAR_6;
 int VAR_7;

 VAR_7 = FUNC_2(VAR_2->unit, VAR_1,
     VAR_0, &VAR_5, sizeof(VAR_5), 0);
 if (VAR_7 < 0)
  return VAR_7;
 VAR_6 = FUNC_0(VAR_5);

 return FUNC_1(VAR_6, VAR_3, VAR_4);
}
