
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_11__ {int buf_len; int query_class; } ;
struct TYPE_9__ {TYPE_5__ getattr; } ;
struct TYPE_10__ {TYPE_2__* state_ref; TYPE_3__ args; } ;
typedef TYPE_4__ nfs41_upcall ;
typedef TYPE_5__ getattr_upcall_args ;
struct TYPE_7__ {int path; int len; } ;
struct TYPE_8__ {TYPE_1__ path; } ;


 int FUNC_0 (int,char*,int ,int ,int ,int ) ;
 int FUNC_1 (unsigned char**,int *,int *,int) ;

__attribute__((used)) static int FUNC_2(unsigned char *VAR_0, uint32_t VAR_1, nfs41_upcall *VAR_2)
{
    int VAR_3;
    getattr_upcall_args *VAR_4 = &VAR_2->args.getattr;

    VAR_3 = FUNC_1(&VAR_0, &VAR_1, &VAR_4->query_class, sizeof(VAR_4->query_class));
    if (VAR_3) goto out;
    VAR_3 = FUNC_1(&VAR_0, &VAR_1, &VAR_4->buf_len, sizeof(VAR_4->buf_len));
    if (VAR_3) goto out;

    FUNC_0(1, "parsing NFS41_FILE_QUERY: info_class=%d buf_len=%d file=%.*s\n",
        VAR_4->query_class, VAR_4->buf_len, VAR_2->state_ref->path.len,
        VAR_2->state_ref->path.path);
out:
    return VAR_3;
}
