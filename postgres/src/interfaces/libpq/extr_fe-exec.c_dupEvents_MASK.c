
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int resultInitialized; struct TYPE_8__* name; int * data; int passThrough; int proc; } ;
typedef TYPE_1__ PGEvent ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (size_t) ;
 TYPE_1__* FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static PGEvent *
FUNC_4(PGEvent *VAR_0, int VAR_1, size_t *VAR_2)
{
 PGEvent *VAR_3;
 size_t VAR_4;
 int VAR_5;

 if (!VAR_0 || VAR_1 <= 0)
  return ((void*)0);

 VAR_4 = VAR_1 * sizeof(PGEvent);
 VAR_3 = (PGEvent *) FUNC_1(VAR_4);
 if (!VAR_3)
  return ((void*)0);

 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++)
 {
  VAR_3[VAR_5].proc = VAR_0[VAR_5].proc;
  VAR_3[VAR_5].passThrough = VAR_0[VAR_5].passThrough;
  VAR_3[VAR_5].data = ((void*)0);
  VAR_3[VAR_5].resultInitialized = 0;
  VAR_3[VAR_5].name = FUNC_2(VAR_0[VAR_5].name);
  if (!VAR_3[VAR_5].name)
  {
   while (--VAR_5 >= 0)
    FUNC_0(VAR_3[VAR_5].name);
   FUNC_0(VAR_3);
   return ((void*)0);
  }
  VAR_4 += FUNC_3(VAR_0[VAR_5].name) + 1;
 }

 *VAR_2 += VAR_4;
 return VAR_3;
}
