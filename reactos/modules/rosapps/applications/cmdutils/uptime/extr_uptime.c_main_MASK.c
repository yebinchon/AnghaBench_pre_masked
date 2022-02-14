
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int QuadPart; } ;
struct TYPE_6__ {int wMinute; int wHour; } ;
typedef TYPE_1__ SYSTEMTIME ;
typedef int LONGLONG ;
typedef TYPE_2__ LARGE_INTEGER ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int ,int,int,...) ;

int FUNC_6(int VAR_0, char* VAR_1[])
{
    SYSTEMTIME VAR_2;
    LARGE_INTEGER VAR_3, VAR_4;

    FUNC_0(&VAR_2);

    if (FUNC_1(&VAR_3) &&
        FUNC_2(&VAR_4))
    {
        LONGLONG VAR_5 = VAR_3.QuadPart / VAR_4.QuadPart;
        LONGLONG VAR_6 = (VAR_5 / 86400);
        LONGLONG VAR_7 = ((VAR_5 % 86400) / 3600);
        LONGLONG VAR_8 = ((VAR_5 % 86400) % 3600) / 60;
        LONGLONG VAR_9 = ((VAR_5 % 86400) % 3600) % 60;






        FUNC_5(FUNC_4("System Up Time:\t\t%I64u days, %I64u Hours, %I64u Minutes, %.2I64u Seconds\n"),
                 VAR_6, VAR_7, VAR_8, VAR_9);

        return 0;
    }

    return -1;
}
