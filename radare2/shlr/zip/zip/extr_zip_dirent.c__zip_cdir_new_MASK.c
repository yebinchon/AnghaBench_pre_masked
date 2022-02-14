
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zip_uint64_t ;
struct zip_error {int dummy; } ;
struct zip_entry {int dummy; } ;
struct zip_cdir {int nentry; int nentry_alloc; int * comment; scalar_t__ offset; scalar_t__ size; struct zip_entry* entry; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct zip_entry*) ;
 int FUNC_1 (struct zip_error*,int ,int ) ;
 int FUNC_2 (struct zip_cdir*) ;
 scalar_t__ FUNC_3 (int) ;

struct zip_cdir *
FUNC_4(zip_uint64_t VAR_2, struct zip_error *VAR_3)
{
    struct zip_cdir *VAR_4;
    zip_uint64_t VAR_5;

    if ((VAR_4=(struct zip_cdir *)FUNC_3(sizeof(*VAR_4))) == ((void*)0)) {
 FUNC_1(VAR_3, VAR_1, 0);
 return ((void*)0);
    }

    if (VAR_2 == 0) {
 VAR_4->entry = ((void*)0);
    } else if ((VAR_2 > VAR_0/sizeof(*(VAR_4->entry))) || (VAR_4->entry=(struct zip_entry *)FUNC_3(sizeof(*(VAR_4->entry))*(size_t)VAR_2)) == ((void*)0)) {
 FUNC_1(VAR_3, VAR_1, 0);
 FUNC_2(VAR_4);
 return ((void*)0);
    }

    for (VAR_5=0; VAR_5<VAR_2; VAR_5++)
 FUNC_0(VAR_4->entry+VAR_5);

    VAR_4->nentry = VAR_4->nentry_alloc = VAR_2;
    VAR_4->size = VAR_4->offset = 0;
    VAR_4->comment = ((void*)0);

    return VAR_4;
}
