
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t zip_uint64_t ;
typedef int zip_int64_t ;
struct zip_error {int dummy; } ;
struct zip_dirent {int * extra_fields; } ;
struct zip_cdir {size_t nentry; TYPE_1__* entry; scalar_t__ offset; } ;
typedef int off_t ;
struct TYPE_4__ {size_t offset; size_t comp_size; int local_extra_fields_read; int extra_fields; int filename; } ;
struct TYPE_3__ {TYPE_2__* orig; } ;
typedef int FILE ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int FUNC_0 (struct zip_dirent*) ;
 int FUNC_1 (struct zip_dirent*,int *,int *,int *,int,struct zip_error*) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (struct zip_error*,int ,int ) ;
 scalar_t__ FUNC_4 (TYPE_2__*,struct zip_dirent*) ;
 size_t FUNC_5 (int ) ;
 int VAR_6 ;
 scalar_t__ FUNC_6 (int *,int ,int ) ;

__attribute__((used)) static zip_int64_t
FUNC_7(FILE *VAR_7, struct zip_cdir *VAR_8, struct zip_error *VAR_9)
{
    zip_uint64_t VAR_10;
    zip_uint64_t VAR_11, VAR_12, VAR_13;
    struct zip_dirent VAR_14;

    if (VAR_8->nentry) {
 VAR_12 = VAR_8->entry[0].orig->offset;
 VAR_11 = VAR_8->entry[0].orig->offset;
    }
    else
 VAR_11 = VAR_12 = 0;

    for (VAR_10=0; VAR_10<VAR_8->nentry; VAR_10++) {
 if (VAR_8->entry[VAR_10].orig->offset < VAR_11)
     VAR_11 = VAR_8->entry[VAR_10].orig->offset;
 if (VAR_11 > (zip_uint64_t)VAR_8->offset) {
     FUNC_3(VAR_9, VAR_3, 0);
     return -1;
 }

 VAR_13 = VAR_8->entry[VAR_10].orig->offset + VAR_8->entry[VAR_10].orig->comp_size
     + FUNC_5(VAR_8->entry[VAR_10].orig->filename) + VAR_0;
 if (VAR_13 > VAR_12)
     VAR_12 = VAR_13;
 if (VAR_12 > (zip_uint64_t)VAR_8->offset) {
     FUNC_3(VAR_9, VAR_3, 0);
     return -1;
 }

 if (FUNC_6(VAR_7, (off_t)VAR_8->entry[VAR_10].orig->offset, VAR_1) != 0) {
     FUNC_3(VAR_9, VAR_4, VAR_6);
     return -1;
 }

 if (FUNC_1(&VAR_14, VAR_7, ((void*)0), ((void*)0), 1, VAR_9) == -1)
     return -1;

 if (FUNC_4(VAR_8->entry[VAR_10].orig, &VAR_14) != 0) {
     FUNC_3(VAR_9, VAR_2, 0);
     FUNC_0(&VAR_14);
     return -1;
 }

 VAR_8->entry[VAR_10].orig->extra_fields = FUNC_2(VAR_8->entry[VAR_10].orig->extra_fields, VAR_14.extra_fields);
 VAR_8->entry[VAR_10].orig->local_extra_fields_read = 1;
 VAR_14.extra_fields = ((void*)0);

 FUNC_0(&VAR_14);
    }

    return (VAR_12-VAR_11) < VAR_5 ? (zip_int64_t)(VAR_12-VAR_11) : VAR_5;
}
