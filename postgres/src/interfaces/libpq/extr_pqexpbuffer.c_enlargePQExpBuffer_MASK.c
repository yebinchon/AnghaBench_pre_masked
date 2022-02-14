
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {size_t len; size_t maxlen; char* data; } ;
typedef TYPE_1__* PQExpBuffer ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (char*,size_t) ;

int
FUNC_3(PQExpBuffer VAR_1, size_t VAR_2)
{
 size_t VAR_3;
 char *VAR_4;

 if (FUNC_0(VAR_1))
  return 0;






 if (VAR_2 >= ((size_t) VAR_0 - VAR_1->len))
 {
  FUNC_1(VAR_1);
  return 0;
 }

 VAR_2 += VAR_1->len + 1;



 if (VAR_2 <= VAR_1->maxlen)
  return 1;






 VAR_3 = (VAR_1->maxlen > 0) ? (2 * VAR_1->maxlen) : 64;
 while (VAR_2 > VAR_3)
  VAR_3 = 2 * VAR_3;






 if (VAR_3 > (size_t) VAR_0)
  VAR_3 = (size_t) VAR_0;

 VAR_4 = (char *) FUNC_2(VAR_1->data, VAR_3);
 if (VAR_4 != ((void*)0))
 {
  VAR_1->data = VAR_4;
  VAR_1->maxlen = VAR_3;
  return 1;
 }

 FUNC_1(VAR_1);
 return 0;
}
