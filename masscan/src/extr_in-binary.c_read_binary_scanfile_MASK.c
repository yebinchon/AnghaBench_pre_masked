
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct Output {scalar_t__ when_scan_started; } ;
struct Masscan {int banner_types; int ports; int targets; } ;


 struct Output* FUNC_0 (struct Masscan*,int ) ;
 int FUNC_1 (struct Output*) ;
 int FUNC_2 (struct Output*,char*,int *,int *,int *) ;

void
FUNC_3(struct Masscan *VAR_0,
                     int VAR_1, int VAR_2, char *VAR_3[])
{
    struct Output *VAR_4;
    int VAR_5;




    VAR_4 = FUNC_0(VAR_0, 0);





    VAR_4->when_scan_started = 0;
    for (VAR_5=VAR_1; VAR_5<VAR_2; VAR_5++) {
        FUNC_2(VAR_4, VAR_3[VAR_5], &VAR_0->targets, &VAR_0->ports,
                   &VAR_0->banner_types);
    }

    FUNC_1(VAR_4);



}
