
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {char const* data; } ;
typedef TYPE_1__* PQExpBuffer ;


 scalar_t__* VAR_0 ;
 int FUNC_0 (char const*,int *) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (TYPE_1__*,char const) ;
 int FUNC_2 (TYPE_1__*,char const*) ;
 TYPE_1__* FUNC_3 () ;
 scalar_t__ VAR_3 ;

const char *
FUNC_4(const char *VAR_4)
{
 PQExpBuffer VAR_5 = FUNC_3();

 const char *VAR_6;
 bool VAR_7 = 0;





 if (VAR_3)
  VAR_7 = 1;

 else if (!((VAR_4[0] >= 'a' && VAR_4[0] <= 'z') || VAR_4[0] == '_'))
  VAR_7 = 1;
 else
 {

  for (VAR_6 = VAR_4; *VAR_6; VAR_6++)
  {
   if (!((*VAR_6 >= 'a' && *VAR_6 <= 'z')
      || (*VAR_6 >= '0' && *VAR_6 <= '9')
      || (*VAR_6 == '_')))
   {
    VAR_7 = 1;
    break;
   }
  }
 }

 if (!VAR_7)
 {
  int VAR_8 = FUNC_0(VAR_4, &VAR_1);

  if (VAR_8 >= 0 && VAR_0[VAR_8] != VAR_2)
   VAR_7 = 1;
 }

 if (!VAR_7)
 {

  FUNC_2(VAR_5, VAR_4);
 }
 else
 {
  FUNC_1(VAR_5, '"');
  for (VAR_6 = VAR_4; *VAR_6; VAR_6++)
  {





   if (*VAR_6 == '"')
    FUNC_1(VAR_5, '"');
   FUNC_1(VAR_5, *VAR_6);
  }
  FUNC_1(VAR_5, '"');
 }

 return VAR_5->data;
}
