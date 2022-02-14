
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int proto; } ;
struct TYPE_6__ {char* data; int len; } ;
typedef TYPE_1__ StringInfoData ;
typedef TYPE_2__ Port ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 () ;
 scalar_t__ FUNC_8 (TYPE_1__*,int) ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 (char*) ;

__attribute__((used)) static char *
FUNC_12(Port *VAR_5)
{
 StringInfoData VAR_6;

 FUNC_10();
 if (FUNC_0(VAR_5->proto) >= 3)
 {

  int VAR_7;

  VAR_7 = FUNC_7();
  if (VAR_7 != 'p')
  {






   if (VAR_7 != VAR_1)
    FUNC_2(VAR_4,
      (FUNC_3(VAR_3),
       FUNC_4("expected password response, got message type %d",
        VAR_7)));
   return ((void*)0);
  }
 }
 else
 {

  if (FUNC_9() == VAR_1)
   return ((void*)0);
 }

 FUNC_5(&VAR_6);
 if (FUNC_8(&VAR_6, 1000))
 {

  FUNC_6(VAR_6.data);
  return ((void*)0);
 }






 if (FUNC_11(VAR_6.data) + 1 != VAR_6.len)
  FUNC_2(VAR_4,
    (FUNC_3(VAR_3),
     FUNC_4("invalid password packet size")));
 if (VAR_6.len == 1)
  FUNC_2(VAR_4,
    (FUNC_3(VAR_2),
     FUNC_4("empty password returned by client")));


 FUNC_1(VAR_0, "received password packet");






 return VAR_6.data;
}
