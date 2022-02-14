
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef unsigned short uint32_t ;
struct TYPE_6__ {int len; int path; } ;
struct TYPE_8__ {TYPE_1__ target_get; scalar_t__ set; } ;
typedef TYPE_3__ symlink_upcall_args ;
struct TYPE_7__ {TYPE_3__ symlink; } ;
struct TYPE_9__ {TYPE_2__ args; } ;
typedef TYPE_4__ nfs41_upcall ;
typedef int len ;
typedef int WCHAR ;
typedef int LPWSTR ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,int,int ,unsigned short) ;
 int VAR_2 ;
 int FUNC_1 (unsigned char**,unsigned short*,unsigned short*,int) ;

__attribute__((used)) static int FUNC_2(unsigned char *VAR_3, uint32_t *VAR_4, nfs41_upcall *VAR_5)
{
    symlink_upcall_args *VAR_6 = &VAR_5->args.symlink;
    unsigned short VAR_7 = (VAR_6->target_get.len + 1) * sizeof(WCHAR);
    int VAR_8 = VAR_2;

    if (VAR_6->set)
        goto out;

    VAR_8 = FUNC_1(&VAR_3, VAR_4, &VAR_7, sizeof(VAR_7));
    if (VAR_8) goto out;

    if (*VAR_4 <= VAR_7 || !FUNC_0(VAR_0, 0,
            VAR_6->target_get.path, VAR_6->target_get.len,
            (LPWSTR)VAR_3, VAR_7 / sizeof(WCHAR))) {
        VAR_8 = VAR_1;
        goto out;
    }
out:
    return VAR_8;
}
