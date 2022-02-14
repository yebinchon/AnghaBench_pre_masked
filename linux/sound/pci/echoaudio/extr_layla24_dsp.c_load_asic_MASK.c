
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct echoaudio {int asic_code; scalar_t__ asic_loaded; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct echoaudio*) ;
 int FUNC_1 (struct echoaudio*,int ,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct echoaudio*,int,int) ;

__attribute__((used)) static int FUNC_4(struct echoaudio *VAR_6)
{
 int VAR_7;

 if (VAR_6->asic_loaded)
  return 1;



 FUNC_2(10);


 VAR_7 = FUNC_1(VAR_6, VAR_1,
    VAR_2);
 if (VAR_7 < 0)
  return VAR_7;

 VAR_6->asic_code = VAR_3;


 FUNC_2(10);


 VAR_7 = FUNC_1(VAR_6, VAR_0,
    VAR_3);
 if (VAR_7 < 0)
  return VAR_7;


 FUNC_2(10);


 VAR_7 = FUNC_0(VAR_6);



 if (!VAR_7)
  VAR_7 = FUNC_3(VAR_6, VAR_5 | VAR_4,
     1);

 return VAR_7;
}
