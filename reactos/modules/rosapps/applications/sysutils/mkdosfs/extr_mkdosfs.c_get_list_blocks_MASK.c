
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (char*,char*) ;
 int FUNC_4 (int *,char*,unsigned long*) ;
 int FUNC_5 (unsigned long) ;
 int FUNC_6 (char*,int,char*) ;

__attribute__((used)) static void
FUNC_7 (char *VAR_2)
{
  int VAR_3;
  FILE *VAR_4;
  unsigned long VAR_5;

  VAR_4 = FUNC_3 (VAR_2, "r");
  if (VAR_4 == (FILE *) ((void*)0))
    FUNC_0 ("Can't open file of bad blocks");

  while (!FUNC_2 (VAR_4))
    {
      FUNC_4 (VAR_4, "%ld\n", &VAR_5);
      for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
 FUNC_5 (VAR_5 * VAR_0 + VAR_3);
      VAR_1++;
    }
  FUNC_1 (VAR_4);

  if (VAR_1)
    FUNC_6 ("%d bad block%s\n", VAR_1,
     (VAR_1 > 1) ? "s" : "");
}
