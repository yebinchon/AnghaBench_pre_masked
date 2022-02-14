
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int conn; } ;
typedef TYPE_1__ lwIP_sock ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static lwIP_sock *FUNC_0(int VAR_2)
{
    lwIP_sock *VAR_3 = ((void*)0);

    if ((VAR_2 < 0) || (VAR_2 >= VAR_0))
    {
        return ((void*)0);
    }

    VAR_3 = &VAR_1[VAR_2];

    if (!VAR_3->conn)
    {
        return ((void*)0);
    }

    return VAR_3;
}
