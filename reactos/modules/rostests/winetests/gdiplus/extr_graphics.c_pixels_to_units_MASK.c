
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef double REAL ;
typedef int GpUnit ;
 double VAR_0 ;
 int FUNC_0 (int ,char*,int) ;
 double VAR_1 ;

__attribute__((used)) static REAL FUNC_1(REAL VAR_2, GpUnit VAR_3, REAL VAR_4)
{
    switch (VAR_3)
    {
    case 129:
    case 133:
        return VAR_2;
    case 128:
        return VAR_2 * VAR_1 / VAR_4;
    case 131:
        return VAR_2 / VAR_4;
    case 132:
        return VAR_2 * 300.0 / VAR_4;
    case 130:
        return VAR_2 * VAR_0 / VAR_4;
    default:
        FUNC_0(0, "Unsupported unit: %d\n", VAR_3);
        return 0;
    }
}
