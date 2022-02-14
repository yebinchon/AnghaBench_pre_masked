
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 char* VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char const*,char*) ;
 int FUNC_3 (int ,char*,char*) ;
 int FUNC_4 (unsigned char*,int,int,int *) ;
 int FUNC_5 (int *,int ,int ) ;
 int FUNC_6 (int *) ;
 unsigned char* FUNC_7 (int) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (int *) ;
 int VAR_3 ;

unsigned char* FUNC_10(const char *VAR_4)
{
  FILE *VAR_5;
  int VAR_6;
  unsigned char *VAR_7;

  VAR_5 = FUNC_2(VAR_4, "rb");
  if (VAR_5 == ((void*)0)) {
    FUNC_8(VAR_2);
    FUNC_0(-1);
  }

  FUNC_5(VAR_5, 0, VAR_1);
  VAR_6 = FUNC_6(VAR_5);

  if (VAR_6 != VAR_0) {
    FUNC_3(VAR_3, "%s: image file has wrong size\n", VAR_2);
    FUNC_1(VAR_5);
    FUNC_0(-1);
  }

  FUNC_9(VAR_5);

  VAR_7 = FUNC_7(VAR_0);
  if (VAR_7 == ((void*)0)) {
    FUNC_8(VAR_2);
    FUNC_1(VAR_5);
    FUNC_0(-1);
  }

  if (FUNC_4(VAR_7, 1, VAR_0, VAR_5) != VAR_0) {
    FUNC_3(VAR_3, "%s: can't read image file\n", VAR_2);
    FUNC_1(VAR_5);
    FUNC_0(-1);
  }

  FUNC_1(VAR_5);
  return VAR_7;
}
