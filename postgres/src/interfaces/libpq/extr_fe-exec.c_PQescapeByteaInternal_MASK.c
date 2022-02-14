
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int errorMessage; } ;
typedef TYPE_1__ PGconn ;


 void** VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (size_t) ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static unsigned char *
FUNC_3(PGconn *VAR_1,
       const unsigned char *VAR_2, size_t VAR_3,
       size_t *VAR_4, bool VAR_5, bool VAR_6)
{
 const unsigned char *VAR_7;
 unsigned char *VAR_8;
 unsigned char *VAR_9;
 size_t VAR_10;
 size_t VAR_11;
 size_t VAR_12 = (VAR_5 ? 1 : 2);




 VAR_11 = 1;

 if (VAR_6)
 {
  VAR_11 += VAR_12 + 1 + 2 * VAR_3;
 }
 else
 {
  VAR_7 = VAR_2;
  for (VAR_10 = VAR_3; VAR_10 > 0; VAR_10--, VAR_7++)
  {
   if (*VAR_7 < 0x20 || *VAR_7 > 0x7e)
    VAR_11 += VAR_12 + 3;
   else if (*VAR_7 == '\'')
    VAR_11 += 2;
   else if (*VAR_7 == '\\')
    VAR_11 += VAR_12 + VAR_12;
   else
    VAR_11++;
  }
 }

 *VAR_4 = VAR_11;
 VAR_8 = VAR_9 = (unsigned char *) FUNC_1(VAR_11);
 if (VAR_8 == ((void*)0))
 {
  if (VAR_1)
   FUNC_2(&VAR_1->errorMessage,
         FUNC_0("out of memory\n"));
  return ((void*)0);
 }

 if (VAR_6)
 {
  if (!VAR_5)
   *VAR_8++ = '\\';
  *VAR_8++ = '\\';
  *VAR_8++ = 'x';
 }

 VAR_7 = VAR_2;
 for (VAR_10 = VAR_3; VAR_10 > 0; VAR_10--, VAR_7++)
 {
  unsigned char VAR_13 = *VAR_7;

  if (VAR_6)
  {
   *VAR_8++ = VAR_0[(VAR_13 >> 4) & 0xF];
   *VAR_8++ = VAR_0[VAR_13 & 0xF];
  }
  else if (VAR_13 < 0x20 || VAR_13 > 0x7e)
  {
   if (!VAR_5)
    *VAR_8++ = '\\';
   *VAR_8++ = '\\';
   *VAR_8++ = (VAR_13 >> 6) + '0';
   *VAR_8++ = ((VAR_13 >> 3) & 07) + '0';
   *VAR_8++ = (VAR_13 & 07) + '0';
  }
  else if (VAR_13 == '\'')
  {
   *VAR_8++ = '\'';
   *VAR_8++ = '\'';
  }
  else if (VAR_13 == '\\')
  {
   if (!VAR_5)
   {
    *VAR_8++ = '\\';
    *VAR_8++ = '\\';
   }
   *VAR_8++ = '\\';
   *VAR_8++ = '\\';
  }
  else
   *VAR_8++ = VAR_13;
 }
 *VAR_8 = '\0';

 return VAR_9;
}
