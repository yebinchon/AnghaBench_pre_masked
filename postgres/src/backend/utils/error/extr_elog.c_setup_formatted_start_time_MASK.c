
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pg_time_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int ,int ,char*,int ) ;

__attribute__((used)) static void
FUNC_2(void)
{
 pg_time_t VAR_4 = (pg_time_t) VAR_1;






 FUNC_1(VAR_2, VAR_0,
    "%Y-%m-%d %H:%M:%S %Z",
    FUNC_0(&VAR_4, VAR_3));
}
