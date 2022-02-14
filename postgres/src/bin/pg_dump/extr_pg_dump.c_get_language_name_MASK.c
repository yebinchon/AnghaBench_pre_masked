
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int data; } ;
typedef TYPE_1__* PQExpBuffer ;
typedef int PGresult ;
typedef int Oid ;
typedef int Archive ;


 int * FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (TYPE_1__*,char*,int ) ;
 TYPE_1__* FUNC_4 () ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int ) ;
 char* FUNC_7 (int ) ;

__attribute__((used)) static char *
FUNC_8(Archive *VAR_0, Oid VAR_1)
{
 PQExpBuffer VAR_2;
 PGresult *VAR_3;
 char *VAR_4;

 VAR_2 = FUNC_4();
 FUNC_3(VAR_2, "SELECT lanname FROM pg_language WHERE oid = %u", VAR_1);
 VAR_3 = FUNC_0(VAR_0, VAR_2->data);
 VAR_4 = FUNC_7(FUNC_6(FUNC_2(VAR_3, 0, 0)));
 FUNC_5(VAR_2);
 FUNC_1(VAR_3);

 return VAR_4;
}
