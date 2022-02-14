
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int item ;
struct TYPE_7__ {int checked; int unfetched; int reclaimed; scalar_t__ it_flags; } ;
struct TYPE_6__ {TYPE_1__* mod; } ;
struct TYPE_5__ {int (* doneclass ) (TYPE_2__*,int) ;} ;


 TYPE_2__ VAR_0 ;
 int VAR_1 ;
 TYPE_3__* VAR_2 ;
 int FUNC_0 (int,int ,int ,int ) ;
 int FUNC_1 (int *) ;
 int * VAR_3 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_2__*,int) ;

__attribute__((used)) static void FUNC_4(int VAR_4) {
    VAR_2[VAR_4].it_flags = 0;
    VAR_1--;
    FUNC_1((item *)&VAR_2[VAR_4]);
    FUNC_0(VAR_4, VAR_2[VAR_4].reclaimed,
            VAR_2[VAR_4].unfetched, VAR_2[VAR_4].checked);
    FUNC_2(&VAR_3[VAR_4]);
    if (VAR_0.mod->doneclass != ((void*)0))
        VAR_0.mod->doneclass(&VAR_0, VAR_4);
}
