
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct echoaudio {scalar_t__ device_id; short asic_code; scalar_t__ asic_loaded; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 short VAR_2 ;
 short VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct echoaudio*) ;
 int FUNC_1 (struct echoaudio*,int ,short) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct echoaudio*,int,int) ;

__attribute__((used)) static int FUNC_4(struct echoaudio *VAR_6)
{
 u32 VAR_7;
 int VAR_8;
 short VAR_9;

 if (VAR_6->asic_loaded)
  return 1;


 FUNC_2(10);


 if (VAR_6->device_id == VAR_0)
  VAR_9 = VAR_3;
 else
  VAR_9 = VAR_2;

 VAR_8 = FUNC_1(VAR_6, VAR_1, VAR_9);
 if (VAR_8 < 0)
  return VAR_8;

 VAR_6->asic_code = VAR_9;


 FUNC_2(10);

 VAR_8 = FUNC_0(VAR_6);



 if (!VAR_8) {
  VAR_7 = VAR_5 | VAR_4;
  VAR_8 = FUNC_3(VAR_6, VAR_7, 1);
 }
 return VAR_8;
}
