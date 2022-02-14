
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int guint8 ;
struct TYPE_5__ {scalar_t__ version; int file_id; } ;
typedef TYPE_1__ Seafile ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,int,int **,int*) ;
 int FUNC_2 (char*,int ) ;
 int * FUNC_3 (TYPE_1__*,int*) ;
 int * FUNC_4 (TYPE_1__*,int*) ;

__attribute__((used)) static guint8 *
FUNC_5 (Seafile *VAR_0, int *VAR_1)
{
    if (VAR_0->version > 0) {
        guint8 *VAR_2;
        int VAR_3;
        guint8 *VAR_4;

        VAR_2 = FUNC_3 (VAR_0, &VAR_3);
        if (!VAR_2)
            return ((void*)0);

        if (FUNC_1 (VAR_2, VAR_3, &VAR_4, VAR_1) < 0) {
            FUNC_2 ("Failed to compress file object %s.\n", VAR_0->file_id);
            FUNC_0 (VAR_2);
            return ((void*)0);
        }
        FUNC_0 (VAR_2);
        return VAR_4;
    } else
        return FUNC_4 (VAR_0, VAR_1);
}
