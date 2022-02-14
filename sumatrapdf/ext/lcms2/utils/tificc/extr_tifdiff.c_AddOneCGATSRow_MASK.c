
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int cmsHANDLE ;
struct TYPE_5__ {double Min; double Peak; } ;
typedef TYPE_1__* LPSTAT ;


 double FUNC_0 (TYPE_1__*) ;
 double FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *,int ,char*,char*,char*) ;
 int FUNC_3 (int *,int ,char*,char*,double) ;

__attribute__((used)) static
void FUNC_4(cmsHANDLE VAR_0, char *VAR_1, LPSTAT VAR_2)
{

    double VAR_3 = 100.0 * ((255.0 - FUNC_0(VAR_2)) / 255.0);

    FUNC_2(((void*)0), VAR_0, VAR_1, "SAMPLE_ID", VAR_1);
    FUNC_3(((void*)0), VAR_0, VAR_1, "PER100_EQUAL", VAR_3);
    FUNC_3(((void*)0), VAR_0, VAR_1, "MEAN_DE", FUNC_0(VAR_2));
    FUNC_3(((void*)0), VAR_0, VAR_1, "STDEV_DE", FUNC_1(VAR_2));
    FUNC_3(((void*)0), VAR_0, VAR_1, "MIN_DE", VAR_2 ->Min);
    FUNC_3(((void*)0), VAR_0, VAR_1, "MAX_DE", VAR_2 ->Peak);

}
