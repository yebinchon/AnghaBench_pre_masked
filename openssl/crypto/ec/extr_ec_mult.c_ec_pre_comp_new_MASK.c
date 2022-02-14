
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int blocksize; int w; int references; int * lock; int const* group; } ;
typedef TYPE_1__ EC_PRE_COMP ;
typedef int EC_GROUP ;


 int * FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 (int ,int ) ;
 int VAR_1 ;
 int FUNC_2 (TYPE_1__*) ;
 TYPE_1__* FUNC_3 (int) ;

__attribute__((used)) static EC_PRE_COMP *FUNC_4(const EC_GROUP *VAR_2)
{
    EC_PRE_COMP *VAR_3 = ((void*)0);

    if (!VAR_2)
        return ((void*)0);

    VAR_3 = FUNC_3(sizeof(*VAR_3));
    if (VAR_3 == ((void*)0)) {
        FUNC_1(VAR_0, VAR_1);
        return VAR_3;
    }

    VAR_3->group = VAR_2;
    VAR_3->blocksize = 8;
    VAR_3->w = 4;
    VAR_3->references = 1;

    VAR_3->lock = FUNC_0();
    if (VAR_3->lock == ((void*)0)) {
        FUNC_1(VAR_0, VAR_1);
        FUNC_2(VAR_3);
        return ((void*)0);
    }
    return VAR_3;
}
