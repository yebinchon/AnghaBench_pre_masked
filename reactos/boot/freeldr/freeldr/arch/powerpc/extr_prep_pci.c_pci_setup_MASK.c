
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int pci_desc ;
typedef int pci_cfg ;
struct TYPE_2__ {int * cfg; } ;
typedef int PCONFIGURATION_COMPONENT_DATA ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__ VAR_4 ;
 void* FUNC_0 (int *,int,int,int,int ,int) ;
 int FUNC_1 (char*,...) ;
 int VAR_5 ;
 int FUNC_2 (int ,int *,int *,int,int,int) ;

void FUNC_3( PCONFIGURATION_COMPONENT_DATA VAR_6, pci_desc *VAR_7 ) {
    unsigned char VAR_8;
    unsigned short VAR_9, VAR_10, VAR_11;
    int VAR_12, VAR_13, VAR_14, VAR_15;

    VAR_4.cfg = (pci_cfg *)0x80000cf8;

    FUNC_1("PCI Bus:\n");
    for( VAR_13 = 0; VAR_13 < 1; VAR_13++ ) {
        for( VAR_14 = 0; VAR_14 < 32; VAR_14++ ) {
            VAR_8 = FUNC_0(VAR_7,VAR_13,VAR_14,0,VAR_2,1);
            VAR_9 = FUNC_0(VAR_7,VAR_13,VAR_14,0,VAR_3,2);
            VAR_10 = FUNC_0(VAR_7,VAR_13,VAR_14,0,VAR_1,2);

            if(VAR_9 == 0 || VAR_9 == 0xffff) continue;
            if(VAR_8 & 0x80) VAR_12 = 8; else VAR_12 = 1;

            for( VAR_15 = 0; VAR_15 < VAR_12; VAR_15++ ) {
                VAR_11 = FUNC_0(VAR_7,VAR_13,VAR_14,VAR_15,VAR_0,1);
        FUNC_1(" %d:%d -> vendor:device:class %x:%x:%x\n",
               VAR_13, VAR_14, VAR_9, VAR_10, VAR_11);

                if( VAR_11 == 3 ) {
            FUNC_1("Setting up vga...\n");
                    FUNC_2(VAR_6,VAR_7,&VAR_5,VAR_13,VAR_14,VAR_15);
            FUNC_1("Done with vga\n");
                }
            }
        }
    }
    FUNC_1("^-- end PCI\n");
}
