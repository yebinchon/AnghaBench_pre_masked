
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int USHORT ;
typedef int SHORT ;
typedef int IMAGE_BASE_RELOCATION ;
typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*,int,...) ;
 int * FUNC_1 (int*,int,int*,int) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static void FUNC_3(void)
{
    IMAGE_BASE_RELOCATION *VAR_3;
    USHORT VAR_4;
    DWORD VAR_5;
    SHORT VAR_6;

    if(!&FUNC_1) {
        FUNC_2("LdrProcessRelocationBlock not available\n");
        return;
    }

    VAR_5 = 0x50005;
    VAR_4 = VAR_1<<12;
    VAR_3 = FUNC_1(&VAR_5, 1, &VAR_4, 0x500050);
    FUNC_0((USHORT*)VAR_3 == &VAR_4+1, "ret = %p, expected %p\n", *VAR_3, &VAR_4+1);
    FUNC_0(VAR_5 == 0x550055, "addr32 = %x, expected 0x550055\n", VAR_5);

    VAR_6 = 0x505;
    VAR_4 = VAR_0<<12;
    VAR_3 = FUNC_1(&VAR_6, 1, &VAR_4, 0x500060);
    FUNC_0((USHORT*)VAR_3 == &VAR_4+1, "ret = %p, expected %p\n", *VAR_3, &VAR_4+1);
    FUNC_0(VAR_6 == 0x555, "addr16 = %x, expected 0x555\n", VAR_6);

    VAR_6 = 0x505;
    VAR_4 = VAR_2<<12;
    VAR_3 = FUNC_1(&VAR_6, 1, &VAR_4, 0x500060);
    FUNC_0((USHORT*)VAR_3 == &VAR_4+1, "ret = %p, expected %p\n", *VAR_3, &VAR_4+1);
    FUNC_0(VAR_6 == 0x565, "addr16 = %x, expected 0x565\n", VAR_6);
}
