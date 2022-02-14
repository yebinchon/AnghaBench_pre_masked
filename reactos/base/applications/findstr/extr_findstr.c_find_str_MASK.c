
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int * FUNC_0 (char*,int,int *) ;
 int FUNC_1 (char*,long) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (char*) ;
 char* FUNC_5 (char*,char*) ;
 char FUNC_6 (char) ;

int
FUNC_7 (char *VAR_1, FILE *VAR_2, int VAR_3,
          int VAR_4, int VAR_5, int VAR_6, int VAR_7, int VAR_8,
    int VAR_9, int VAR_10, int VAR_11, int VAR_12, int VAR_13)
{
  int VAR_14, VAR_15;
  long VAR_16 = 0, VAR_17 = 0;
  char *VAR_18, VAR_19[VAR_0], VAR_20[VAR_0];


  if (VAR_6)
    {
      VAR_15 = FUNC_4 (VAR_1);
      for (VAR_14 = 0; VAR_14 < VAR_15; VAR_14++)
 VAR_1[VAR_14] = FUNC_6 (VAR_1[VAR_14]);
    }


  while (FUNC_0 (VAR_19, VAR_0, VAR_2) != ((void*)0))
    {

      VAR_15 = FUNC_4 (VAR_19);
      if (VAR_19[VAR_15-1] == '\n')
 {
   VAR_19[VAR_15-1] = '\0';
 }


      VAR_16++;
      FUNC_3 (VAR_20, VAR_19);


      if (VAR_6)
 {
   for (VAR_14 = 0; VAR_14 < VAR_15; VAR_14++)
     {
       VAR_19[VAR_14] = FUNC_6 (VAR_19[VAR_14]);
     }
 }





      VAR_18 = FUNC_5 (VAR_19, VAR_1);

      if ( ((VAR_3) ? (VAR_18 == ((void*)0)) : (VAR_18 != ((void*)0))) )
 {
   if (!VAR_4)
     {
       if (VAR_5)
  FUNC_1 ("%ld:", VAR_16);


       FUNC_2 (VAR_20);
     }

   VAR_17++;
 }
    }

  if (VAR_4)
    {

      FUNC_1 ("%ld\n", VAR_17);
    }





  return (VAR_17 > 0 ? 1 : 0);
}
