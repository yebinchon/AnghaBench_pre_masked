
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cmsToneCurve ;
typedef int cmsIOHANDLER ;
typedef int cmsFloat64Number ;
typedef int cmsContext ;
typedef int cmsCIEXYZ ;


 int FUNC_0 (int ,int *,int ) ;
 int FUNC_1 (int ,int *,int,int **) ;
 int FUNC_2 (int ,int *,int *) ;
 int VAR_0 ;
 int FUNC_3 (int ,int *,char*,...) ;

__attribute__((used)) static
int FUNC_4(cmsContext VAR_1, cmsIOHANDLER* VAR_2, cmsFloat64Number* VAR_3, cmsToneCurve** VAR_4, cmsCIEXYZ* VAR_5)
{
    int VAR_6;

    FUNC_3(VAR_1, VAR_2, "[ /CIEBasedABC\n");
    FUNC_3(VAR_1, VAR_2, "<<\n");
    FUNC_3(VAR_1, VAR_2, "/DecodeABC [ ");

    FUNC_1(VAR_1, VAR_2, 3, VAR_4);

    FUNC_3(VAR_1, VAR_2, "]\n");

    FUNC_3(VAR_1, VAR_2, "/MatrixABC [ " );

    for( VAR_6=0; VAR_6 < 3; VAR_6++ ) {

        FUNC_3(VAR_1, VAR_2, "%.6f %.6f %.6f ", VAR_3[VAR_6 + 3*0],
                                           VAR_3[VAR_6 + 3*1],
                                           VAR_3[VAR_6 + 3*2]);
    }


    FUNC_3(VAR_1, VAR_2, "]\n");

    FUNC_3(VAR_1, VAR_2, "/RangeLMN [ 0.0 0.9642 0.0 1.0000 0.0 0.8249 ]\n");

    FUNC_2(VAR_1, VAR_2, VAR_5);
    FUNC_0(VAR_1, VAR_2, VAR_0);

    FUNC_3(VAR_1, VAR_2, ">>\n");
    FUNC_3(VAR_1, VAR_2, "]\n");


    return 1;
}
