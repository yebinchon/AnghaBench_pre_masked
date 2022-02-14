
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int buffer ;
struct TYPE_3__ {int sock; } ;
typedef TYPE_1__ Port ;


 scalar_t__ VAR_0 ;
 char* FUNC_0 (char*) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,scalar_t__,int ) ;
 int FUNC_3 (char*,int,char*,char*,int ) ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (char*) ;

__attribute__((used)) static void
FUNC_6(Port *VAR_2, int VAR_3)
{
 char VAR_4[1000];
 int VAR_5;


 FUNC_3(VAR_4, sizeof(VAR_4), "E%s%s\n",
    FUNC_0("could not fork new process for connection: "),
    FUNC_4(VAR_3));


 if (!FUNC_1(VAR_2->sock))
  return;


 do
 {
  VAR_5 = FUNC_2(VAR_2->sock, VAR_4, FUNC_5(VAR_4) + 1, 0);
 } while (VAR_5 < 0 && VAR_1 == VAR_0);
}
