
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int DWORD ;


 int FUNC_0 (char*,int) ;
__attribute__((used)) static DWORD FUNC_1(DWORD VAR_0, char *VAR_1)
{
    *VAR_1 = ' ';
    switch(VAR_0)
    {
        case 132: return 133;
        case 133: return 132;
        case 138: return 137;
        case 137: return 138;
        case 131: return 130;
        case 130: return 131;
        case 136: *VAR_1 = '-'; return 136;
        case 129: return 128;
        case 128: return 129;
        case 134: *VAR_1 = '-'; return 134;
        case 135: *VAR_1 = '-'; return 135;
        case 140: return 139;
        case 139: return 140;
    }
    FUNC_0("Unknown modifier %u\n", VAR_0);
    return VAR_0;
}
