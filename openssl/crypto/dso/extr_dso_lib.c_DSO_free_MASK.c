
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int flags; int lock; struct TYPE_9__* loaded_filename; struct TYPE_9__* filename; int meth_data; TYPE_1__* meth; int references; } ;
struct TYPE_8__ {int (* finish ) (TYPE_2__*) ;int (* dso_unload ) (TYPE_2__*) ;} ;
typedef TYPE_2__ DSO ;


 scalar_t__ FUNC_0 (int *,int*,int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (char*,TYPE_2__*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*) ;

int FUNC_9(DSO *VAR_4)
{
    int VAR_5;

    if (VAR_4 == ((void*)0))
        return 1;

    if (FUNC_0(&VAR_4->references, &VAR_5, VAR_4->lock) <= 0)
        return 0;

    FUNC_5("DSO", VAR_4);
    if (VAR_5 > 0)
        return 1;
    FUNC_4(VAR_5 < 0);

    if ((VAR_4->flags & VAR_0) == 0) {
        if ((VAR_4->meth->dso_unload != ((void*)0)) && !VAR_4->meth->dso_unload(VAR_4)) {
            FUNC_2(VAR_1, VAR_3);
            return 0;
        }
    }

    if ((VAR_4->meth->finish != ((void*)0)) && !VAR_4->meth->finish(VAR_4)) {
        FUNC_2(VAR_1, VAR_2);
        return 0;
    }

    FUNC_6(VAR_4->meth_data);
    FUNC_3(VAR_4->filename);
    FUNC_3(VAR_4->loaded_filename);
    FUNC_1(VAR_4->lock);
    FUNC_3(VAR_4);
    return 1;
}
