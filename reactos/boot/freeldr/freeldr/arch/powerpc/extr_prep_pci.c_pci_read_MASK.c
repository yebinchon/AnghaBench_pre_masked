
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* cfg; } ;
typedef TYPE_2__ pci_desc ;
struct TYPE_4__ {unsigned long addr; unsigned long data; } ;


 unsigned long FUNC_0 (int,int,int,int) ;
 unsigned long FUNC_1 (unsigned long) ;
 int FUNC_2 () ;

unsigned long FUNC_3( pci_desc *VAR_0, int VAR_1, int VAR_2, int VAR_3, int VAR_4, int VAR_5 ) {
    FUNC_2();
    unsigned long VAR_6 = VAR_0->cfg->addr, VAR_7 = 0;
    unsigned long VAR_8 = FUNC_0(VAR_1,VAR_2,VAR_3,VAR_4);
    unsigned long VAR_9 = VAR_4 & 3;
    VAR_0->cfg->addr = FUNC_1(VAR_8);
    FUNC_2();
    switch( VAR_5 ) {
    case 4:
        VAR_7 = VAR_0->cfg->data;
        break;
    case 2:
        VAR_7 = VAR_0->cfg->data;
        VAR_7 = (VAR_7 >> (VAR_9 << 3)) & 0xffff;
        break;
    case 1:
        VAR_7 = VAR_0->cfg->data;
        VAR_7 = (VAR_7 >> (VAR_9 << 3)) & 0xff;
        break;
    }
    VAR_0->cfg->addr = VAR_6;
    FUNC_2();
    return VAR_7;
    }
