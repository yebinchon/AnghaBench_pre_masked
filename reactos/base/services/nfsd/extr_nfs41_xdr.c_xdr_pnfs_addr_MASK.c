
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t uint32_t ;
struct TYPE_6__ {char* netid; char* uaddr; } ;
typedef TYPE_1__ netaddr4 ;
typedef int bool_t ;
struct TYPE_7__ {scalar_t__ x_op; } ;
typedef TYPE_2__ XDR ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (TYPE_2__*,char**,size_t*,size_t) ;

__attribute__((used)) static bool_t FUNC_1(
    XDR *VAR_6,
    netaddr4 *VAR_7)
{
    uint32_t VAR_8;
    char *VAR_9 = VAR_7->netid;
    char *VAR_10 = VAR_7->uaddr;

    if (VAR_6->x_op == VAR_5)
        VAR_8 = sizeof(VAR_7->netid);
    if (!FUNC_0(VAR_6, &VAR_9, &VAR_8, VAR_1))
        return VAR_0;

    if (VAR_6->x_op == VAR_4) {
        if (VAR_8 < VAR_1)
            VAR_7->netid[VAR_8] = 0;
        else
            VAR_7->netid[VAR_1] = 0;
    }

    if (VAR_6->x_op == VAR_5)
        VAR_8 = sizeof(VAR_7->uaddr);
    if (!FUNC_0(VAR_6, &VAR_10, &VAR_8, VAR_2))
        return VAR_0;

    if (VAR_6->x_op == VAR_4){
        if (VAR_8 < VAR_2)
            VAR_7->uaddr[VAR_8] = 0;
        else
            VAR_7->uaddr[VAR_2] = 0;
    }

    return VAR_3;
}
