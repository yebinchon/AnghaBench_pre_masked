
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


typedef int time_t ;
struct TYPE_10__ {int flags; scalar_t__ type; } ;
typedef TYPE_1__ ASN1_TIME ;


 TYPE_1__* FUNC_0 (TYPE_1__*,int ,int,long) ;
 int VAR_0 ;
 TYPE_1__* FUNC_1 (TYPE_1__*,int ,int,long) ;
 TYPE_1__* FUNC_2 (TYPE_1__*,int ,int,long) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (int *) ;

ASN1_TIME *FUNC_4(ASN1_TIME *VAR_3,
                            int VAR_4, long VAR_5, time_t *VAR_6)
{
    time_t VAR_7;

    if (VAR_6)
        VAR_7 = *VAR_6;
    else
        FUNC_3(&VAR_7);

    if (VAR_3 && !(VAR_3->flags & VAR_0)) {
        if (VAR_3->type == VAR_2)
            return FUNC_2(VAR_3, VAR_7, VAR_4, VAR_5);
        if (VAR_3->type == VAR_1)
            return FUNC_0(VAR_3, VAR_7, VAR_4, VAR_5);
    }
    return FUNC_1(VAR_3, VAR_7, VAR_4, VAR_5);
}
