
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t zip_uint64_t ;
struct zip {scalar_t__ ch_flags; scalar_t__ flags; size_t nentry; TYPE_2__* entry; scalar_t__ comment_changed; } ;
struct TYPE_4__ {scalar_t__ deleted; TYPE_1__* changes; scalar_t__ source; } ;
struct TYPE_3__ {scalar_t__ changed; } ;



int
FUNC_0(const struct zip *VAR_0, zip_uint64_t *VAR_1)
{
    int VAR_2;
    zip_uint64_t VAR_3, VAR_4;

    VAR_2 = 0;
    VAR_4 = 0;

    if (VAR_0->comment_changed || VAR_0->ch_flags != VAR_0->flags)
 VAR_2 = 1;

    for (VAR_3=0; VAR_3<VAR_0->nentry; VAR_3++) {
 if (VAR_0->entry[VAR_3].deleted || VAR_0->entry[VAR_3].source || (VAR_0->entry[VAR_3].changes && VAR_0->entry[VAR_3].changes->changed != 0))
     VAR_2 = 1;
 if (!VAR_0->entry[VAR_3].deleted)
     VAR_4++;
    }

    if (VAR_1)
 *VAR_1 = VAR_4;

    return VAR_2;
}
