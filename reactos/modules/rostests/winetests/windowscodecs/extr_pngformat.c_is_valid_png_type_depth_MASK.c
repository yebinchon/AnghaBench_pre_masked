
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BOOL ;


 int VAR_0 ;





 int FUNC_0 (int ,char*,int,int) ;

__attribute__((used)) static BOOL FUNC_1(int VAR_1, int VAR_2, BOOL VAR_3)
{
    switch (VAR_1)
    {
    case 132:
        return VAR_2 == 1 || VAR_2 == 2 || VAR_2 == 4 || VAR_2 == 8 || VAR_2 == 16;

    case 129:
        return VAR_2 == 8 || VAR_2 == 16;

    case 130:
        return (VAR_2 == 1 || VAR_2 == 2 || VAR_2 == 4 || VAR_2 == 8) && VAR_3;

    case 131:
        return VAR_2 == 8 || VAR_2 == 16;

    case 128:
        return VAR_2 == 8 || VAR_2 == 16;

    default:
        FUNC_0(0, "unknown PNG type %d, depth %d\n", VAR_1, VAR_2);
        return VAR_0;
    }
}
