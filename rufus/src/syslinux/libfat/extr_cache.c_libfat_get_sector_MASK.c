
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct libfat_sector {scalar_t__ n; void* data; struct libfat_sector* next; } ;
struct libfat_filesystem {scalar_t__ (* read ) (int ,void*,scalar_t__,scalar_t__) ;struct libfat_sector* sectors; int readptr; } ;
typedef scalar_t__ libfat_sector_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct libfat_sector*) ;
 struct libfat_sector* FUNC_1 (scalar_t__,int) ;
 int FUNC_2 (struct libfat_filesystem*) ;
 scalar_t__ FUNC_3 (int ,void*,scalar_t__,scalar_t__) ;

void *FUNC_4(struct libfat_filesystem *VAR_1, libfat_sector_t VAR_2)
{
    struct libfat_sector *VAR_3;

    for (VAR_3 = VAR_1->sectors; VAR_3; VAR_3 = VAR_3->next) {
 if (VAR_3->n == VAR_2)
     return VAR_3->data;
    }


    VAR_3 = FUNC_1(sizeof(struct libfat_sector) + VAR_0, 16);
    if (!VAR_3) {
 FUNC_2(VAR_1);
 VAR_3 = FUNC_1(sizeof(struct libfat_sector) + VAR_0, 16);

 if (!VAR_3)
     return ((void*)0);
    }

    if (VAR_1->read(VAR_1->readptr, VAR_3->data, VAR_0, VAR_2)
 != VAR_0) {
 FUNC_0(VAR_3);
 return ((void*)0);
    }

    VAR_3->n = VAR_2;
    VAR_3->next = VAR_1->sectors;
    VAR_1->sectors = VAR_3;

    return VAR_3->data;
}
