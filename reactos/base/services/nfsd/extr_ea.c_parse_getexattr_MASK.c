
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_7__ {unsigned char* ealist; scalar_t__ single; scalar_t__ restart; scalar_t__ eaindex; scalar_t__ buf_len; scalar_t__ ealist_len; int path; } ;
struct TYPE_5__ {TYPE_3__ getexattr; } ;
struct TYPE_6__ {TYPE_1__ args; } ;
typedef TYPE_2__ nfs41_upcall ;
typedef TYPE_3__ getexattr_upcall_args ;


 int FUNC_0 (int,char*,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_1 (unsigned char**,int *,int *) ;
 int FUNC_2 (unsigned char**,int *,scalar_t__*,int) ;

__attribute__((used)) static int FUNC_3(unsigned char *VAR_0, uint32_t VAR_1, nfs41_upcall *VAR_2)
{
    int VAR_3;
    getexattr_upcall_args *VAR_4 = &VAR_2->args.getexattr;

    VAR_3 = FUNC_1(&VAR_0, &VAR_1, &VAR_4->path);
    if (VAR_3) goto out;
    VAR_3 = FUNC_2(&VAR_0, &VAR_1, &VAR_4->eaindex, sizeof(VAR_4->eaindex));
    if (VAR_3) goto out;
    VAR_3 = FUNC_2(&VAR_0, &VAR_1, &VAR_4->restart, sizeof(VAR_4->restart));
    if (VAR_3) goto out;
    VAR_3 = FUNC_2(&VAR_0, &VAR_1, &VAR_4->single, sizeof(VAR_4->single));
    if (VAR_3) goto out;
    VAR_3 = FUNC_2(&VAR_0, &VAR_1, &VAR_4->buf_len, sizeof(VAR_4->buf_len));
    if (VAR_3) goto out;
    VAR_3 = FUNC_2(&VAR_0, &VAR_1, &VAR_4->ealist_len, sizeof(VAR_4->ealist_len));
    if (VAR_3) goto out;
    VAR_4->ealist = VAR_4->ealist_len ? VAR_0 : ((void*)0);

    FUNC_0(1, "parsing NFS41_EA_GET: buf_len=%d Index %d Restart %d "
        "Single %d\n", VAR_4->buf_len,VAR_4->eaindex, VAR_4->restart, VAR_4->single);
out:
    return VAR_3;
}
