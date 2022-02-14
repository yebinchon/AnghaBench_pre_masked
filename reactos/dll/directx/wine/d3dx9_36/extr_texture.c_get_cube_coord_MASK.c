
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum cube_coord { ____Placeholder_cube_coord } cube_coord ;


 int FUNC_0 (char*) ;







__attribute__((used)) static float FUNC_1(enum cube_coord VAR_0, unsigned int VAR_1, unsigned int VAR_2, unsigned int VAR_3)
{
    switch (VAR_0)
    {
        case 132:
            return VAR_1 + 0.5f;
        case 131:
            return VAR_3 - VAR_1 - 0.5f;
        case 130:
            return VAR_2 + 0.5f;
        case 129:
            return VAR_3 - VAR_2 - 0.5f;
        case 128:
            return 0.0f;
        case 133:
            return VAR_3;
       default:
           FUNC_0("Unexpected coordinate value\n");
           return 0.0f;
    }
}
