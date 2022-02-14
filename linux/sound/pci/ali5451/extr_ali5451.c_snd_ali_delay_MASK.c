
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_ali {int dummy; } ;


 int FUNC_0 (struct snd_ali*,int ) ;
 int VAR_0 ;
 int FUNC_1 () ;
 unsigned long FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct snd_ali*) ;

__attribute__((used)) static void FUNC_4(struct snd_ali *VAR_1,int VAR_2)
{
 unsigned long VAR_3,VAR_4;

 VAR_3 = FUNC_2(FUNC_0(VAR_1, VAR_0));
 VAR_4 = FUNC_2(FUNC_0(VAR_1, VAR_0));

 while (VAR_4 < VAR_3 + VAR_2) {
  if (FUNC_3(VAR_1) < 0)
   break;
  VAR_4 = FUNC_2(FUNC_0(VAR_1, VAR_0));
  FUNC_1();
 }
}
