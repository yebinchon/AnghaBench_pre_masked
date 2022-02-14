
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {scalar_t__ new_time; int * new_offset; int stateid; int length; int offset; } ;
typedef TYPE_1__ pnfs_layoutcommit_args ;
struct TYPE_5__ {int op; scalar_t__ arg; } ;
typedef TYPE_2__ nfs_argop4 ;
typedef int enum_t ;
typedef int bool_t ;
typedef int XDR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,scalar_t__) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *,int *) ;

__attribute__((used)) static bool_t FUNC_7(
    XDR *VAR_4,
    nfs_argop4 *VAR_5)
{
    pnfs_layoutcommit_args *VAR_6 = (pnfs_layoutcommit_args*)VAR_5->arg;
    bool_t VAR_7 = VAR_0;
    bool_t VAR_8 = VAR_3;
    enum_t VAR_9 = VAR_2;
    uint32_t VAR_10 = 0;

    if (FUNC_0(VAR_5->op, VAR_1))
        return VAR_0;

    if (!FUNC_5(VAR_4, &VAR_6->offset))
        return VAR_0;

    if (!FUNC_5(VAR_4, &VAR_6->length))
        return VAR_0;

    if (!FUNC_1(VAR_4, &VAR_7))
        return VAR_0;

    if (!FUNC_4(VAR_4, VAR_6->stateid))
        return VAR_0;


    if (VAR_6->new_offset) {
        if (!FUNC_1(VAR_4, &VAR_8))
            return VAR_0;

        if (!FUNC_5(VAR_4, VAR_6->new_offset))
            return VAR_0;
    } else {
        if (!FUNC_1(VAR_4, &VAR_7))
            return VAR_0;
    }


    if (VAR_6->new_time) {
        if (!FUNC_1(VAR_4, &VAR_8))
            return VAR_0;

        if (!FUNC_3(VAR_4, VAR_6->new_time))
            return VAR_0;
    } else {
        if (!FUNC_1(VAR_4, &VAR_7))
            return VAR_0;
    }


    if (!FUNC_2(VAR_4, &VAR_9))
        return VAR_0;

    return FUNC_6(VAR_4, &VAR_10);
}
