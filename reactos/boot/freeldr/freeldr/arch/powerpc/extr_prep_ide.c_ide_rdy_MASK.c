
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ port; } ;
typedef TYPE_1__ idectl_desc ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 () ;

void FUNC_2( void *VAR_0 ) {
    idectl_desc *VAR_1 = (idectl_desc *)VAR_0;
    while( !(FUNC_0(VAR_1->port+7) & 0x40) ) FUNC_1();
}
