
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int lfs1_t ;
struct TYPE_9__ {int off; int d; } ;
typedef TYPE_2__ lfs1_entry_t ;
struct TYPE_8__ {int size; int tail; } ;
struct TYPE_10__ {int off; int pos; int * pair; TYPE_1__ d; } ;
typedef TYPE_3__ lfs1_dir_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int,int *,int) ;
 int FUNC_1 (int *,TYPE_3__*,int ) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_4(lfs1_t *VAR_1, lfs1_dir_t *VAR_2, lfs1_entry_t *VAR_3) {
    while (VAR_2->off + sizeof(VAR_3->d) > (0x7fffffff & VAR_2->d.size)-4) {
        if (!(0x80000000 & VAR_2->d.size)) {
            VAR_3->off = VAR_2->off;
            return VAR_0;
        }

        int VAR_4 = FUNC_1(VAR_1, VAR_2, VAR_2->d.tail);
        if (VAR_4) {
            return VAR_4;
        }

        VAR_2->off = sizeof(VAR_2->d);
        VAR_2->pos += sizeof(VAR_2->d) + 4;
    }

    int VAR_5 = FUNC_0(VAR_1, VAR_2->pair[0], VAR_2->off,
            &VAR_3->d, sizeof(VAR_3->d));
    FUNC_2(&VAR_3->d);
    if (VAR_5) {
        return VAR_5;
    }

    VAR_3->off = VAR_2->off;
    VAR_2->off += FUNC_3(VAR_3);
    VAR_2->pos += FUNC_3(VAR_3);
    return 0;
}
