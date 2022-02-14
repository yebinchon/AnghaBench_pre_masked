
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct _pci_bar {int data; } ;
typedef int pci_desc ;


 int FUNC_0 (int *,int,int,int,int,int) ;

void FUNC_1( pci_desc *VAR_0, int VAR_1, int VAR_2, int VAR_3, int VAR_4,
           struct _pci_bar *VAR_5 ) {
    VAR_5->data = FUNC_0( VAR_0, VAR_1, VAR_2, VAR_3, 0x10 + (VAR_4 * 4), 4 );
}
