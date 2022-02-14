
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char wchar_t ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char** VAR_4 ;
 char** VAR_5 ;
 char* VAR_6 ;
 char* FUNC_3 (char*) ;
 char* VAR_7 ;
 int FUNC_4 (char*) ;
 void* FUNC_5 (int) ;
 size_t FUNC_6 (char*) ;
 int FUNC_7 (char*,int) ;
 int FUNC_8 (int ,int) ;

void FUNC_9(int* VAR_8, wchar_t*** VAR_9, wchar_t*** VAR_10,
                    int VAR_11, int* VAR_12)
{
   int VAR_13, VAR_14, VAR_15, VAR_16, VAR_17, VAR_18, VAR_19;
   size_t VAR_20;
   wchar_t* VAR_21;



   VAR_13 = 0;
   VAR_14 = VAR_11;
   VAR_16 = VAR_0;
   VAR_19 = VAR_2;
   VAR_15 = 0;
   VAR_17 = 0;
   VAR_18 = 0;

   if (VAR_4 && VAR_5)
   {
      *VAR_9 = VAR_4;
      *VAR_10 = VAR_5;
      *VAR_8 = VAR_3;
      return;
   }

   VAR_3 = 0;

   VAR_20 = FUNC_6(VAR_6);
   VAR_21 = FUNC_5(sizeof(wchar_t) * VAR_20);


   while (VAR_2)
   {

      if (VAR_13 >= VAR_20 || ((VAR_6[VAR_13] == ' ' || VAR_6[VAR_13] == '\t') && !VAR_17))
      {

         if (VAR_19)
         {
            FUNC_8(FUNC_7(VAR_21, VAR_18), VAR_14);
         }

         if (VAR_13 >= VAR_20)
         {
            break;
         }

         while (VAR_6[VAR_13] == ' ' || VAR_6[VAR_13] == '\t')
            ++VAR_13;
         VAR_19 = VAR_0;
         VAR_18 = 0;
         VAR_15 = 0;
         VAR_16 = VAR_0;
         continue;
      }

      VAR_19 = VAR_2;

      if (VAR_6[VAR_13] == '\\')
      {
         VAR_21[VAR_18++] = VAR_6[VAR_13];
         ++VAR_15;
         ++VAR_13;
         VAR_16 = VAR_0;
         continue;
      }

      if (VAR_6[VAR_13] == '\"')
      {
         if (VAR_15 > 0)
         {
            if (VAR_15 % 2 == 0)
            {



               VAR_18 -= VAR_15 / 2;
            }
            else
            {




               VAR_18 -= VAR_15 / 2 + 1;
               VAR_21[VAR_18++] = '\"';
               VAR_15 = 0;
               VAR_16 = VAR_2;
               ++VAR_13;
               continue;
            }
            VAR_15 = 0;
         }
         else if (!VAR_17 && VAR_13 > 0 && VAR_6[VAR_13 - 1] == '\"' && !VAR_16)
         {
            VAR_21[VAR_18++] = '\"';
            ++VAR_13;
            VAR_16 = VAR_2;
            continue;
         }
         VAR_15 = 0;
         VAR_16 = VAR_0;
         VAR_17 = !VAR_17;
         VAR_14 = VAR_17 ? VAR_0 : VAR_11;
         ++VAR_13;
         continue;
      }

      VAR_21[VAR_18++] = VAR_6[VAR_13];
      VAR_15 = 0;
      VAR_16 = VAR_0;
      ++VAR_13;
   }


   FUNC_4(VAR_21);

   *VAR_8 = VAR_3;
   if (VAR_4 == ((void*)0))
   {
      VAR_4 = (wchar_t**)FUNC_5(sizeof(wchar_t*));
      VAR_4[0] = 0;
   }
   *VAR_9 = VAR_4;
   *VAR_10 = VAR_5;

   VAR_7 = FUNC_5(VAR_1 * sizeof(wchar_t));
   if (VAR_7)
   {
      if (!FUNC_0(((void*)0), VAR_7, VAR_1))
        VAR_7[0] = '\0';
      else
        VAR_7[VAR_1 - 1] = '\0';
   }
   else
   {
      VAR_7 = FUNC_3(VAR_4[0]);
   }

   FUNC_2(FUNC_1(), 0, ((void*)0));


}
