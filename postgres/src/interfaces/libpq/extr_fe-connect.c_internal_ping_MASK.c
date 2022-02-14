
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ status; int last_sqlstate; scalar_t__ auth_req_received; int options_valid; } ;
typedef TYPE_1__ PGconn ;
typedef int PGPing ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static PGPing
FUNC_3(PGconn *VAR_6)
{

 if (!VAR_6 || !VAR_6->options_valid)
  return VAR_2;


 if (VAR_6->status != VAR_0)
  (void) FUNC_0(VAR_6);


 if (VAR_6->status != VAR_0)
  return VAR_4;
 if (VAR_6->auth_req_received)
  return VAR_4;
 if (FUNC_2(VAR_6->last_sqlstate) != 5)
  return VAR_3;





 if (FUNC_1(VAR_6->last_sqlstate, VAR_1) == 0)
  return VAR_5;







 return VAR_4;
}
