
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 scalar_t__ VAR_0 ;
 char* VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char const*,char*) ;
 int FUNC_3 (int ,char*,char*) ;
 scalar_t__ FUNC_4 (unsigned char*,int,scalar_t__,int *) ;
 int FUNC_5 (char*) ;
 int VAR_2 ;

void FUNC_6(unsigned char* VAR_3, const char *VAR_4)
{
  FILE *VAR_5;

  VAR_5 = FUNC_2(VAR_4, "wb");
  if (VAR_5 == ((void*)0)) {
    FUNC_5(VAR_1);
    FUNC_0(-1);
  }

  if (FUNC_4(VAR_3, 1, VAR_0, VAR_5) != VAR_0) {
    FUNC_3(VAR_2, "%s: can't write image file\n", VAR_1);
    FUNC_1(VAR_5);
    FUNC_0(-1);
  }
}
