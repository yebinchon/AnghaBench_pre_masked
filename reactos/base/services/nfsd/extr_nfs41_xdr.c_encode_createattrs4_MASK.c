
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int nfs41_file_info ;
struct TYPE_4__ {int attr_vals_len; } ;
typedef TYPE_1__ fattr4 ;
typedef int bool_t ;
typedef int XDR ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int *) ;
 int FUNC_1 (int *,TYPE_1__*) ;

__attribute__((used)) static bool_t FUNC_2(
    XDR *VAR_2,
    nfs41_file_info* VAR_3)
{
    fattr4 VAR_4;


    VAR_4.attr_vals_len = VAR_1;
    if (!FUNC_0(&VAR_4, VAR_3))
        return VAR_0;

    return FUNC_1(VAR_2, &VAR_4);
}
