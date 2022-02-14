
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t zip_uint64_t ;
typedef int zip_flags_t ;
struct zip_error {int dummy; } ;
struct zip_dirent {int dummy; } ;
struct zip {size_t nentry; TYPE_1__* entry; struct zip_error error; } ;
struct TYPE_2__ {struct zip_dirent* changes; struct zip_dirent* orig; scalar_t__ deleted; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct zip_error*,int ,int ) ;

struct zip_dirent *
FUNC_1(struct zip *VAR_3, zip_uint64_t VAR_4, zip_flags_t VAR_5, struct zip_error *VAR_6)
{
    if (VAR_6 == ((void*)0))
 VAR_6 = &VAR_3->error;

    if (VAR_4 >= VAR_3->nentry) {
 FUNC_0(VAR_6, VAR_1, 0);
 return ((void*)0);
    }

    if ((VAR_5 & VAR_2) || VAR_3->entry[VAR_4].changes == ((void*)0)) {
 if (VAR_3->entry[VAR_4].orig == ((void*)0)) {
     FUNC_0(VAR_6, VAR_1, 0);
     return ((void*)0);
 }
 if (VAR_3->entry[VAR_4].deleted && (VAR_5 & VAR_2) == 0) {
     FUNC_0(VAR_6, VAR_0, 0);
     return ((void*)0);
 }
 return VAR_3->entry[VAR_4].orig;
    }
    else
 return VAR_3->entry[VAR_4].changes;
}
