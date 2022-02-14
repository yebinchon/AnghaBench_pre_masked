
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct _pci_bar {int data; } ;


 int FUNC_0 (char*,int) ;

void FUNC_1( struct _pci_bar *VAR_0 ) {
    FUNC_0("BAR: %x\n", VAR_0->data);
}
