
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ zip_uint64_t ;
typedef scalar_t__ zip_int64_t ;
struct zip {scalar_t__ nentry; TYPE_1__* entry; int error; } ;
struct TYPE_4__ {int changed; } ;
struct TYPE_3__ {TYPE_2__* changes; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (struct zip*,scalar_t__,int ,int *) ;
 scalar_t__ FUNC_3 (struct zip*,int ,int ,int *) ;
 int FUNC_4 (TYPE_1__*) ;

int
FUNC_5(struct zip *VAR_4, zip_uint64_t VAR_5, int VAR_6)
{
    zip_int64_t VAR_7;

    if (VAR_5 >= VAR_4->nentry) {
 FUNC_1(&VAR_4->error, VAR_2, 0);
 return -1;
    }

    if (!VAR_6 && VAR_4->entry[VAR_5].changes && (VAR_4->entry[VAR_5].changes->changed & VAR_0)) {
 VAR_7 = FUNC_3(VAR_4, FUNC_2(VAR_4, VAR_5, VAR_3, ((void*)0)), 0, ((void*)0));
 if (VAR_7 >= 0 && (zip_uint64_t)VAR_7 != VAR_5) {
     FUNC_1(&VAR_4->error, VAR_1, 0);
     return -1;
 }
    }

    FUNC_0(VAR_4->entry[VAR_5].changes);
    VAR_4->entry[VAR_5].changes = ((void*)0);

    FUNC_4(VAR_4->entry+VAR_5);

    return 0;
}
