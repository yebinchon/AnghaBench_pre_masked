
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct timezone {int dummy; } ;
struct timeval {long tv_sec; long tv_usec; } ;
typedef int __int64 ;
struct TYPE_3__ {int member_0; int member_1; int member_3; int member_6; int member_5; int member_4; int member_2; } ;
typedef TYPE_1__ SYSTEMTIME ;
typedef int LPFILETIME ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int VAR_1 ;

int FUNC_2(struct timeval *VAR_2, struct timezone *VAR_3)
{
    static __int64 VAR_4;
 __int64 VAR_5 = 0;

    if (!VAR_4)
    {
  SYSTEMTIME VAR_6 = {1970,1,0,1,0,0,0};
  FUNC_1(&VAR_6, (LPFILETIME)&VAR_4);
    }

    if (VAR_3)
    {
  VAR_1 = VAR_0;
 return -1;
    }

 FUNC_0((LPFILETIME)&VAR_5);
 VAR_5 -= VAR_4;

 VAR_2->tv_sec = (long)(VAR_5 / 10000000);
 VAR_2->tv_usec = (long)((VAR_5 % 10000000) / 10);

    return 0;
}
