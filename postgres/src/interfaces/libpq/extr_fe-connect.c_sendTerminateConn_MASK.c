
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ sock; scalar_t__ status; } ;
typedef TYPE_1__ PGconn ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (char,int,TYPE_1__*) ;

__attribute__((used)) static void
FUNC_3(PGconn *VAR_2)
{




 if (VAR_2->sock != VAR_1 && VAR_2->status == VAR_0)
 {




  FUNC_2('X', 0, VAR_2);
  FUNC_1(VAR_2);
  (void) FUNC_0(VAR_2);
 }
}
