
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_7__ {int overflow; int buf_len; int* buf; } ;
struct TYPE_5__ {TYPE_3__ getexattr; } ;
struct TYPE_6__ {TYPE_1__ args; } ;
typedef TYPE_2__ nfs41_upcall ;
typedef TYPE_3__ getexattr_upcall_args ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int*) ;
 int FUNC_1 (unsigned char**,int *,int*,int) ;

__attribute__((used)) static int FUNC_2(unsigned char *VAR_2, uint32_t *VAR_3, nfs41_upcall *VAR_4)
{
    int VAR_5 = VAR_1;
    getexattr_upcall_args *VAR_6 = &VAR_4->args.getexattr;

    VAR_5 = FUNC_1(&VAR_2, VAR_3, &VAR_6->overflow, sizeof(VAR_6->overflow));
    if (VAR_5) goto out;
    VAR_5 = FUNC_1(&VAR_2, VAR_3, &VAR_6->buf_len, sizeof(VAR_6->buf_len));
    if (VAR_5) goto out;
    if (VAR_6->overflow == VAR_0)
        goto out;
    VAR_5 = FUNC_1(&VAR_2, VAR_3, VAR_6->buf, VAR_6->buf_len);
    if (VAR_5) goto out;
out:
    FUNC_0(VAR_6->buf);
    return VAR_5;
}
