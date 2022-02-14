
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_6__ {int buffer; int offset; int len; } ;
typedef TYPE_2__ readwrite_upcall_args ;
struct TYPE_5__ {TYPE_2__ rw; } ;
struct TYPE_7__ {int opcode; TYPE_1__ args; } ;
typedef TYPE_3__ nfs41_upcall ;


 int FUNC_0 (int,char*,int ,int ,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (unsigned char**,int *,int *,int) ;

__attribute__((used)) static int FUNC_3(unsigned char *VAR_0, uint32_t VAR_1, nfs41_upcall *VAR_2)
{
    int VAR_3;
    readwrite_upcall_args *VAR_4 = &VAR_2->args.rw;

    VAR_3 = FUNC_2(&VAR_0, &VAR_1, &VAR_4->len, sizeof(VAR_4->len));
    if (VAR_3) goto out;
    VAR_3 = FUNC_2(&VAR_0, &VAR_1, &VAR_4->offset, sizeof(VAR_4->offset));
    if (VAR_3) goto out;
    VAR_3 = FUNC_2(&VAR_0, &VAR_1, &VAR_4->buffer, sizeof(VAR_4->buffer));
    if (VAR_3) goto out;

    FUNC_0(1, "parsing %s len=%lu offset=%llu buf=%p\n",
            FUNC_1(VAR_2->opcode), VAR_4->len, VAR_4->offset, VAR_4->buffer);
out:
    return VAR_3;
}
