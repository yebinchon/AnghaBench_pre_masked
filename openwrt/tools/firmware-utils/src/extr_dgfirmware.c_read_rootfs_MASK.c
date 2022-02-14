
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char const*,char*) ;
 int FUNC_3 (int ,char*,char*) ;
 int FUNC_4 (unsigned char*,int,int,int *) ;
 int FUNC_5 (int *,int ,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (int *) ;
 int VAR_4 ;

unsigned char* FUNC_9(unsigned char* VAR_5, const char *VAR_6)
{
  FILE *VAR_7;
  int VAR_8;
  int VAR_9;

  for (VAR_9=VAR_1; VAR_9<VAR_1+VAR_0; VAR_9++)
    VAR_5[VAR_9] = 0xff;

  VAR_7 = FUNC_2(VAR_6, "rb");
  if (VAR_7 == ((void*)0)) {
    FUNC_7(VAR_3);
    FUNC_0(-1);
  }

  FUNC_5(VAR_7, 0, VAR_2);
  VAR_8 = FUNC_6(VAR_7);

  if (VAR_8 > VAR_0) {
    FUNC_3(VAR_4, "%s: rootfs image file is too big\n", VAR_3);
    FUNC_1(VAR_7);
    FUNC_0(-1);
  }

  FUNC_8(VAR_7);

  if (FUNC_4(VAR_5+VAR_1, 1, VAR_8, VAR_7) != VAR_8) {
    FUNC_3(VAR_4, "%s: can't read rootfs image file\n", VAR_3);
    FUNC_1(VAR_7);
    FUNC_0(-1);
  }

  FUNC_1(VAR_7);
  return VAR_5;
}
