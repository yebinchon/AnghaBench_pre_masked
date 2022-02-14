
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct firmware {scalar_t__ data; } ;
struct echoaudio {int dsp_code_to_load; int * dsp_code; int comm_page; } ;


 int VAR_0 ;
 int FUNC_0 (struct echoaudio*) ;
 int FUNC_1 (struct firmware const*,struct echoaudio*) ;
 int FUNC_2 (struct firmware const**,struct echoaudio*,int ) ;
 int FUNC_3 (struct echoaudio*) ;
 int FUNC_4 (struct echoaudio*,int *) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6(struct echoaudio *VAR_1)
{
 const struct firmware *VAR_2;
 int VAR_3, VAR_4;

 if (FUNC_5(!VAR_1->comm_page))
  return -VAR_0;


 if (VAR_1->dsp_code) {
  if ((VAR_3 = FUNC_0(VAR_1)) >= 0)
   return VAR_3;

  VAR_1->dsp_code = ((void*)0);
 }

 VAR_4 = FUNC_2(&VAR_2, VAR_1, VAR_1->dsp_code_to_load);
 if (VAR_4 < 0)
  return VAR_4;
 VAR_4 = FUNC_4(VAR_1, (u16 *)VAR_2->data);
 FUNC_1(VAR_2, VAR_1);
 if (VAR_4 < 0)
  return VAR_4;

 if ((VAR_3 = FUNC_3(VAR_1)) < 0)
  return VAR_3;

 return VAR_3;
}
