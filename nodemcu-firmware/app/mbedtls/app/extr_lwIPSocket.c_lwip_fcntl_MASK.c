
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int conn; } ;
typedef TYPE_1__ lwIP_sock ;




 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;

int FUNC_4(int VAR_2, int VAR_3, int VAR_4)
{
    lwIP_sock *VAR_5 = FUNC_1(VAR_2);
    int VAR_6 = -1;

    if (!VAR_5 || !VAR_5->conn)
    {
        return -1;
    }

    switch (VAR_3)
    {
        case 129:
            VAR_6 = FUNC_2(VAR_5->conn) ? VAR_0 : 0;
            break;
        case 128:
            if ((VAR_4 & ~VAR_0) == 0)
            {

                FUNC_3(VAR_5->conn, VAR_4 & VAR_0);
                VAR_6 = 0;
            }
            break;
        default:
            FUNC_0(VAR_1, ("lwip_fcntl(%d, UNIMPL: %d, %d)\n", VAR_2, VAR_3, VAR_4));
            break;
    }
    return VAR_6;
}
