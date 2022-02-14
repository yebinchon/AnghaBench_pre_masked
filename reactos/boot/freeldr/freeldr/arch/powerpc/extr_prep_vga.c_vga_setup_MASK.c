
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct _vga_desc {char* addr; } ;
struct _pci_desc {int dummy; } ;
struct _pci_bar {int data; } ;
typedef int PCONFIGURATION_COMPONENT_DATA ;


 int FUNC_0 (struct _pci_desc*,int,int,int,int,struct _pci_bar*) ;
 int FUNC_1 (struct _pci_bar*) ;

void FUNC_2( PCONFIGURATION_COMPONENT_DATA VAR_0,
                struct _pci_desc *VAR_1, struct _vga_desc *VAR_2,
        int VAR_3, int VAR_4, int VAR_5 ) {
    struct _pci_bar VAR_6;
    int VAR_7;

    for( VAR_7 = 0; VAR_7 < 6; VAR_7++ ) {
        FUNC_0( VAR_1, VAR_3, VAR_4, VAR_5, VAR_7, &VAR_6 );
        FUNC_1( &VAR_6 );
        if( (VAR_6.data > 0x10000) || ((VAR_6.data&1) == 1) ) {
            VAR_2->addr = (char *)(0xc0000000 + (VAR_6.data & ~0x7ff));

            break;
        }
    }
}
