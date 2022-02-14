
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int op; scalar_t__ arg; } ;
typedef TYPE_2__ nfs_argop4 ;
struct TYPE_7__ {unsigned char* data; int data_len; int stable; int offset; TYPE_1__* stateid; } ;
typedef TYPE_3__ nfs41_write_args ;
typedef int bool_t ;
typedef int XDR ;
struct TYPE_5__ {int stateid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,char**,int *,int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int *) ;

__attribute__((used)) static bool_t FUNC_5(
    XDR *VAR_3,
    nfs_argop4 *VAR_4)
{
    nfs41_write_args *VAR_5 = (nfs41_write_args*)VAR_4->arg;
    unsigned char *VAR_6 = VAR_5->data;

    if (FUNC_0(VAR_4->op, VAR_2))
        return VAR_0;

    if (!FUNC_2(VAR_3, &VAR_5->stateid->stateid))
        return VAR_0;

    if (!FUNC_3(VAR_3, &VAR_5->offset))
        return VAR_0;

    if (!FUNC_4(VAR_3, &VAR_5->stable))
        return VAR_0;

    return FUNC_1(VAR_3, (char **)&VAR_6, &VAR_5->data_len, VAR_1);
}
