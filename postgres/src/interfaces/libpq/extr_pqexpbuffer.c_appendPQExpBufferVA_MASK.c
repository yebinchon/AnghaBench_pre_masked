
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int va_list ;
struct TYPE_5__ {scalar_t__ maxlen; scalar_t__ len; size_t data; } ;
typedef TYPE_1__* PQExpBuffer ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,size_t) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (size_t,size_t,char const*,int ) ;

__attribute__((used)) static bool
FUNC_4(PQExpBuffer VAR_1, const char *VAR_2, va_list VAR_3)
{
 size_t VAR_4;
 size_t VAR_5;
 int VAR_6;





 if (VAR_1->maxlen > VAR_1->len + 16)
 {
  VAR_4 = VAR_1->maxlen - VAR_1->len;

  VAR_6 = FUNC_3(VAR_1->data + VAR_1->len, VAR_4, VAR_2, VAR_3);





  if (FUNC_2(VAR_6 < 0))
  {
   FUNC_1(VAR_1);
   return 1;
  }

  if ((size_t) VAR_6 < VAR_4)
  {

   VAR_1->len += VAR_6;
   return 1;
  }
  if (FUNC_2(VAR_6 > VAR_0 - 1))
  {
   FUNC_1(VAR_1);
   return 1;
  }
  VAR_5 = VAR_6 + 1;
 }
 else
 {







  VAR_5 = 32;
 }


 if (!FUNC_0(VAR_1, VAR_5))
  return 1;

 return 0;
}
