
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SYSKIND ;






 int FUNC_0 (char*,int) ;

__attribute__((used)) static int FUNC_1(SYSKIND VAR_0)
{
    switch(VAR_0){
    case 128:
        return 8;
    case 129:
    case 131:
    case 130:
        return 4;
    }
    FUNC_0("Unhandled syskind: 0x%x\n", VAR_0);
    return 4;
}
