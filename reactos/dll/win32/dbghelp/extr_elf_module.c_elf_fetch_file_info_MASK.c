
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int fd; int elf_size; int elf_start; } ;
struct TYPE_6__ {TYPE_1__ elf; } ;
struct image_file_map {TYPE_2__ u; } ;
struct TYPE_7__ {int const* filename; } ;
struct TYPE_8__ {TYPE_3__ file; } ;
struct elf_map_file_data {TYPE_4__ u; int kind; } ;
typedef int WCHAR ;
typedef int DWORD_PTR ;
typedef int DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct elf_map_file_data*,struct image_file_map*) ;
 int FUNC_2 (struct image_file_map*) ;
 int VAR_2 ;

BOOL FUNC_3(const WCHAR* VAR_3, DWORD_PTR* VAR_4,
                         DWORD* VAR_5, DWORD* VAR_6)
{
    struct image_file_map VAR_7;

    struct elf_map_file_data VAR_8;

    VAR_8.kind = VAR_2;
    VAR_8.u.file.filename = VAR_3;
    if (!FUNC_1(&VAR_8, &VAR_7)) return VAR_0;
    if (VAR_4) *VAR_4 = VAR_7.u.elf.elf_start;
    *VAR_5 = VAR_7.u.elf.elf_size;
    *VAR_6 = FUNC_0(VAR_7.u.elf.fd);
    FUNC_2(&VAR_7);
    return VAR_1;
}
