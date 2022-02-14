
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int * end; int * begin; } ;
struct TYPE_5__ {int busdays_in_weekmask; int* weekmask; TYPE_2__ holidays; } ;
typedef int PyObject ;
typedef TYPE_1__ NpyBusDayCalendar ;


 int FUNC_0 (int *,int *,char*,char**,int *,int*,int *,TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,char*) ;
 int VAR_2 ;
 int FUNC_3 (TYPE_2__*,int*) ;

__attribute__((used)) static int
FUNC_4(NpyBusDayCalendar *VAR_3, PyObject *VAR_4, PyObject *VAR_5)
{
    static char *VAR_6[] = {"weekmask", "holidays", ((void*)0)};
    int VAR_7, VAR_8;


    if (VAR_3->holidays.begin != ((void*)0)) {
        FUNC_1(VAR_3->holidays.begin);
        VAR_3->holidays.begin = ((void*)0);
        VAR_3->holidays.end = ((void*)0);
    }


    VAR_3->busdays_in_weekmask = 5;
    VAR_3->weekmask[0] = 1;
    VAR_3->weekmask[1] = 1;
    VAR_3->weekmask[2] = 1;
    VAR_3->weekmask[3] = 1;
    VAR_3->weekmask[4] = 1;
    VAR_3->weekmask[5] = 0;
    VAR_3->weekmask[6] = 0;


    if (!FUNC_0(VAR_4, VAR_5,
                        "|O&O&:busdaycal", VAR_6,
                        &VAR_1, &VAR_3->weekmask[0],
                        &VAR_0, &VAR_3->holidays)) {
        return -1;
    }


    VAR_8 = 0;
    for (VAR_7 = 0; VAR_7 < 7; ++VAR_7) {
        VAR_8 += VAR_3->weekmask[VAR_7];
    }
    VAR_3->busdays_in_weekmask = VAR_8;


    FUNC_3(&VAR_3->holidays, VAR_3->weekmask);

    if (VAR_3->busdays_in_weekmask == 0) {
        FUNC_2(VAR_2,
                "Cannot construct a numpy.busdaycal with a weekmask of "
                "all zeros");
        return -1;
    }

    return 0;
}
