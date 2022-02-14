
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* cfg; } ;
typedef TYPE_2__ pci_desc ;
struct TYPE_5__ {unsigned long addr; void* data; } ;


 unsigned long FUNC_0 (int,int,int,int) ;
 unsigned long FUNC_1 (TYPE_2__*,int,int,int,int,int) ;
 void* FUNC_2 (unsigned long) ;
 int FUNC_3 () ;

void FUNC_4( pci_desc *VAR_0, int VAR_1, int VAR_2, int VAR_3, int VAR_4, int VAR_5, int VAR_6 ) {
    unsigned long VAR_7 = VAR_0->cfg->addr;
    unsigned long VAR_8 = FUNC_0(VAR_1,VAR_2,VAR_3,VAR_4);
    unsigned long VAR_9 = VAR_4 & 3;
    unsigned long VAR_10 = FUNC_1( VAR_0, VAR_1, VAR_2, VAR_3, VAR_4 & ~3, 4 );
    unsigned long VAR_11 = ((1 << (VAR_5 * 8)) - 1) << (VAR_9 << 3);
    VAR_10 = (VAR_10 & ~VAR_11) | ((VAR_6 << (VAR_9 << 3)) & VAR_11);
    VAR_0->cfg->addr = FUNC_2(VAR_8);
    FUNC_3();
    VAR_0->cfg->data = FUNC_2(VAR_10);
    FUNC_3();
    VAR_0->cfg->addr = VAR_7;
    FUNC_3();
}
