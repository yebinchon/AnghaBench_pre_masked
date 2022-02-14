
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int if_type; int if_physaddr; int if_physaddrlen; } ;
struct TYPE_6__ {TYPE_1__ ent; } ;
struct TYPE_7__ {TYPE_2__ if_info; } ;
typedef int * PDWORD ;
typedef int PBYTE ;
typedef TYPE_3__ IFInfo ;


 int FUNC_0 (int ,int ,int ) ;

void FUNC_1( IFInfo *VAR_0,
                                   PDWORD VAR_1, PBYTE VAR_2, PDWORD VAR_3 ) {
    *VAR_1 = VAR_0->if_info.ent.if_physaddrlen;
    FUNC_0( VAR_2, VAR_0->if_info.ent.if_physaddr, *VAR_1 );
    *VAR_3 = VAR_0->if_info.ent.if_type;
}
