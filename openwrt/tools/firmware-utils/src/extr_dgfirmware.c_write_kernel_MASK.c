
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 char* VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char const*,char*) ;
 int FUNC_3 (int ,char*,char*) ;
 scalar_t__ FUNC_4 (unsigned char*,int,scalar_t__,int *) ;
 int FUNC_5 (char*) ;
 int VAR_3 ;

void FUNC_6(unsigned char* VAR_4, const char *VAR_5)
{
  FILE *VAR_6;

  VAR_6 = FUNC_2(VAR_5, "wb");
  if (VAR_6 == ((void*)0)) {
    FUNC_5(VAR_2);
    FUNC_0(-1);
  }

  if (FUNC_4(VAR_4+VAR_1, 1, VAR_0, VAR_6) != VAR_0) {
    FUNC_3(VAR_3, "%s: can't write kernel file\n", VAR_2);
    FUNC_1(VAR_6);
    FUNC_0(-1);
  }
}
