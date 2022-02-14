
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct snd_intelhad {scalar_t__ dp_output; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct snd_intelhad*,int ,int) ;

__attribute__((used)) static int FUNC_3(u32 VAR_2, u32 *VAR_3,
        struct snd_intelhad *VAR_4)
{
 int VAR_5;

 if (VAR_4->dp_output) {
  VAR_5 = VAR_1;
 } else
  VAR_5 = FUNC_1(VAR_2);

 if (VAR_5 < 0)
  return VAR_5;

 FUNC_2(VAR_4, VAR_0, (FUNC_0(24) | VAR_5));
 *VAR_3 = VAR_5;
 return 0;
}
