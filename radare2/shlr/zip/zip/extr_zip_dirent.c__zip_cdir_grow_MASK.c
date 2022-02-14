
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zip_uint64_t ;
struct zip_error {int dummy; } ;
struct zip_entry {int dummy; } ;
struct zip_cdir {int nentry_alloc; struct zip_entry* entry; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct zip_entry*) ;
 int FUNC_1 (struct zip_error*,int ,int ) ;
 scalar_t__ FUNC_2 (struct zip_entry*,int) ;

int
FUNC_3(struct zip_cdir *VAR_2, zip_uint64_t VAR_3, struct zip_error *VAR_4)
{
    struct zip_entry *VAR_5;
    zip_uint64_t VAR_6;

    if (VAR_3 < VAR_2->nentry_alloc) {
 FUNC_1(VAR_4, VAR_0, 0);
 return -1;
    }

    if (VAR_3 == VAR_2->nentry_alloc)
 return 0;

    if ((VAR_5=((struct zip_entry *)
  FUNC_2(VAR_2->entry, sizeof(*(VAR_2->entry))*VAR_3))) == ((void*)0)) {
 FUNC_1(VAR_4, VAR_1, 0);
 return -1;
    }

    for (VAR_6=VAR_2->nentry_alloc; VAR_6<VAR_3; VAR_6++)
 FUNC_0(VAR_5+VAR_6);

    VAR_2->nentry_alloc = VAR_3;
    VAR_2->entry = VAR_5;

    return 0;
}
