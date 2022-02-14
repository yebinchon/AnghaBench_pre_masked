
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mp_archive_volume {int * src; TYPE_1__* mpa; } ;
struct TYPE_2__ {int * primary_src; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct mp_archive_volume *VAR_0)
{

    if (VAR_0->src && VAR_0->src != VAR_0->mpa->primary_src) {
        FUNC_0(VAR_0->src);
        VAR_0->src = ((void*)0);
    }
}
