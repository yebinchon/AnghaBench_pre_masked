
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut8 ;
typedef size_t ut32 ;
typedef int ut16 ;
typedef int tableType_t ;






__attribute__((used)) static void FUNC_0(const ut8* VAR_0, ut32 VAR_1, void* VAR_2, tableType_t const VAR_3, const ut8* VAR_4) {
 switch (VAR_3) {
 case 130: { const ut8** VAR_5 = (const ut8**)VAR_2; VAR_5[VAR_1] = VAR_0; return; }
 case 128: { ut32* VAR_6 = (ut32*) VAR_2; VAR_6[VAR_1] = (ut32)(VAR_0-VAR_4); return; }
 case 129: { ut16* VAR_7 = (ut16*) VAR_2; VAR_7[VAR_1] = (ut16)(VAR_0-VAR_4); return; }
 }
}
