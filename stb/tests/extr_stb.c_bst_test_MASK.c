
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_1__ ;


typedef int sorted ;
typedef int items ;
struct TYPE_23__ {int v; } ;
typedef TYPE_1__ Btest ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,int) ;
 TYPE_1__* FUNC_2 (TYPE_1__*,int) ;
 TYPE_1__* FUNC_3 (TYPE_1__*) ;
 TYPE_1__* FUNC_4 (TYPE_1__*,TYPE_1__*) ;
 TYPE_1__* FUNC_5 (TYPE_1__*) ;
 TYPE_1__* FUNC_6 (TYPE_1__*,TYPE_1__*) ;
 TYPE_1__* FUNC_7 (TYPE_1__*,TYPE_1__*) ;
 TYPE_1__* FUNC_8 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_9 (int ,char*) ;
 int FUNC_10 (TYPE_1__*) ;
 TYPE_1__* FUNC_11 (int) ;
 int FUNC_12 (int*,int*,int) ;
 int FUNC_13 (int*,int,int,int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 () ;
 int FUNC_16 (int*,int,int) ;
 int FUNC_17 (int*,int,int,int) ;

void FUNC_18(void)
{
   Btest *VAR_0 = ((void*)0), *VAR_1;
   int VAR_2[500], VAR_3[500];
   int VAR_4,VAR_5,VAR_6;
   for (VAR_6=0; VAR_6 < 10; ++VAR_6) {
      for (VAR_4=0; VAR_4 < 500; ++VAR_4)
         VAR_2[VAR_4] = FUNC_15() & 0xfffffff;


      FUNC_12(VAR_3, VAR_2, sizeof(VAR_3));
      FUNC_13(VAR_3, 500, sizeof(VAR_3[0]), FUNC_14(0));
      for (VAR_4=1; VAR_4 < 500; ++VAR_4)
         if (VAR_3[VAR_4-1] == VAR_3[VAR_4])
            break;
      if (VAR_4 != 500) { --VAR_6; break; }

      for (VAR_4=0; VAR_4 < 500; ++VAR_4) {
         VAR_1 = FUNC_11(sizeof(*VAR_1));
         VAR_1->v = VAR_2[VAR_4];
         VAR_0 = FUNC_4(VAR_0, VAR_1);



         for (VAR_5=0; VAR_5 <= VAR_4; ++VAR_5)
            FUNC_9(FUNC_2(VAR_0, VAR_2[VAR_5]) != ((void*)0), "stb_bst 1");
         for ( ; VAR_5 < 500; ++VAR_5)
            FUNC_9(FUNC_2(VAR_0, VAR_2[VAR_5]) == ((void*)0), "stb_bst 2");
      }

      VAR_1 = FUNC_3(VAR_0);
      for (VAR_4=0; VAR_4 < 500; ++VAR_4)
         VAR_1 = FUNC_6(VAR_0,VAR_1);
      FUNC_9(VAR_1 == ((void*)0), "stb_bst 5");
      VAR_1 = FUNC_5(VAR_0);
      for (VAR_4=0; VAR_4 < 500; ++VAR_4)
         VAR_1 = FUNC_7(VAR_0,VAR_1);
      FUNC_9(VAR_1 == ((void*)0), "stb_bst 6");

      FUNC_12(VAR_3, VAR_2, sizeof(VAR_3));
      FUNC_13(VAR_3, 500, sizeof(VAR_3[0]), FUNC_14(0));
      VAR_1 = FUNC_3(VAR_0);
      for (VAR_4=0; VAR_4 < 500; ++VAR_4) {
         FUNC_0(VAR_1->v == VAR_3[VAR_4]);
         VAR_1 = FUNC_6(VAR_0, VAR_1);
      }
      FUNC_0(VAR_1 == ((void*)0));

      if (VAR_6==1)
         FUNC_16(VAR_2, 500, sizeof(VAR_2[0]));
      else if (VAR_6)
         FUNC_17(VAR_2, 500, sizeof(VAR_2[0]), FUNC_15());

      for (VAR_4=0; VAR_4 < 500; ++VAR_4) {
         VAR_1 = FUNC_2(VAR_0, VAR_2[VAR_4]);
         FUNC_0(VAR_1 != ((void*)0));
         VAR_0 = FUNC_8(VAR_0, VAR_1);
         FUNC_9(FUNC_2(VAR_0, VAR_2[VAR_4]) == ((void*)0), "stb_bst 5");



         for (VAR_5=0; VAR_5 <= VAR_4; ++VAR_5)
            FUNC_9(FUNC_2(VAR_0, VAR_2[VAR_5]) == ((void*)0), "stb_bst 3");
         for ( ; VAR_5 < 500; ++VAR_5)
            FUNC_9(FUNC_2(VAR_0, VAR_2[VAR_5]) != ((void*)0), "stb_bst 4");
         FUNC_10(VAR_1);
      }
   }
}
