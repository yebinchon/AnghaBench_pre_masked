
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ pg_time_t ;
struct TYPE_3__ {int tv_usec; scalar_t__ tv_sec; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_1__*,int *) ;
 int VAR_2 ;
 int FUNC_1 (scalar_t__,char*,int) ;
 int FUNC_2 (scalar_t__*,int ) ;
 int FUNC_3 (scalar_t__,int ,char*,int ) ;
 TYPE_1__ VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (char*,char*,int) ;

__attribute__((used)) static void
FUNC_5(void)
{
 pg_time_t VAR_5;
 char VAR_6[13];

 if (!VAR_4)
 {
  FUNC_0(&VAR_3, ((void*)0));
  VAR_4 = 1;
 }

 VAR_5 = (pg_time_t) VAR_3.tv_sec;






 FUNC_3(VAR_1, VAR_0,

    "%Y-%m-%d %H:%M:%S     %Z",
    FUNC_2(&VAR_5, VAR_2));


 FUNC_4(VAR_6, ".%03d", (int) (VAR_3.tv_usec / 1000));
 FUNC_1(VAR_1 + 19, VAR_6, 4);
}
