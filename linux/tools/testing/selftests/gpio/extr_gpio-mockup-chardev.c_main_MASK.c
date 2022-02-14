
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpiochip_info {int lines; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,char*) ;
 int FUNC_2 (struct gpiochip_info*) ;
 int FUNC_3 (struct gpiochip_info*,int) ;
 struct gpiochip_info* FUNC_4 (char*,int*) ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 () ;
 int VAR_2 ;
 scalar_t__ FUNC_7 (char*,char*) ;

int FUNC_8(int VAR_3, char *VAR_4[])
{
 char *VAR_5;
 int VAR_6;
 struct gpiochip_info *VAR_7;
 struct gpiochip_info *VAR_8;
 int VAR_9;
 int VAR_10;

 if (VAR_3 < 3) {
  FUNC_5("Usage: %s prefix is_valid", VAR_4[0]);
  FUNC_0(VAR_1);
 }

 VAR_5 = VAR_4[1];
 VAR_6 = FUNC_7(VAR_4[2], "true") == 0 ? 1 : 0;

 FUNC_5("Test gpiochip %s: ", VAR_5);
 VAR_7 = FUNC_4(VAR_5, &VAR_10);
 if (!VAR_7) {
  if (!VAR_6 && VAR_10 == 0) {
   FUNC_5("Invalid test successful\n");
   VAR_10 = 0;
   goto out;
  } else {
   VAR_10 = -VAR_0;
   goto out;
  }
 } else if (VAR_7 && !VAR_6) {
  VAR_10 = -VAR_0;
  goto out;
 }
 VAR_8 = VAR_7;
 for (VAR_9 = 0; VAR_9 < VAR_10; VAR_9++) {
  FUNC_3(VAR_8, 0);
  FUNC_3(VAR_8, VAR_8->lines - 1);
  FUNC_3(VAR_8, FUNC_6() % VAR_8->lines);
  VAR_8++;
 }
 VAR_10 = 0;
 FUNC_5("successful\n");

out:
 if (VAR_10)
  FUNC_1(VAR_2, "gpio<%s> test failed\n", VAR_5);

 if (VAR_7)
  FUNC_2(VAR_7);

 if (VAR_10)
  FUNC_0(VAR_1);

 return VAR_10;
}
