
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT ;
typedef int LPCSTR ;
typedef int INT ;


 int FUNC_0 (char*,int ,int,int const,...) ;

__attribute__((used)) static void FUNC_1 (LPCSTR VAR_0, const UINT *VAR_1, INT VAR_2)
{
    int VAR_3;

    for(VAR_3=0; VAR_3<VAR_2-12; VAR_3+=16) {
        FUNC_0("%s [%04x] %08x %08x %08x %08x\n",
              VAR_0, VAR_3, *VAR_1, *(VAR_1+1), *(VAR_1+2), *(VAR_1+3));
        VAR_1 += 4;
    }
    switch ((VAR_2 - VAR_3 + 3) & (~3)) {
    case 16:
        FUNC_0("%s [%04x] %08x %08x %08x %08x\n",
              VAR_0, VAR_3, *VAR_1, *(VAR_1+1), *(VAR_1+2), *(VAR_1+3));
        break;
    case 12:
        FUNC_0("%s [%04x] %08x %08x %08x\n",
              VAR_0, VAR_3, *VAR_1, *(VAR_1+1), *(VAR_1+2));
        break;
    case 8:
        FUNC_0("%s [%04x] %08x %08x\n",
              VAR_0, VAR_3, *VAR_1, *(VAR_1+1));
        break;
    case 4:
        FUNC_0("%s [%04x] %08x\n",
              VAR_0, VAR_3, *VAR_1);
        break;
    default:
        break;
    }
}
