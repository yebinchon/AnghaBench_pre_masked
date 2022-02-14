
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int data; } ;
typedef TYPE_1__* PQExpBuffer ;
typedef int PGresult ;
typedef int PGconn ;
typedef int Oid ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char const*,int ,TYPE_1__*) ;
 TYPE_1__* FUNC_2 () ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int *,int *,TYPE_1__*,char const*,char const*) ;
 int * FUNC_5 (int *,int ) ;

__attribute__((used)) static void
FUNC_6(PGconn *VAR_0, const char *VAR_1, Oid VAR_2,
     const char *VAR_3, const char *VAR_4,
     PQExpBuffer VAR_5)
{
 PQExpBuffer VAR_6 = FUNC_2();
 PGresult *VAR_7;

 FUNC_1(VAR_0, VAR_1, VAR_2, VAR_6);
 VAR_7 = FUNC_5(VAR_0, VAR_6->data);
 FUNC_4(VAR_0, VAR_7, VAR_5, VAR_3, VAR_4);

 FUNC_0(VAR_7);
 FUNC_3(VAR_6);
}
