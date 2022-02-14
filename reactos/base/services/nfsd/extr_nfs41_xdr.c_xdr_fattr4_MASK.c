
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned char* attr_vals; int attr_vals_len; int attrmask; } ;
typedef TYPE_1__ fattr4 ;
typedef int bool_t ;
typedef int XDR ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,char**,int *,int ) ;

bool_t FUNC_2(
    XDR *VAR_2,
    fattr4 *VAR_3)
{
    unsigned char *VAR_4 = VAR_3->attr_vals;

    if (!FUNC_0(VAR_2, &VAR_3->attrmask))
        return VAR_0;

    return FUNC_1(VAR_2, (char **)&VAR_4, &VAR_3->attr_vals_len, VAR_1);
}
