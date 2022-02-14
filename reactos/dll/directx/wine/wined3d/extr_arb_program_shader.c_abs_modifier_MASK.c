
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (char*,int) ;
 int VAR_1 ;
__attribute__((used)) static DWORD FUNC_1(DWORD VAR_2, BOOL *VAR_3)
{
    *VAR_3 = VAR_0;

    switch(VAR_2)
    {
        case 132: return 140;
        case 133: return 140;
        case 138: *VAR_3 = VAR_1; return 138;
        case 137: *VAR_3 = VAR_1; return 137;
        case 131: *VAR_3 = VAR_1; return 131;
        case 130: *VAR_3 = VAR_1; return 130;
        case 136: *VAR_3 = VAR_1; return 136;
        case 129: *VAR_3 = VAR_1; return 129;
        case 128: *VAR_3 = VAR_1; return 128;
        case 134: *VAR_3 = VAR_1; return 134;
        case 135: *VAR_3 = VAR_1; return 135;
        case 140: return 140;
        case 139: return 140;
    }
    FUNC_0("Unknown modifier %u\n", VAR_2);
    return VAR_2;
}
