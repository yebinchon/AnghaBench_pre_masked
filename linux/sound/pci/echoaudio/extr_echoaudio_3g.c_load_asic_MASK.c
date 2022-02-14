
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct echoaudio {int asic_code; scalar_t__ asic_loaded; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct echoaudio*) ;
 int FUNC_1 (struct echoaudio*,int ,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct echoaudio*,int ,int ,int) ;

__attribute__((used)) static int FUNC_5(struct echoaudio *VAR_4)
{
 int VAR_5, VAR_6;

 if (VAR_4->asic_loaded)
  return 0;


 FUNC_2(2);

 VAR_6 = FUNC_1(VAR_4, VAR_0, VAR_3);
 if (VAR_6 < 0)
  return VAR_6;

 VAR_4->asic_code = VAR_3;


 FUNC_3(1000);

 VAR_5 = FUNC_0(VAR_4);



 if (VAR_5 >= 0) {
  VAR_6 = FUNC_4(VAR_4, VAR_1,
     VAR_2, 1);
  if (VAR_6 < 0)
   return VAR_6;
 }

 return VAR_5;
}
