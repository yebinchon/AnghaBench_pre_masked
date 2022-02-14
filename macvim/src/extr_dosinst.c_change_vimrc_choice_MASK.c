
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int active; int * installfunc; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,char*,scalar_t__*) ;
 TYPE_1__* VAR_1 ;
 int * VAR_2 ;
 scalar_t__* VAR_3 ;
 scalar_t__* VAR_4 ;

__attribute__((used)) static void
FUNC_1(int VAR_5)
{
    if (VAR_1[VAR_5].installfunc != ((void*)0))
    {

 if (*VAR_3 != VAR_0)
     FUNC_0(VAR_5, "Do NOT change startup file %s", VAR_3);
 else
     FUNC_0(VAR_5, "Do NOT create startup file %s", VAR_4);
 VAR_1[VAR_5].installfunc = ((void*)0);
 VAR_1[VAR_5 + 1].active = 0;
 VAR_1[VAR_5 + 2].active = 0;
 VAR_1[VAR_5 + 3].active = 0;
    }
    else
    {

 if (*VAR_3 != VAR_0)
     FUNC_0(VAR_5, "Overwrite startup file %s with:", VAR_3);
 else
     FUNC_0(VAR_5, "Create startup file %s with:", VAR_4);
 VAR_1[VAR_5].installfunc = VAR_2;
 VAR_1[VAR_5 + 1].active = 1;
 VAR_1[VAR_5 + 2].active = 1;
 VAR_1[VAR_5 + 3].active = 1;
    }
}
