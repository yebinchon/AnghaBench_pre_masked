
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct _finddata_t {char* name; } ;
typedef char TCHAR ;
typedef int LPTSTR ;
typedef int FILE ;


 int FUNC_0 (char*,char*) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ,int ,int ,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (char*,struct _finddata_t*) ;
 scalar_t__ FUNC_5 (int,struct _finddata_t*) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (char*,int *,int,int,int,int,int,int,int,int,int,int,int) ;
 int * FUNC_9 (char*,char*) ;
 int FUNC_10 (int ,char*,char*) ;
 int FUNC_11 (char*,char*) ;
 int VAR_2 ;
 int * VAR_3 ;
 int FUNC_12 () ;

int
FUNC_13 (int VAR_4, char **VAR_5)
{
  char *VAR_6, *VAR_7 = ((void*)0);
  int VAR_8 = 0;
  TCHAR VAR_9[4096];

  int VAR_10 = 0;
  int VAR_11 = 0;
  int VAR_12 = 0;
  int VAR_13 = 0;
  int VAR_14 = 0;
  int VAR_15 = 0;
  int VAR_16 = 0;
  int VAR_17 = 0;
  int VAR_18= 0;
  int VAR_19= 0;
  int VAR_20=0;

  FILE *VAR_21;
  int VAR_22;
  struct _finddata_t VAR_23;


  while ((--VAR_4) && (VAR_7 == ((void*)0)))
    {
      if (*(VAR_6 = *++VAR_5) == '/')
        {
          switch (VAR_6[1])
     {
       case 'b':
       case 'B':
         VAR_14 = 1;
         break;






       case 'e':
       case 'E':
         VAR_15 = 1;
         break;

       case 'i':
       case 'I':
         VAR_13 = 1;
         break;

       case 'm':
       case 'M':
         VAR_19 = 1;
         break;

       case 'n':
       case 'N':
         VAR_12 = 1;
         break;

       case 'r':
       case 'R':
         VAR_16 = 1;
         break;

       case 's':
       case 'S':
         VAR_18 = 1;
         break;

       case 'v':
       case 'V':
         VAR_10 = 1;
         break;

       case 'x':
       case 'X':
         VAR_17 = 1;
         break;

       default:
         FUNC_12 ();
         FUNC_6 (2);
         break;
     }
        }
      else
        {

   if (VAR_7 == ((void*)0))
     {

              VAR_7 = *VAR_5;
     }
 }
    }


  if (VAR_7 == ((void*)0))
    {

      FUNC_12 ();
      FUNC_6 (1);
    }


  if (VAR_4 == 0)
    {
      VAR_8 = FUNC_8 (VAR_7, VAR_3, VAR_10, VAR_11,
                      VAR_12, VAR_13, VAR_14, VAR_20, VAR_15, VAR_16, VAR_17,
       VAR_18, VAR_19);
    }

  while (--VAR_4 >= 0)
    {
      VAR_22 = FUNC_4 (*++VAR_5, &VAR_23);
      if (VAR_22 < 0)
 {


   FUNC_2( FUNC_1(((void*)0)), VAR_1, (LPTSTR)VAR_9, 4096);
   FUNC_0(VAR_9, VAR_9);
   FUNC_10 (VAR_2, VAR_9, *VAR_5);
 }
      else
        {

   do
            {

       if ((VAR_21 = FUNC_9 (VAR_23.name, "r")) != ((void*)0))
         {
           FUNC_11 ("---------------- %s\n", VAR_23.name);
           VAR_8 = FUNC_8 (VAR_7, VAR_21, VAR_10, VAR_11,
                      VAR_12, VAR_13, VAR_14, VAR_20, VAR_15, VAR_16, VAR_17,
       VAR_18, VAR_19);
           FUNC_7 (VAR_21);
         }
        else
         {
           FUNC_2(FUNC_1(((void*)0)), VAR_0, (LPTSTR)VAR_9, 4096);
           FUNC_0(VAR_9, VAR_9);
           FUNC_10 (VAR_2, VAR_9,
             VAR_23.name);
                }
     }
          while (FUNC_5(VAR_22, &VAR_23) > 0);
        }
      FUNC_3(VAR_22);
    }





  FUNC_6 ( (VAR_8 ? 0 : 1) );
}
