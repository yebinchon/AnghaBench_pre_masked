
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s3c24xx_audio_simtec_pdata {int (* startup ) () ;} ;


 int FUNC_0 () ;

__attribute__((used)) static int FUNC_1(struct s3c24xx_audio_simtec_pdata *VAR_0)
{



 if (VAR_0->startup)
  VAR_0->startup();

 return 0;
}
