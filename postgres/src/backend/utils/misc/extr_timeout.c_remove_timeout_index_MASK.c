
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int active; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 TYPE_1__** VAR_1 ;
 int FUNC_1 (int ,char*,int,int) ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_2(int VAR_3)
{
 int VAR_4;

 if (VAR_3 < 0 || VAR_3 >= VAR_2)
  FUNC_1(VAR_0, "timeout index %d out of range 0..%d", VAR_3,
    VAR_2 - 1);

 FUNC_0(VAR_1[VAR_3]->active);
 VAR_1[VAR_3]->active = 0;

 for (VAR_4 = VAR_3 + 1; VAR_4 < VAR_2; VAR_4++)
  VAR_1[VAR_4 - 1] = VAR_1[VAR_4];

 VAR_2--;
}
