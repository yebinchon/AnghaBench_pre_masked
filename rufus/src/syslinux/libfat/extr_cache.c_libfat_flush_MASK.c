
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct libfat_sector {struct libfat_sector* next; } ;
struct libfat_filesystem {struct libfat_sector* sectors; } ;


 int FUNC_0 (struct libfat_sector*) ;

void FUNC_1(struct libfat_filesystem *VAR_0)
{
    struct libfat_sector *VAR_1, *VAR_2;

    VAR_2 = VAR_0->sectors;
    VAR_0->sectors = ((void*)0);

    for (VAR_1 = VAR_2; VAR_1; VAR_1 = VAR_2) {
 VAR_2 = VAR_1->next;
 FUNC_0(VAR_1);
    }
}
