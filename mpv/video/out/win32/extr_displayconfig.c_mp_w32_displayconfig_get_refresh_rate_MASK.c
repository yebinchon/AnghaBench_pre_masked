
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int wchar_t ;
typedef int UINT32 ;
struct TYPE_9__ {scalar_t__ Denominator; scalar_t__ Numerator; } ;
struct TYPE_7__ {size_t modeInfoIdx; TYPE_3__ refreshRate; } ;
struct TYPE_8__ {TYPE_1__ targetInfo; } ;
typedef TYPE_2__ DISPLAYCONFIG_PATH_INFO ;
typedef int DISPLAYCONFIG_MODE_INFO ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (void*,int *,TYPE_2__**,int *,int **) ;
 TYPE_2__* FUNC_1 (int ,TYPE_2__*,int const*) ;
 double FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (TYPE_3__) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (void*) ;
 void* FUNC_6 (int *) ;

double FUNC_7(const wchar_t *VAR_4)
{

    FUNC_4(&VAR_2, VAR_1);
    if (!VAR_3)
        return 0.0;

    void *VAR_5 = FUNC_6(((void*)0));
    double VAR_6 = 0.0;


    UINT32 VAR_7;
    DISPLAYCONFIG_PATH_INFO* VAR_8;
    UINT32 VAR_9;
    DISPLAYCONFIG_MODE_INFO* VAR_10;
    if (FUNC_0(VAR_5, &VAR_7, &VAR_8, &VAR_9, &VAR_10))
        goto end;


    DISPLAYCONFIG_PATH_INFO* VAR_11;
    if (!(VAR_11 = FUNC_1(VAR_7, VAR_8, VAR_4)))
        goto end;



    if (VAR_11->targetInfo.modeInfoIdx != VAR_0)
        VAR_6 = FUNC_2(&VAR_10[VAR_11->targetInfo.modeInfoIdx]);


    if (VAR_6 == 0.0 && FUNC_3(VAR_11->targetInfo.refreshRate)) {
        VAR_6 = ((double)VAR_11->targetInfo.refreshRate.Numerator) /
               ((double)VAR_11->targetInfo.refreshRate.Denominator);
    }

end:
    FUNC_5(VAR_5);
    return VAR_6;
}
