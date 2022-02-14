
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct parport {int dummy; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ FUNC_0 (struct platform_device*) ;
 struct platform_device* FUNC_1 (int ,size_t) ;
 int FUNC_2 (struct platform_device*) ;
 int FUNC_3 (struct platform_device*) ;
 struct platform_device** VAR_2 ;
 int FUNC_4 (struct platform_device*) ;
 int FUNC_5 (struct platform_device*,struct parport*) ;

__attribute__((used)) static void FUNC_6(struct parport *VAR_3)
{
 struct platform_device *VAR_4;

 VAR_4 = FUNC_1(VAR_0, VAR_1);
 if (!VAR_4)
  return;


 FUNC_5(VAR_4, VAR_3);

 if (FUNC_0(VAR_4) < 0) {
  FUNC_2(VAR_4);
  return;
 }



 if (!FUNC_4(VAR_4)) {
  FUNC_3(VAR_4);
  return;
 }


 VAR_2[VAR_1] = VAR_4;
 VAR_1++;
}
