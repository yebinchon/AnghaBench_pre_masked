
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t TimeoutId ;
struct TYPE_3__ {int active; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 TYPE_1__** VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_1 (int ,char*,int,int) ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_2(TimeoutId VAR_4, int VAR_5)
{
 int VAR_6;

 if (VAR_5 < 0 || VAR_5 > VAR_3)
  FUNC_1(VAR_0, "timeout index %d out of range 0..%d", VAR_5,
    VAR_3);

 FUNC_0(!VAR_2[VAR_4].active);
 VAR_2[VAR_4].active = 1;

 for (VAR_6 = VAR_3 - 1; VAR_6 >= VAR_5; VAR_6--)
  VAR_1[VAR_6 + 1] = VAR_1[VAR_6];

 VAR_1[VAR_5] = &VAR_2[VAR_4];

 VAR_3++;
}
