
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_7__ {int query_class; int basic_info; int std_info; int tag_info; int intr_info; int network_info; int ctime; } ;
struct TYPE_5__ {TYPE_3__ getattr; } ;
struct TYPE_6__ {TYPE_1__ args; } ;
typedef TYPE_2__ nfs41_upcall ;
typedef int info_len ;
typedef TYPE_3__ getattr_upcall_args ;







 int FUNC_0 (int,char*,int) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (unsigned char**,int*,int*,int) ;

__attribute__((used)) static int FUNC_3(unsigned char *VAR_0, uint32_t *VAR_1, nfs41_upcall *VAR_2)
{
    int VAR_3;
    getattr_upcall_args *VAR_4 = &VAR_2->args.getattr;
    uint32_t VAR_5;

    switch (VAR_4->query_class) {
    case 131:
        VAR_5 = sizeof(VAR_4->basic_info);
        VAR_3 = FUNC_2(&VAR_0, VAR_1, &VAR_5, sizeof(VAR_5));
        if (VAR_3) goto out;
        VAR_3 = FUNC_2(&VAR_0, VAR_1, &VAR_4->basic_info, VAR_5);
        if (VAR_3) goto out;
        break;
    case 128:
        VAR_5 = sizeof(VAR_4->std_info);
        VAR_3 = FUNC_2(&VAR_0, VAR_1, &VAR_5, sizeof(VAR_5));
        if (VAR_3) goto out;
        VAR_3 = FUNC_2(&VAR_0, VAR_1, &VAR_4->std_info, VAR_5);
        if (VAR_3) goto out;
        break;
    case 132:
        VAR_5 = sizeof(VAR_4->tag_info);
        VAR_3 = FUNC_2(&VAR_0, VAR_1, &VAR_5, sizeof(VAR_5));
        if (VAR_3) goto out;
        VAR_3 = FUNC_2(&VAR_0, VAR_1, &VAR_4->tag_info, VAR_5);
        if (VAR_3) goto out;
        break;
    case 130:
        VAR_5 = sizeof(VAR_4->intr_info);
        VAR_3 = FUNC_2(&VAR_0, VAR_1, &VAR_5, sizeof(VAR_5));
        if (VAR_3) goto out;
        VAR_3 = FUNC_2(&VAR_0, VAR_1, &VAR_4->intr_info, VAR_5);
        if (VAR_3) goto out;
        break;
    case 129:
        VAR_5 = sizeof(VAR_4->network_info);
        VAR_3 = FUNC_2(&VAR_0, VAR_1, &VAR_5, sizeof(VAR_5));
        if (VAR_3) goto out;
        VAR_3 = FUNC_2(&VAR_0, VAR_1, &VAR_4->network_info, VAR_5);
        if (VAR_3) goto out;
        break;
    default:
        FUNC_1("unknown file query class %d\n", VAR_4->query_class);
        VAR_3 = 103;
        goto out;
    }
    VAR_3 = FUNC_2(&VAR_0, VAR_1, &VAR_4->ctime, sizeof(VAR_4->ctime));
    if (VAR_3) goto out;
    FUNC_0(1, "NFS41_FILE_QUERY: downcall changattr=%llu\n", VAR_4->ctime);
out:
    return VAR_3;
}
