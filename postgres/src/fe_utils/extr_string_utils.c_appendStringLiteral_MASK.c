
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* data; int len; int maxlen; } ;
typedef TYPE_1__* PQExpBuffer ;


 int FUNC_0 (char) ;
 int FUNC_1 (char const*,int) ;
 scalar_t__ FUNC_2 (char,int) ;
 int FUNC_3 (TYPE_1__*,int) ;
 size_t FUNC_4 (char const*) ;

void
FUNC_5(PQExpBuffer VAR_0, const char *VAR_1,
     int VAR_2, bool VAR_3)
{
 size_t VAR_4 = FUNC_4(VAR_1);
 const char *VAR_5 = VAR_1;
 char *VAR_6;

 if (!FUNC_3(VAR_0, 2 * VAR_4 + 2))
  return;

 VAR_6 = VAR_0->data + VAR_0->len;
 *VAR_6++ = '\'';

 while (*VAR_5 != '\0')
 {
  char VAR_7 = *VAR_5;
  int VAR_8;
  int VAR_9;


  if (!FUNC_0(VAR_7))
  {

   if (FUNC_2(VAR_7, !VAR_3))
    *VAR_6++ = VAR_7;

   *VAR_6++ = VAR_7;
   VAR_5++;
   continue;
  }


  VAR_8 = FUNC_1(VAR_5, VAR_2);


  for (VAR_9 = 0; VAR_9 < VAR_8; VAR_9++)
  {
   if (*VAR_5 == '\0')
    break;
   *VAR_6++ = *VAR_5++;
  }
  if (VAR_9 < VAR_8)
  {
   char *VAR_10 = VAR_0->data + VAR_0->maxlen - 2;

   for (; VAR_9 < VAR_8; VAR_9++)
   {
    if (VAR_6 >= VAR_10)
     break;
    *VAR_6++ = ' ';
   }
   break;
  }
 }


 *VAR_6++ = '\'';
 *VAR_6 = '\0';

 VAR_0->len = VAR_6 - VAR_0->data;
}
