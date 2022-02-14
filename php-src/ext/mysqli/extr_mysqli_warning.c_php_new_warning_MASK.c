
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int errorno; int sqlstate; int reason; } ;
typedef TYPE_1__ MYSQLI_WARNING ;


 int VAR_0 ;
 int FUNC_0 (int *,char const*,int ) ;
 int FUNC_1 (int *,char*,int,int ) ;
 scalar_t__ FUNC_2 (int,int) ;

__attribute__((used)) static
MYSQLI_WARNING *FUNC_3(const char *VAR_1, int VAR_2)
{
 MYSQLI_WARNING *VAR_3;

 VAR_3 = (MYSQLI_WARNING *)FUNC_2(1, sizeof(MYSQLI_WARNING));

 FUNC_0(&(VAR_3->reason), VAR_1, VAR_0);

 FUNC_1(&(VAR_3->sqlstate), "HY000", sizeof("HY000") - 1, VAR_0);

 VAR_3->errorno = VAR_2;

 return VAR_3;
}
