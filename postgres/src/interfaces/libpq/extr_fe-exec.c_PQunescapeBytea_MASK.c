
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned char const) ;
 int FUNC_1 (unsigned char const) ;
 int FUNC_2 (unsigned char const) ;
 int FUNC_3 (unsigned char*) ;
 char FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (size_t) ;
 unsigned char* FUNC_6 (unsigned char*,size_t) ;
 size_t FUNC_7 (char const*) ;

unsigned char *
FUNC_8(const unsigned char *VAR_0, size_t *VAR_1)
{
 size_t VAR_2,
    VAR_3;
 unsigned char *VAR_4,
      *VAR_5;
 size_t VAR_6,
    VAR_7;

 if (VAR_0 == ((void*)0))
  return ((void*)0);

 VAR_2 = FUNC_7((const char *) VAR_0);

 if (VAR_0[0] == '\\' && VAR_0[1] == 'x')
 {
  const unsigned char *VAR_8;
  unsigned char *VAR_9;

  VAR_3 = (VAR_2 - 2) / 2;

  VAR_4 = (unsigned char *) FUNC_5(VAR_3 > 0 ? VAR_3 : 1);
  if (VAR_4 == ((void*)0))
   return ((void*)0);

  VAR_8 = VAR_0 + 2;
  VAR_9 = VAR_4;
  while (*VAR_8)
  {
   char VAR_10,
      VAR_11;





   VAR_10 = FUNC_4(*VAR_8++);
   if (!*VAR_8 || VAR_10 == (char) -1)
    continue;
   VAR_11 = FUNC_4(*VAR_8++);
   if (VAR_11 != (char) -1)
    *VAR_9++ = (VAR_10 << 4) | VAR_11;
  }

  VAR_3 = VAR_9 - VAR_4;
 }
 else
 {




  VAR_4 = (unsigned char *) FUNC_5(VAR_2 + 1);
  if (VAR_4 == ((void*)0))
   return ((void*)0);

  for (VAR_6 = VAR_7 = 0; VAR_6 < VAR_2;)
  {
   switch (VAR_0[VAR_6])
   {
    case '\\':
     VAR_6++;
     if (VAR_0[VAR_6] == '\\')
      VAR_4[VAR_7++] = VAR_0[VAR_6++];
     else
     {
      if ((FUNC_0(VAR_0[VAR_6])) &&
       (FUNC_1(VAR_0[VAR_6 + 1])) &&
       (FUNC_1(VAR_0[VAR_6 + 2])))
      {
       int VAR_12;

       VAR_12 = FUNC_2(VAR_0[VAR_6++]);
       VAR_12 = (VAR_12 << 3) + FUNC_2(VAR_0[VAR_6++]);
       VAR_12 = (VAR_12 << 3) + FUNC_2(VAR_0[VAR_6++]);
       VAR_4[VAR_7++] = VAR_12;
      }
     }
     break;

    default:
     VAR_4[VAR_7++] = VAR_0[VAR_6++];
     break;
   }
  }
  VAR_3 = VAR_7;
 }



 VAR_5 = FUNC_6(VAR_4, VAR_3 + 1);


 if (!VAR_5)
 {
  FUNC_3(VAR_4);
  return ((void*)0);
 }

 *VAR_1 = VAR_3;
 return VAR_5;
}
