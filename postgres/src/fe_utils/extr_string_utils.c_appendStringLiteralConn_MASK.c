
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int len; char* data; } ;
typedef TYPE_1__* PQExpBuffer ;
typedef int PGconn ;


 char VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,char*,char const*,size_t,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*,char) ;
 int FUNC_4 (TYPE_1__*,char const*,int ,int) ;
 int FUNC_5 (TYPE_1__*,int) ;
 int * FUNC_6 (char const*,char) ;
 size_t FUNC_7 (char const*) ;

void
FUNC_8(PQExpBuffer VAR_1, const char *VAR_2, PGconn *VAR_3)
{
 size_t VAR_4 = FUNC_7(VAR_2);





 if (FUNC_6(VAR_2, '\\') != ((void*)0) && FUNC_2(VAR_3) >= 80100)
 {

  if (VAR_1->len > 0 && VAR_1->data[VAR_1->len - 1] != ' ')
   FUNC_3(VAR_1, ' ');
  FUNC_3(VAR_1, VAR_0);
  FUNC_4(VAR_1, VAR_2, FUNC_0(VAR_3), 0);
  return;
 }


 if (!FUNC_5(VAR_1, 2 * VAR_4 + 2))
  return;
 FUNC_3(VAR_1, '\'');
 VAR_1->len += FUNC_1(VAR_3, VAR_1->data + VAR_1->len,
           VAR_2, VAR_4, ((void*)0));
 FUNC_3(VAR_1, '\'');
}
