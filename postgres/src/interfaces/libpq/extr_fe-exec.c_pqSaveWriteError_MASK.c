
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* write_err_msg; int result; } ;
typedef TYPE_1__ PGconn ;


 char* FUNC_0 (char*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_3(PGconn *VAR_0)
{




 FUNC_2(VAR_0);






 if (VAR_0->write_err_msg && VAR_0->write_err_msg[0] != '\0')
  FUNC_1(VAR_0->result, VAR_0->write_err_msg);
 else
  FUNC_1(VAR_0->result,
         FUNC_0("write to server failed\n"));
}
