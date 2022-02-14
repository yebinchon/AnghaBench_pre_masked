
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int fd; } ;
struct TYPE_8__ {TYPE_3__ elf; } ;
struct image_file_map {TYPE_4__ u; } ;
struct TYPE_5__ {int const* filename; } ;
struct TYPE_6__ {TYPE_1__ file; } ;
struct elf_map_file_data {TYPE_2__ u; int kind; } ;
typedef int WCHAR ;
typedef scalar_t__ DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int const*) ;
 int FUNC_3 (struct elf_map_file_data*,struct image_file_map*) ;
 int FUNC_4 (struct image_file_map*) ;
 int VAR_1 ;

__attribute__((used)) static BOOL FUNC_5(const WCHAR* VAR_2, struct image_file_map* VAR_3, DWORD VAR_4)
{
    BOOL VAR_5;
    struct elf_map_file_data VAR_6;

    VAR_6.kind = VAR_1;
    VAR_6.u.file.filename = VAR_2;
    if (!FUNC_3(&VAR_6, VAR_3)) return VAR_0;
    if (!(VAR_5 = VAR_4 == FUNC_1(VAR_3->u.elf.fd)))
    {
        FUNC_0("Bad CRC for file %s (got %08x while expecting %08x)\n",
             FUNC_2(VAR_2), FUNC_1(VAR_3->u.elf.fd), VAR_4);
        FUNC_4(VAR_3);
    }
    return VAR_5;
}
