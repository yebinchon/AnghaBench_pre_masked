
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int data; } ;
typedef int PsqlScanState ;
typedef TYPE_1__* PQExpBuffer ;


 int FUNC_0 (int ,char const*,int*) ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_1__* FUNC_2 (int ) ;

__attribute__((used)) static bool
FUNC_3(PsqlScanState VAR_0, const char *VAR_1)
{
 PQExpBuffer VAR_2 = FUNC_2(VAR_0);
 bool VAR_3 = 0;
 bool VAR_4 = FUNC_0(VAR_2->data, VAR_1, &VAR_3);

 FUNC_1(VAR_2);
 return VAR_4 && VAR_3;
}
