
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct echoaudio {scalar_t__ device_id; short asic_code; scalar_t__ asic_loaded; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 short VAR_3 ;
 short VAR_4 ;
 short VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct echoaudio*) ;
 int FUNC_1 (struct echoaudio*,int ,short) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct echoaudio*,int,int) ;

__attribute__((used)) static int FUNC_4(struct echoaudio *VAR_8)
{
 u32 VAR_9;
 int VAR_10;
 short VAR_11;

 if (VAR_8->asic_loaded)
  return 0;

 FUNC_2(10);

 if (VAR_8->device_id == VAR_0)
  VAR_11 = VAR_5;
 else
  VAR_11 = VAR_4;

 VAR_10 = FUNC_1(VAR_8, VAR_2, VAR_11);
 if (VAR_10 < 0)
  return VAR_10;

 VAR_8->asic_code = VAR_11;
 FUNC_2(10);


 VAR_10 = FUNC_1(VAR_8, VAR_1,
    VAR_3);
 if (VAR_10 < 0)
  return VAR_10;

 FUNC_2(10);
 VAR_10 = FUNC_0(VAR_8);



 if (!VAR_10) {
  VAR_9 = VAR_7 | VAR_6;
  VAR_10 = FUNC_3(VAR_8, VAR_9, 1);
 }

 return VAR_10;
}
