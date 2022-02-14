
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void* xactStatus; } ;
typedef TYPE_1__ PGconn ;


 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 scalar_t__ FUNC_0 (char const*,char*) ;

__attribute__((used)) static void
FUNC_1(PGconn *VAR_3, const char *VAR_4)
{
 if (FUNC_0(VAR_4, "BEGIN") == 0)
  VAR_3->xactStatus = VAR_2;
 else if (FUNC_0(VAR_4, "COMMIT") == 0)
  VAR_3->xactStatus = VAR_0;
 else if (FUNC_0(VAR_4, "ROLLBACK") == 0)
  VAR_3->xactStatus = VAR_0;
 else if (FUNC_0(VAR_4, "START TRANSACTION") == 0)
  VAR_3->xactStatus = VAR_2;






 else if (FUNC_0(VAR_4, "*ABORT STATE*") == 0)
  VAR_3->xactStatus = VAR_1;
}
