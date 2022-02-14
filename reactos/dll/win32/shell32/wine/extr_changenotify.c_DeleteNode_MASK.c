
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int ULONG_PTR ;
typedef size_t UINT ;
struct TYPE_6__ {size_t cidl; struct TYPE_6__* apidl; struct TYPE_6__* backBuffer; struct TYPE_6__* buffer; scalar_t__ pidl; int entry; } ;
typedef TYPE_1__* LPNOTIFICATIONLIST ;
typedef TYPE_1__* LPITEMIDLIST ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (char*,TYPE_1__*) ;
 int FUNC_3 (int ,int,int ) ;
 int VAR_1 ;
 int FUNC_4 (int *) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_5(LPNOTIFICATIONLIST VAR_3)
{
    UINT VAR_4;

    FUNC_2("item=%p\n", VAR_3);


    FUNC_4( &VAR_3->entry );


    for (VAR_4=0; VAR_4<VAR_3->cidl; VAR_4++)





        FUNC_1((LPITEMIDLIST)VAR_3->apidl[VAR_4].pidl);





    FUNC_1(VAR_3->apidl);
    FUNC_1(VAR_3);
}
