
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef void guint8 ;
struct TYPE_5__ {scalar_t__ version; int dir_id; } ;
typedef TYPE_1__ SeafDir ;


 int FUNC_0 (void*) ;
 scalar_t__ FUNC_1 (void*,int,void**,int*) ;
 void* FUNC_2 (TYPE_1__*,int*) ;
 void* FUNC_3 (TYPE_1__*,int*) ;
 int FUNC_4 (char*,int ) ;

void *
FUNC_5 (SeafDir *VAR_0, int *VAR_1)
{
    if (VAR_0->version > 0) {
        guint8 *VAR_2;
        int VAR_3;
        guint8 *VAR_4;

        VAR_2 = FUNC_2 (VAR_0, &VAR_3);
        if (!VAR_2)
            return ((void*)0);

        if (FUNC_1 (VAR_2, VAR_3, &VAR_4, VAR_1) < 0) {
            FUNC_4 ("Failed to compress dir object %s.\n", VAR_0->dir_id);
            FUNC_0 (VAR_2);
            return ((void*)0);
        }

        FUNC_0 (VAR_2);
        return VAR_4;
    } else
        return FUNC_3 (VAR_0, VAR_1);
}
