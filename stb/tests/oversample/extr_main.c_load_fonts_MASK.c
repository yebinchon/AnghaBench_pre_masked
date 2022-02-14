
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int stbtt_pack_context ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__* VAR_8 ;
 int FUNC_0 (int ) ;
 int VAR_9 ;
 int * FUNC_1 (char*,char*) ;
 int FUNC_2 (int ,int,int,int *) ;
 char* FUNC_3 (char*) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int,int *) ;
 int FUNC_6 (int ,int ,int ,int ,int ,int ,int ,int ,int *) ;
 int FUNC_7 (int ,int ,int ) ;
 int * VAR_10 ;
 int FUNC_8 (char*,char*,char*) ;
 char* VAR_11 ;
 int FUNC_9 (int *,int ,int ,int ,int ,int,int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,int ,int ,int ,int,int,scalar_t__) ;
 int FUNC_12 (int *,int,int) ;
 int * VAR_12 ;
 int VAR_13 ;

void FUNC_13(void)
{
   stbtt_pack_context VAR_14;
   int VAR_15;
   FILE *VAR_16;
   char VAR_17[256];
   char *VAR_18 = FUNC_3("windir");
   if (VAR_18 == ((void*)0)) VAR_18 = FUNC_3("SystemRoot");

   VAR_16 = FUNC_1(VAR_11, "rb");
   if (!VAR_16) {
      if (VAR_18 == ((void*)0))
         FUNC_8(VAR_17, "arial.ttf", VAR_18);
      else
         FUNC_8(VAR_17, "%s/fonts/arial.ttf", VAR_18);
      VAR_16 = FUNC_1(VAR_17, "rb");
      if (!VAR_16) FUNC_0(0);
   }

   FUNC_2(VAR_13, 1, 1<<25, VAR_16);

   FUNC_9(&VAR_14, VAR_12[0], VAR_1, VAR_0, 0, 1, ((void*)0));
   for (VAR_15=0; VAR_15 < 2; ++VAR_15) {
      FUNC_12(&VAR_14, 1, 1);
      FUNC_11(&VAR_14, VAR_13, 0, VAR_10[VAR_15], 32, 95, VAR_8[VAR_15*3+0]+32);
      FUNC_12(&VAR_14, 2, 2);
      FUNC_11(&VAR_14, VAR_13, 0, VAR_10[VAR_15], 32, 95, VAR_8[VAR_15*3+1]+32);
      FUNC_12(&VAR_14, 3, 1);
      FUNC_11(&VAR_14, VAR_13, 0, VAR_10[VAR_15], 32, 95, VAR_8[VAR_15*3+2]+32);
   }
   FUNC_10(&VAR_14);

   FUNC_5(1, &VAR_9);
   FUNC_4(VAR_4, VAR_9);
   FUNC_6(VAR_4, 0, VAR_2, VAR_1, VAR_0, 0, VAR_2, VAR_7, VAR_12);
   FUNC_7(VAR_4, VAR_6, VAR_3);
   FUNC_7(VAR_4, VAR_5, VAR_3);
}
