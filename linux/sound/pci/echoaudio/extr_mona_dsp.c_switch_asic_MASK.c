
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct echoaudio {scalar_t__ device_id; short asic_code; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 short VAR_2 ;
 short VAR_3 ;
 short VAR_4 ;
 short VAR_5 ;
 int FUNC_0 (struct echoaudio*,int ,short) ;

__attribute__((used)) static int FUNC_1(struct echoaudio *VAR_6, char VAR_7)
{
 int VAR_8;
 short VAR_9;




 if (VAR_6->device_id == VAR_0) {
  if (VAR_7)
   VAR_9 = VAR_5;
  else
   VAR_9 = VAR_4;
 } else {
  if (VAR_7)
   VAR_9 = VAR_3;
  else
   VAR_9 = VAR_2;
 }

 if (VAR_9 != VAR_6->asic_code) {

  VAR_8 = FUNC_0(VAR_6, VAR_1,
     VAR_9);
  if (VAR_8 < 0)
   return VAR_8;
  VAR_6->asic_code = VAR_9;
 }

 return 0;
}
