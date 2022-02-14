
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef unsigned short uint32_t ;
struct TYPE_7__ {int len; int path; } ;
struct TYPE_8__ {unsigned short basic_info; unsigned short std_info; unsigned short mode; unsigned short changeattr; unsigned short deleg_type; unsigned short symlink_embedded; TYPE_2__ symlink; } ;
typedef TYPE_3__ open_upcall_args ;
struct TYPE_6__ {TYPE_3__ open; } ;
struct TYPE_9__ {unsigned short state_ref; scalar_t__ last_error; TYPE_1__ args; } ;
typedef TYPE_4__ nfs41_upcall ;
typedef int len ;
typedef int WCHAR ;
typedef int LPWSTR ;
typedef int HANDLE ;
typedef int BOOLEAN ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,int ,int ,int,int ,unsigned short) ;
 int FUNC_1 (int,char*,unsigned short,unsigned short,unsigned short) ;
 int FUNC_2 (unsigned char**,unsigned short*,unsigned short*,int) ;

__attribute__((used)) static int FUNC_3(unsigned char *VAR_3, uint32_t *VAR_4, nfs41_upcall *VAR_5)
{
    int VAR_6;
    open_upcall_args *VAR_7 = &VAR_5->args.open;

    VAR_6 = FUNC_2(&VAR_3, VAR_4, &VAR_7->basic_info, sizeof(VAR_7->basic_info));
    if (VAR_6) goto out;
    VAR_6 = FUNC_2(&VAR_3, VAR_4, &VAR_7->std_info, sizeof(VAR_7->std_info));
    if (VAR_6) goto out;
    VAR_6 = FUNC_2(&VAR_3, VAR_4, &VAR_5->state_ref, sizeof(HANDLE));
    if (VAR_6) goto out;
    VAR_6 = FUNC_2(&VAR_3, VAR_4, &VAR_7->mode, sizeof(VAR_7->mode));
    if (VAR_6) goto out;
    VAR_6 = FUNC_2(&VAR_3, VAR_4, &VAR_7->changeattr, sizeof(VAR_7->changeattr));
    if (VAR_6) goto out;
    VAR_6 = FUNC_2(&VAR_3, VAR_4, &VAR_7->deleg_type, sizeof(VAR_7->deleg_type));
    if (VAR_6) goto out;
    if (VAR_5->last_error == VAR_2) {
        unsigned short VAR_8 = (VAR_7->symlink.len + 1) * sizeof(WCHAR);
        VAR_6 = FUNC_2(&VAR_3, VAR_4, &VAR_7->symlink_embedded, sizeof(BOOLEAN));
        if (VAR_6) goto out;
        VAR_6 = FUNC_2(&VAR_3, VAR_4, &VAR_8, sizeof(VAR_8));
        if (VAR_6) goto out;

        if (*VAR_4 <= VAR_8 || !FUNC_0(VAR_0, 0,
            VAR_7->symlink.path, VAR_7->symlink.len,
            (LPWSTR)VAR_3, VAR_8 / sizeof(WCHAR))) {
            VAR_6 = VAR_1;
            goto out;
        }
    }
    FUNC_1(2, "NFS41_OPEN: downcall open_state=0x%p mode %o changeattr 0x%llu\n",
        VAR_5->state_ref, VAR_7->mode, VAR_7->changeattr);
out:
    return VAR_6;
}
