
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int isBuild; int myXid; } ;
typedef TYPE_1__ spgxlogState ;
struct TYPE_7__ {int deadTupleStorage; int isBuild; int myXid; } ;
typedef TYPE_2__ SpGistState ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int ,int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(SpGistState *VAR_1, spgxlogState VAR_2)
{
 FUNC_0(VAR_1, 0, sizeof(*VAR_1));

 VAR_1->myXid = VAR_2.myXid;
 VAR_1->isBuild = VAR_2.isBuild;
 VAR_1->deadTupleStorage = FUNC_1(VAR_0);
}
