
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int DWORD ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static DWORD FUNC_1(DWORD VAR_2)
{
    switch (VAR_2)
    {
        case 135:
            return 0;

        case 131:
        case 128:
            return VAR_0;

        case 136:
        case 134:
        case 130:
        case 129:
        case 133:
        case 132:
            return VAR_1;

        default:
            FUNC_0("Unhandled location %#x.\n", VAR_2);
            return 0;
    }
}
