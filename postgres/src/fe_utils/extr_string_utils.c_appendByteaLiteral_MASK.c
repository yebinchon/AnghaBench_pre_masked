
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* data; int len; } ;
typedef TYPE_1__* PQExpBuffer ;


 int FUNC_0 (TYPE_1__*,int) ;

void
FUNC_1(PQExpBuffer VAR_0, const unsigned char *VAR_1, size_t VAR_2,
       bool VAR_3)
{
 const unsigned char *VAR_4 = VAR_1;
 char *VAR_5;

 static const char VAR_6[] = "0123456789abcdef";







 if (!FUNC_0(VAR_0, 2 * VAR_2 + 5))
  return;

 VAR_5 = VAR_0->data + VAR_0->len;
 *VAR_5++ = '\'';
 if (!VAR_3)
  *VAR_5++ = '\\';
 *VAR_5++ = '\\';
 *VAR_5++ = 'x';

 while (VAR_2-- > 0)
 {
  unsigned char VAR_7 = *VAR_4++;

  *VAR_5++ = VAR_6[(VAR_7 >> 4) & 0xF];
  *VAR_5++ = VAR_6[VAR_7 & 0xF];
 }


 *VAR_5++ = '\'';
 *VAR_5 = '\0';

 VAR_0->len = VAR_5 - VAR_0->data;
}
