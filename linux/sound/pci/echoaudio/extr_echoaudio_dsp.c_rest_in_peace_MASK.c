
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct echoaudio {int * dsp_code; int active_mask; } ;


 int VAR_0 ;
 int FUNC_0 (struct echoaudio*,int) ;
 int FUNC_1 (struct echoaudio*,int ) ;
 int FUNC_2 (struct echoaudio*,int) ;
 int FUNC_3 (struct echoaudio*,int ) ;

__attribute__((used)) static int FUNC_4(struct echoaudio *VAR_1)
{


 FUNC_3(VAR_1, VAR_1->active_mask);

 FUNC_2(VAR_1, 0);






 if (VAR_1->dsp_code) {

  VAR_1->dsp_code = ((void*)0);

  return FUNC_1(VAR_1, VAR_0);
 }
 return 0;
}
