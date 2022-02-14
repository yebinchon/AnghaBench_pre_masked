
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int dumpId; int nDeps; int* dependencies; } ;
typedef TYPE_1__ DumpableObject ;
typedef int DumpId ;


 int FUNC_0 (int,int*,int ) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (int*) ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (int*,int ) ;

__attribute__((used)) static bool
FUNC_7(DumpableObject **VAR_0,
   int VAR_1,
   DumpableObject **VAR_2,
   int *VAR_3)
{
 DumpId VAR_4 = FUNC_3();
 int *VAR_5;
 int *VAR_6;
 int *VAR_7;
 DumpableObject *VAR_8;
 int VAR_9;
 int VAR_10,
    VAR_11,
    VAR_12;
 *VAR_3 = VAR_1;


 if (VAR_1 <= 0)
  return 1;


 VAR_5 = (int *) FUNC_4(VAR_1 * sizeof(int));
 VAR_6 = (int *) FUNC_5((VAR_4 + 1) * sizeof(int));
 VAR_7 = (int *) FUNC_4((VAR_4 + 1) * sizeof(int));
 for (VAR_10 = 0; VAR_10 < VAR_1; VAR_10++)
 {
  VAR_8 = VAR_0[VAR_10];
  VAR_11 = VAR_8->dumpId;
  if (VAR_11 <= 0 || VAR_11 > VAR_4)
   FUNC_1("invalid dumpId %d", VAR_11);
  VAR_7[VAR_11] = VAR_10;
  for (VAR_11 = 0; VAR_11 < VAR_8->nDeps; VAR_11++)
  {
   VAR_12 = VAR_8->dependencies[VAR_11];
   if (VAR_12 <= 0 || VAR_12 > VAR_4)
    FUNC_1("invalid dependency %d", VAR_12);
   VAR_6[VAR_12]++;
  }
 }
 VAR_9 = 0;
 for (VAR_10 = VAR_1; --VAR_10 >= 0;)
 {
  if (VAR_6[VAR_0[VAR_10]->dumpId] == 0)
   VAR_5[VAR_9++] = VAR_10;
 }
 VAR_10 = VAR_1;
 while (VAR_9 > 0)
 {

  VAR_11 = FUNC_6(VAR_5, VAR_9--);
  VAR_8 = VAR_0[VAR_11];

  VAR_2[--VAR_10] = VAR_8;

  for (VAR_12 = 0; VAR_12 < VAR_8->nDeps; VAR_12++)
  {
   int VAR_13 = VAR_8->dependencies[VAR_12];

   if ((--VAR_6[VAR_13]) == 0)
    FUNC_0(VAR_7[VAR_13], VAR_5, VAR_9++);
  }
 }





 if (VAR_10 != 0)
 {
  VAR_12 = 0;
  for (VAR_11 = 1; VAR_11 <= VAR_4; VAR_11++)
  {
   if (VAR_6[VAR_11] != 0)
    VAR_2[VAR_12++] = VAR_0[VAR_7[VAR_11]];
  }
  *VAR_3 = VAR_12;
 }


 FUNC_2(VAR_5);
 FUNC_2(VAR_6);
 FUNC_2(VAR_7);

 return (VAR_10 == 0);
}
