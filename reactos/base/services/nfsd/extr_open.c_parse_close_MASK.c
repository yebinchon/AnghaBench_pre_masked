
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_7__ {char* path; scalar_t__ remove; scalar_t__ renamed; scalar_t__ srv_open; } ;
struct TYPE_5__ {TYPE_3__ close; } ;
struct TYPE_6__ {TYPE_1__ args; } ;
typedef TYPE_2__ nfs41_upcall ;
typedef TYPE_3__ close_upcall_args ;
typedef int HANDLE ;
typedef int BOOLEAN ;


 int FUNC_0 (int,char*,scalar_t__,scalar_t__,scalar_t__,char*) ;
 int FUNC_1 (unsigned char**,int *,char**) ;
 int FUNC_2 (unsigned char**,int *,scalar_t__*,int) ;

__attribute__((used)) static int FUNC_3(unsigned char *VAR_0, uint32_t VAR_1, nfs41_upcall *VAR_2)
{
    int VAR_3;
    close_upcall_args *VAR_4 = &VAR_2->args.close;

    VAR_3 = FUNC_2(&VAR_0, &VAR_1, &VAR_4->remove, sizeof(BOOLEAN));
    if (VAR_3) goto out;
    VAR_3 = FUNC_2(&VAR_0, &VAR_1, &VAR_4->srv_open, sizeof(HANDLE));
    if (VAR_3) goto out;
    if (VAR_4->remove) {
        VAR_3 = FUNC_1(&VAR_0, &VAR_1, &VAR_4->path);
        if (VAR_3) goto out;
        VAR_3 = FUNC_2(&VAR_0, &VAR_1, &VAR_4->renamed, sizeof(BOOLEAN));
        if (VAR_3) goto out;
    }

    FUNC_0(1, "parsing NFS41_CLOSE: remove=%d srv_open=%x renamed=%d "
        "filename='%s'\n", VAR_4->remove, VAR_4->srv_open, VAR_4->renamed,
        VAR_4->remove ? VAR_4->path : "");
out:
    return VAR_3;
}
