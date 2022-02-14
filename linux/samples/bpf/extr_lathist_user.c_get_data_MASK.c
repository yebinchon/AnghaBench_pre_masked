
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {long max; long* data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,long*,long*) ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static void FUNC_1(int VAR_3)
{
 long VAR_4, VAR_5;
 int VAR_6, VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++)
  VAR_2[VAR_7].max = 0;

 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
  for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++) {
   VAR_4 = VAR_6 * VAR_1 + VAR_7;
   FUNC_0(VAR_3, &VAR_4, &VAR_5);

   VAR_2[VAR_6].data[VAR_7] = VAR_5;
   if (VAR_5 > VAR_2[VAR_6].max)
    VAR_2[VAR_6].max = VAR_5;
  }
 }
}
