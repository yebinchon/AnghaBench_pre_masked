
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PGresult ;
typedef int FILE ;


 char* VAR_0 ;
 char* FUNC_0 (int const*,int) ;
 int FUNC_1 (int const*,int,int) ;
 char* FUNC_2 (int const*,int,int) ;
 int FUNC_3 (int const*) ;
 int FUNC_4 (int const*) ;
 int FUNC_5 () ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int,int,char,int *) ;
 int FUNC_8 (int *,char*,...) ;
 int FUNC_9 (char const*,int *) ;
 int FUNC_10 (int*) ;
 char* FUNC_11 (char*) ;
 scalar_t__ FUNC_12 (int) ;
 int VAR_1 ;
 int * VAR_2 ;
 int FUNC_13 (char*) ;

void
FUNC_14(const PGresult *VAR_3,
    FILE *VAR_4,
    int VAR_5,
    const char *VAR_6,
    int VAR_7,
    int VAR_8
)
{


 int VAR_9,
    VAR_10;
 int VAR_11;
 int VAR_12;
 int *VAR_13 = ((void*)0);

 if (VAR_6 == ((void*)0))
  VAR_6 = " ";


 VAR_11 = FUNC_3(VAR_3);
 VAR_12 = FUNC_4(VAR_3);

 if (VAR_4 == ((void*)0))
  VAR_4 = VAR_2;



 if (VAR_5)
 {
  VAR_13 = (int *) FUNC_12(VAR_11 * sizeof(int));
  if (!VAR_13)
  {
   FUNC_8(&VAR_1, FUNC_11("out of memory\n"));
   FUNC_5();
  }

  for (VAR_10 = 0; VAR_10 < VAR_11; VAR_10++)
  {
   VAR_13[VAR_10] = FUNC_13(FUNC_0(VAR_3, VAR_10));
   for (VAR_9 = 0; VAR_9 < VAR_12; VAR_9++)
   {
    int VAR_14 = FUNC_1(VAR_3, VAR_9, VAR_10);

    if (VAR_14 > VAR_13[VAR_10])
     VAR_13[VAR_10] = VAR_14;
   }
  }
 }

 if (VAR_7)
 {

  for (VAR_9 = 0; VAR_9 < VAR_11; VAR_9++)
  {
   FUNC_9(FUNC_0(VAR_3, VAR_9), VAR_4);
   if (VAR_5)
    FUNC_7(FUNC_13(FUNC_0(VAR_3, VAR_9)), VAR_13[VAR_9], ' ', VAR_4);
   FUNC_9(VAR_6, VAR_4);
  }
  FUNC_8(VAR_4, "\n");


  for (VAR_9 = 0; VAR_9 < VAR_11; VAR_9++)
  {
   if (VAR_5)
    FUNC_7(0, VAR_13[VAR_9], '-', VAR_4);
   FUNC_9(VAR_6, VAR_4);
  }
  FUNC_8(VAR_4, "\n");
 }


 for (VAR_9 = 0; VAR_9 < VAR_12; VAR_9++)
 {
  for (VAR_10 = 0; VAR_10 < VAR_11; VAR_10++)
  {
   FUNC_8(VAR_4, "%s", FUNC_2(VAR_3, VAR_9, VAR_10));
   if (VAR_5)
    FUNC_7(FUNC_13(FUNC_2(VAR_3, VAR_9, VAR_10)), VAR_13[VAR_10], ' ', VAR_4);
   FUNC_9(VAR_6, VAR_4);
  }
  FUNC_8(VAR_4, "\n");
 }

 if (!VAR_8)
  FUNC_8(VAR_4, "\nQuery returned %d row%s.\n", FUNC_4(VAR_3),
    (FUNC_4(VAR_3) == 1) ? "" : "s");

 FUNC_6(VAR_4);

 if (VAR_13)
  FUNC_10(VAR_13);
}
