
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * tz_abbr; } ;
typedef TYPE_1__ timelib_time ;


 int FUNC_0 (int *) ;
 size_t FUNC_1 (char*) ;
 int * FUNC_2 (char*) ;
 int FUNC_3 (char) ;

void FUNC_4(timelib_time* VAR_0, char* VAR_1)
{
 unsigned int VAR_2;
 size_t VAR_3 = FUNC_1(VAR_1);

 FUNC_0(VAR_0->tz_abbr);
 VAR_0->tz_abbr = FUNC_2(VAR_1);
 for (VAR_2 = 0; VAR_2 < VAR_3; VAR_2++) {
  VAR_0->tz_abbr[VAR_2] = FUNC_3(VAR_1[VAR_2]);
 }
}
