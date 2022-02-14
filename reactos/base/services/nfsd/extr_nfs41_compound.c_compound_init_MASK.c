
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef int nfs_resop4 ;
typedef int nfs_argop4 ;
typedef int nfs41_compound_res ;
struct TYPE_7__ {int * resarray; scalar_t__ resarray_count; int tag_len; } ;
struct TYPE_5__ {int minorversion; int * argarray; scalar_t__ argarray_count; scalar_t__ tag_len; int tag; } ;
struct TYPE_6__ {TYPE_4__ res; TYPE_1__ args; } ;
typedef TYPE_2__ nfs41_compound ;


 int VAR_0 ;
 int FUNC_0 (TYPE_4__*,int) ;
 int FUNC_1 (int ,char const*,scalar_t__) ;
 scalar_t__ FUNC_2 (char const*) ;

void FUNC_3(
    nfs41_compound *VAR_1,
    nfs_argop4 *VAR_2,
    nfs_resop4 *VAR_3,
    const char *VAR_4)
{

    VAR_1->args.tag_len = (uint32_t)FUNC_2(VAR_4);
    FUNC_1(VAR_1->args.tag, VAR_4, VAR_1->args.tag_len);
    VAR_1->args.minorversion = 1;
    VAR_1->args.argarray_count = 0;
    VAR_1->args.argarray = VAR_2;


    FUNC_0(&VAR_1->res, sizeof(nfs41_compound_res));
    VAR_1->res.tag_len = VAR_0;
    VAR_1->res.resarray_count = 0;
    VAR_1->res.resarray = VAR_3;
}
