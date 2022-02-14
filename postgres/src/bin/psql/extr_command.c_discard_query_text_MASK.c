
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int len; char* data; } ;
typedef int PsqlScanState ;
typedef TYPE_1__* PQExpBuffer ;
typedef int ConditionalStack ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static void
FUNC_4(PsqlScanState VAR_0, ConditionalStack VAR_1,
       PQExpBuffer VAR_2)
{
 if (VAR_2)
 {
  int VAR_3 = FUNC_2(VAR_1);

  FUNC_0(VAR_3 >= 0 && VAR_3 <= VAR_2->len);
  VAR_2->len = VAR_3;
  VAR_2->data[VAR_3] = '\0';
 }
 FUNC_3(VAR_0,
         FUNC_1(VAR_1));
}
