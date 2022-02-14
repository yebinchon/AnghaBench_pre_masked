
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_6__ {unsigned char* buf; int buf_len; int set_class; int path; int state; int root; } ;
typedef TYPE_2__ setattr_upcall_args ;
struct TYPE_5__ {TYPE_2__ setattr; } ;
struct TYPE_7__ {int state_ref; int root_ref; TYPE_1__ args; } ;
typedef TYPE_3__ nfs41_upcall ;


 int FUNC_0 (int,char*,int ,int ,int ) ;
 int FUNC_1 (unsigned char**,int *,int *) ;
 int FUNC_2 (unsigned char**,int *,int *,int) ;

__attribute__((used)) static int FUNC_3(unsigned char *VAR_0, uint32_t VAR_1, nfs41_upcall *VAR_2)
{
    int VAR_3;
    setattr_upcall_args *VAR_4 = &VAR_2->args.setattr;

    VAR_3 = FUNC_1(&VAR_0, &VAR_1, &VAR_4->path);
    if (VAR_3) goto out;
    VAR_3 = FUNC_2(&VAR_0, &VAR_1, &VAR_4->set_class, sizeof(VAR_4->set_class));
    if (VAR_3) goto out;
    VAR_3 = FUNC_2(&VAR_0, &VAR_1, &VAR_4->buf_len, sizeof(VAR_4->buf_len));
    if (VAR_3) goto out;

    VAR_4->buf = VAR_0;
    VAR_4->root = VAR_2->root_ref;
    VAR_4->state = VAR_2->state_ref;

    FUNC_0(1, "parsing NFS41_FILE_SET: filename='%s' info_class=%d "
        "buf_len=%d\n", VAR_4->path, VAR_4->set_class, VAR_4->buf_len);
out:
    return VAR_3;
}
