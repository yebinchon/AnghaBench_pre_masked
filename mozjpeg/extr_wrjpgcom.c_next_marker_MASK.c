
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 () ;
 int VAR_0 ;

__attribute__((used)) static int
FUNC_2(void)
{
  int VAR_1;
  int VAR_2 = 0;


  VAR_1 = FUNC_1();
  while (VAR_1 != 0xFF) {
    VAR_2++;
    VAR_1 = FUNC_1();
  }



  do {
    VAR_1 = FUNC_1();
  } while (VAR_1 == 0xFF);

  if (VAR_2 != 0) {
    FUNC_0(VAR_0, "Warning: garbage data found in JPEG file\n");
  }

  return VAR_1;
}
