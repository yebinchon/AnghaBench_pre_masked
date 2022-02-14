
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cmsToneCurve ;
typedef int cmsInt32Number ;
typedef int cmsFloat32Number ;
typedef int (* Function ) (int) ;


 int FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 (char const*,int,int,int ) ;
 int FUNC_2 (int ,int *,int) ;
 int VAR_1 ;

__attribute__((used)) static cmsInt32Number FUNC_3( const char* VAR_2, cmsToneCurve* VAR_3, Function VAR_4)
{
    cmsInt32Number VAR_5 = 1;
    int VAR_6;
    for (VAR_6 = 0; VAR_6 < VAR_1*3; VAR_6++) {

        cmsFloat32Number VAR_7 = (cmsFloat32Number)VAR_6 / (VAR_1*3 - 1);
        cmsFloat32Number VAR_8 = VAR_4(VAR_7);
        cmsFloat32Number VAR_9 = FUNC_2(FUNC_0(), VAR_3, VAR_7);

        if (!FUNC_1(VAR_2, VAR_8, VAR_9, VAR_0)) {
            VAR_5 = 0;
        }
    }
    return VAR_5;
}
