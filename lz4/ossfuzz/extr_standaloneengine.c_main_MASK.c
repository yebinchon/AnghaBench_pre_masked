
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int FILE ;


 int FUNC_0 (int *,size_t) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (size_t,int) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (char*,char*) ;
 int FUNC_4 (int ,char*,char*,...) ;
 int FUNC_5 (int *,int,size_t,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,long,int ) ;
 size_t FUNC_8 (int *) ;
 int FUNC_9 (char*,...) ;
 int VAR_2 ;

int FUNC_10(int VAR_3, char **VAR_4)
{
  int VAR_5;
  for(VAR_5 = 1; VAR_5 < VAR_3; VAR_5++)
  {
    FILE *VAR_6;
    FUNC_9("[%s] ", VAR_4[VAR_5]);


    VAR_6 = FUNC_3(VAR_4[VAR_5], "rb");
    if(VAR_6)
    {
      uint8_t *VAR_7 = ((void*)0);
      size_t VAR_8;

      FUNC_9("Opened.. ");


      FUNC_7(VAR_6, 0L, VAR_0);
      VAR_8 = FUNC_8(VAR_6);


      FUNC_7(VAR_6, 0L, VAR_1);


      VAR_7 = (uint8_t *)FUNC_1(VAR_8, sizeof(uint8_t));
      if(VAR_7)
      {

        FUNC_5(VAR_7, sizeof(uint8_t), VAR_8, VAR_6);
        FUNC_9("Read %zu bytes, fuzzing.. ", VAR_8);


        FUNC_0(VAR_7, VAR_8);

        FUNC_9("complete !!");


        FUNC_6(VAR_7);
        VAR_7 = ((void*)0);
      }
      else
      {
        FUNC_4(VAR_2,
                "[%s] Failed to allocate %zu bytes \n",
                VAR_4[VAR_5],
                VAR_8);
      }


      FUNC_2(VAR_6);
      VAR_6 = ((void*)0);
    }
    else
    {

      FUNC_4(VAR_2, "[%s] Open failed. \n", VAR_4[VAR_5]);
    }

    FUNC_9("\n");
  }
}
