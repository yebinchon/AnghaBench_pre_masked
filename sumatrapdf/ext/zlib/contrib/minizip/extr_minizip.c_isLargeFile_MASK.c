
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ZPOS64_T ;
typedef int FILE ;


 int * FUNC_0 (char const*,char*) ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,char const*,int) ;

int FUNC_5(const char* VAR_1)
{
  int VAR_2 = 0;
  ZPOS64_T VAR_3 = 0;
  FILE* VAR_4 = FUNC_0(VAR_1, "rb");

  if(VAR_4 != ((void*)0))
  {
    int VAR_5 = FUNC_1(VAR_4, 0, VAR_0);
    VAR_3 = FUNC_2(VAR_4);

                FUNC_4("File : %s is %lld bytes\n", VAR_1, VAR_3);

    if(VAR_3 >= 0xffffffff)
     VAR_2 = 1;

                FUNC_3(VAR_4);
  }

 return VAR_2;
}
