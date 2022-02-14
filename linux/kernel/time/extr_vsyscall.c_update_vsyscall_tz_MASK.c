
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vdso_data {int tz_dsttime; int tz_minuteswest; } ;
struct TYPE_2__ {int tz_dsttime; int tz_minuteswest; } ;


 size_t VAR_0 ;
 struct vdso_data* FUNC_0 () ;
 int FUNC_1 (struct vdso_data*) ;
 TYPE_1__ VAR_1 ;

void FUNC_2(void)
{
 struct vdso_data *VAR_2 = FUNC_0();

 VAR_2[VAR_0].tz_minuteswest = VAR_1.tz_minuteswest;
 VAR_2[VAR_0].tz_dsttime = VAR_1.tz_dsttime;

 FUNC_1(VAR_2);
}
