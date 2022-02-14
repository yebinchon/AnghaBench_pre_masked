
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_6__ {int kbuf; int single; int restart; int initial; int filter; int buf_len; int query_class; int state; int root; } ;
typedef TYPE_2__ readdir_upcall_args ;
struct TYPE_5__ {TYPE_2__ readdir; } ;
struct TYPE_7__ {int state_ref; int root_ref; TYPE_1__ args; } ;
typedef TYPE_3__ nfs41_upcall ;


 int FUNC_0 (int,char*,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_1 (unsigned char**,int *,int *) ;
 int FUNC_2 (unsigned char**,int *,int *,int) ;

__attribute__((used)) static int FUNC_3(unsigned char *VAR_0, uint32_t VAR_1, nfs41_upcall *VAR_2)
{
    int VAR_3;
    readdir_upcall_args *VAR_4 = &VAR_2->args.readdir;

    VAR_3 = FUNC_2(&VAR_0, &VAR_1, &VAR_4->query_class, sizeof(VAR_4->query_class));
    if (VAR_3) goto out;
    VAR_3 = FUNC_2(&VAR_0, &VAR_1, &VAR_4->buf_len, sizeof(VAR_4->buf_len));
    if (VAR_3) goto out;
    VAR_3 = FUNC_1(&VAR_0, &VAR_1, &VAR_4->filter);
    if (VAR_3) goto out;
    VAR_3 = FUNC_2(&VAR_0, &VAR_1, &VAR_4->initial, sizeof(VAR_4->initial));
    if (VAR_3) goto out;
    VAR_3 = FUNC_2(&VAR_0, &VAR_1, &VAR_4->restart, sizeof(VAR_4->restart));
    if (VAR_3) goto out;
    VAR_3 = FUNC_2(&VAR_0, &VAR_1, &VAR_4->single, sizeof(VAR_4->single));
    if (VAR_3) goto out;
    VAR_3 = FUNC_2(&VAR_0, &VAR_1, &VAR_4->kbuf, sizeof(VAR_4->kbuf));
    if (VAR_3) goto out;
    VAR_4->root = VAR_2->root_ref;
    VAR_4->state = VAR_2->state_ref;

    FUNC_0(1, "parsing NFS41_DIR_QUERY: info_class=%d buf_len=%d "
        "filter='%s'\n\tInitial\\Restart\\Single %d\\%d\\%d buf=%p\n",
        VAR_4->query_class, VAR_4->buf_len, VAR_4->filter,
        VAR_4->initial, VAR_4->restart, VAR_4->single, VAR_4->kbuf);
out:
    return VAR_3;
}
