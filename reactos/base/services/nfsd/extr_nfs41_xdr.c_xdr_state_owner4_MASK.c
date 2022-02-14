
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u_quad_t ;
struct TYPE_7__ {unsigned char* owner; int owner_len; } ;
typedef TYPE_1__ state_owner4 ;
typedef int bool_t ;
struct TYPE_8__ {scalar_t__ x_op; } ;
typedef TYPE_2__ XDR ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (TYPE_2__*,char**,int *,int ) ;
 int FUNC_1 (TYPE_2__*,int *) ;

__attribute__((used)) static bool_t FUNC_2(
    XDR *VAR_4,
    state_owner4 *VAR_5)
{
    u_quad_t VAR_6 = 0;
    unsigned char *VAR_7 = VAR_5->owner;





    if (VAR_4->x_op == VAR_3) {
        if (!FUNC_1(VAR_4, &VAR_6))
            return VAR_0;
    } else if (VAR_4->x_op == VAR_2) {
        if (!FUNC_1(VAR_4, &VAR_6))
            return VAR_0;
    } else return VAR_0;

    return FUNC_0(VAR_4, (char **)&VAR_7, &VAR_5->owner_len, VAR_1);
}
