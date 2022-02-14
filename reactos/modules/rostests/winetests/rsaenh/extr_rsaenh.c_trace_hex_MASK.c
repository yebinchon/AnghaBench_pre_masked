
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int DWORD ;
typedef int BYTE ;


 int FUNC_0 (char*,char*,int) ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static void FUNC_2(BYTE *VAR_0, DWORD VAR_1) {
    char VAR_2[256];
    DWORD VAR_3, VAR_4;

    for (VAR_3 = 0; VAR_3 < VAR_1-7; VAR_3+=8) {
        FUNC_1("0x%02x, 0x%02x, 0x%02x, 0x%02x, 0x%02x, 0x%02x, 0x%02x, 0x%02x,\n",
              VAR_0[VAR_3], VAR_0[VAR_3+1], VAR_0[VAR_3+2], VAR_0[VAR_3+3], VAR_0[VAR_3+4], VAR_0[VAR_3+5],
              VAR_0[VAR_3+6], VAR_0[VAR_3+7]);
    }
    for (VAR_4=0; VAR_3<VAR_1; VAR_4++,VAR_3++) {
        FUNC_0(VAR_2+6*VAR_4, "0x%02x, ", VAR_0[VAR_3]);
    }
    if (VAR_4)
        FUNC_1("%s\n", VAR_2);
}
