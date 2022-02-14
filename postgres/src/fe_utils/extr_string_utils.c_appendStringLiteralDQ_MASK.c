
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int suffixes ;
struct TYPE_7__ {char const* data; } ;
typedef TYPE_1__* PQExpBuffer ;


 int FUNC_0 (TYPE_1__*,char const) ;
 int FUNC_1 (TYPE_1__*,char const*) ;
 TYPE_1__* FUNC_2 () ;
 int FUNC_3 (TYPE_1__*) ;
 int * FUNC_4 (char const*,char const*) ;

void
FUNC_5(PQExpBuffer VAR_0, const char *VAR_1, const char *VAR_2)
{
 static const char VAR_3[] = "_XXXXXXX";
 int VAR_4 = 0;
 PQExpBuffer VAR_5 = FUNC_2();


 FUNC_0(VAR_5, '$');
 if (VAR_2)
  FUNC_1(VAR_5, VAR_2);






 while (FUNC_4(VAR_1, VAR_5->data) != ((void*)0))
 {
  FUNC_0(VAR_5, VAR_3[VAR_4++]);
  VAR_4 %= sizeof(VAR_3) - 1;
 }


 FUNC_0(VAR_5, '$');


 FUNC_1(VAR_0, VAR_5->data);
 FUNC_1(VAR_0, VAR_1);
 FUNC_1(VAR_0, VAR_5->data);

 FUNC_3(VAR_5);
}
