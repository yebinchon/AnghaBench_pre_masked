
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pg_time_t ;
typedef int buf ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (char*,int,char*,int ) ;

__attribute__((used)) static char *
FUNC_2(pg_time_t VAR_1)
{
 static char VAR_2[128];

 FUNC_1(VAR_2, sizeof(VAR_2),
    "%Y-%m-%d %H:%M:%S %Z",
    FUNC_0(&VAR_1, VAR_0));

 return VAR_2;
}
