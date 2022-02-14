
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int XLogRecPtr ;
struct TYPE_3__ {int restart_lsn; } ;
struct TYPE_4__ {TYPE_1__ data; } ;


 int FUNC_0 (int) ;
 TYPE_2__* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*,int,int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (int ) ;

__attribute__((used)) static void
FUNC_6(char *VAR_3, bool VAR_4,
         bool VAR_5, XLogRecPtr VAR_6)
{
 FUNC_0(!VAR_0);


 FUNC_1(VAR_3, 0,
        VAR_5 ? VAR_2 : VAR_1);

 if (VAR_4)
 {

  if (FUNC_5(VAR_6))
   FUNC_3();
  else
   VAR_0->data.restart_lsn = VAR_6;


  FUNC_2();
  FUNC_4();
 }
}
