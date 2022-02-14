
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int size; int perslab; scalar_t__ slabs; char** slab_list; } ;
typedef TYPE_1__ slabclass_t ;
struct TYPE_5__ {int slab_chunk_size_max; int slab_page_size; scalar_t__ slab_reassign; } ;


 int FUNC_0 (unsigned int const) ;
 int FUNC_1 (unsigned int const) ;
 size_t VAR_0 ;
 char* FUNC_2 () ;
 scalar_t__ FUNC_3 (unsigned int const) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 char* FUNC_4 (size_t) ;
 int FUNC_5 (char*,int ,size_t) ;
 TYPE_3__ VAR_4 ;
 TYPE_1__* VAR_5 ;
 int FUNC_6 (char*,unsigned int const) ;

__attribute__((used)) static int FUNC_7(const unsigned int VAR_6) {
    slabclass_t *VAR_7 = &VAR_5[VAR_6];
    slabclass_t *VAR_8 = &VAR_5[VAR_0];
    int VAR_9 = (VAR_4.slab_reassign || VAR_4.slab_chunk_size_max != VAR_4.slab_page_size)
        ? VAR_4.slab_page_size
        : VAR_7->size * VAR_7->perslab;
    char *VAR_10;

    if ((VAR_1 && VAR_3 + VAR_9 > VAR_1 && VAR_7->slabs > 0
         && VAR_8->slabs == 0)) {
        VAR_2 = 1;
        FUNC_1(VAR_6);
        return 0;
    }

    if ((FUNC_3(VAR_6) == 0) ||
        (((VAR_10 = FUNC_2()) == ((void*)0)) &&
        ((VAR_10 = FUNC_4((size_t)VAR_9)) == 0))) {

        FUNC_1(VAR_6);
        return 0;
    }

    FUNC_5(VAR_10, 0, (size_t)VAR_9);
    FUNC_6(VAR_10, VAR_6);

    VAR_7->slab_list[VAR_7->slabs++] = VAR_10;
    FUNC_0(VAR_6);

    return 1;
}
