
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int size; int attrmask; int change; } ;
typedef TYPE_1__ nfs41_file_info ;
struct TYPE_6__ {int attr_vals_len; int attrmask; scalar_t__ attr_vals; } ;
typedef TYPE_2__ fattr4 ;
typedef scalar_t__ bool_t ;
typedef int XDR ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,char*,int ,int ) ;

__attribute__((used)) static bool_t FUNC_6(nfs41_file_info *VAR_5, fattr4 *VAR_6)
{
    XDR VAR_7;
    bool_t VAR_8 = VAR_3;


    FUNC_5(&VAR_7, (char*)VAR_6->attr_vals,
        VAR_2, VAR_4);



    if (FUNC_1(&VAR_5->attrmask, 0, VAR_0)) {
        VAR_8 = FUNC_4(&VAR_7, &VAR_5->change);
        if (!VAR_8) { FUNC_0("getattr.info.change"); goto out; }
        FUNC_2(&VAR_6->attrmask, 0, VAR_0);
    }
    if (FUNC_1(&VAR_5->attrmask, 0, VAR_1)) {
        VAR_8 = FUNC_4(&VAR_7, &VAR_5->size);
        if (!VAR_8) { FUNC_0("getattr.info.size"); goto out; }
        FUNC_2(&VAR_6->attrmask, 0, VAR_1);
    }
    VAR_6->attr_vals_len = FUNC_3(&VAR_7);
out:
    return VAR_8;
}
