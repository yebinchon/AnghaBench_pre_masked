
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {char const* data; } ;
typedef TYPE_1__* PQExpBuffer ;


 int FUNC_0 (TYPE_1__*,char*,char const*) ;
 int FUNC_1 (TYPE_1__*,char const*) ;
 TYPE_1__* FUNC_2 () ;
 int FUNC_3 (TYPE_1__*) ;
 char const* FUNC_4 (char const*) ;
 TYPE_1__* FUNC_5 () ;

const char *
FUNC_6(const char *VAR_0, const char *VAR_1)
{
 PQExpBuffer VAR_2;
 PQExpBuffer VAR_3 = FUNC_2();


 if (VAR_0 && *VAR_0)
 {
  FUNC_0(VAR_3, "%s.", FUNC_4(VAR_0));
 }
 FUNC_1(VAR_3, FUNC_4(VAR_1));

 VAR_2 = FUNC_5();

 FUNC_1(VAR_2, VAR_3->data);
 FUNC_3(VAR_3);

 return VAR_2->data;
}
