
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* conn; } ;
typedef TYPE_2__ lwIP_sock ;
typedef size_t err_t ;
struct TYPE_9__ {int mss; } ;
struct TYPE_7__ {TYPE_3__* tcp; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 TYPE_2__* FUNC_0 (int) ;
 int FUNC_1 (void const*) ;
 size_t FUNC_2 (TYPE_3__*) ;
 size_t FUNC_3 (TYPE_3__*) ;
 size_t FUNC_4 (TYPE_3__*,void const*,size_t,int) ;

int FUNC_5(int VAR_2, const void *VAR_3, size_t VAR_4, int VAR_5)
{
    lwIP_sock *VAR_6 = ((void*)0);
    size_t VAR_7 = 0;
    err_t VAR_8 = VAR_1;

 FUNC_1(VAR_3);
    VAR_6 = FUNC_0(VAR_2);
    if (!VAR_6)
    {
        return -1;
    }

    if (FUNC_3(VAR_6->conn->tcp) < VAR_4)
    {
        VAR_7 = FUNC_3(VAR_6->conn->tcp);
    } else{
  VAR_7 = VAR_4;
 }

    if (VAR_7 > 2 * VAR_6->conn->tcp->mss)
    {
        VAR_7 = 2 * VAR_6->conn->tcp->mss;
    }

    do
    {
        VAR_8 = FUNC_4(VAR_6->conn->tcp, VAR_3, VAR_7, 1);
        if (VAR_8 == VAR_0)
            VAR_4 /= 2;
    }
    while (VAR_8 == VAR_0 && VAR_4 > 1);

    if (VAR_8 == VAR_1)
    {
        VAR_8 = FUNC_2(VAR_6->conn->tcp);
    } else{
  VAR_4 = VAR_8;
 }

    return VAR_4;
}
