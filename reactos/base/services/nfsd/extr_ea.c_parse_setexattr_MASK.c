
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_6__ {unsigned char* buf; int mode; int buf_len; int path; } ;
typedef TYPE_2__ setexattr_upcall_args ;
struct TYPE_5__ {TYPE_2__ setexattr; } ;
struct TYPE_7__ {TYPE_1__ args; } ;
typedef TYPE_3__ nfs41_upcall ;


 int FUNC_0 (int,char*,int ) ;
 int FUNC_1 (unsigned char**,int *,int *) ;
 int FUNC_2 (unsigned char**,int *,int *,int) ;

__attribute__((used)) static int FUNC_3(unsigned char *VAR_0, uint32_t VAR_1, nfs41_upcall *VAR_2)
{
    int VAR_3;
    setexattr_upcall_args *VAR_4 = &VAR_2->args.setexattr;

    VAR_3 = FUNC_1(&VAR_0, &VAR_1, &VAR_4->path);
    if (VAR_3) goto out;
    VAR_3 = FUNC_2(&VAR_0, &VAR_1, &VAR_4->mode, sizeof(VAR_4->mode));
    if (VAR_3) goto out;
    VAR_3 = FUNC_2(&VAR_0, &VAR_1, &VAR_4->buf_len, sizeof(VAR_4->buf_len));
    if (VAR_3) goto out;
    VAR_4->buf = VAR_0;

    FUNC_0(1, "parsing NFS41_EA_SET: mode=%o\n", VAR_4->mode);
out:
    return VAR_3;
}
