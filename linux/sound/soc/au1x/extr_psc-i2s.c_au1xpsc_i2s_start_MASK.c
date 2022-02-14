
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct au1xpsc_audio_data {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 unsigned long FUNC_3 (int) ;
 int FUNC_4 (struct au1xpsc_audio_data*) ;
 int FUNC_5 (struct au1xpsc_audio_data*) ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long FUNC_6 (int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (struct au1xpsc_audio_data*) ;
 int FUNC_9 () ;

__attribute__((used)) static int FUNC_10(struct au1xpsc_audio_data *VAR_3, int VAR_4)
{
 unsigned long VAR_5, VAR_6;
 int VAR_7;

 VAR_7 = 0;


 VAR_6 = FUNC_6(FUNC_5(VAR_3));
 if (!(VAR_6 & (VAR_2 | VAR_1))) {
  VAR_7 = FUNC_8(VAR_3);
  if (VAR_7)
   goto out;
 }

 FUNC_7(FUNC_0(VAR_4), FUNC_4(VAR_3));
 FUNC_9();
 FUNC_7(FUNC_1(VAR_4), FUNC_4(VAR_3));
 FUNC_9();


 VAR_5 = 1000000;
 while (!(FUNC_6(FUNC_5(VAR_3)) & FUNC_3(VAR_4)) && VAR_5)
  VAR_5--;

 if (!VAR_5) {
  FUNC_7(FUNC_2(VAR_4), FUNC_4(VAR_3));
  FUNC_9();
  VAR_7 = -VAR_0;
 }
out:
 return VAR_7;
}
