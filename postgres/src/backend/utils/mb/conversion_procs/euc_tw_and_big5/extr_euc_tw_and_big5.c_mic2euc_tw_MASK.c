
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned char const VAR_3 ;
 unsigned char const VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* VAR_7 ;
 int FUNC_1 (int ,char const*,int) ;
 int FUNC_2 (int ,char const*,int) ;
 int FUNC_3 (int ,int ,char const*,int) ;

__attribute__((used)) static void
FUNC_4(const unsigned char *VAR_8, unsigned char *VAR_9, int VAR_10)
{
 int VAR_11;
 int VAR_12;

 while (VAR_10 > 0)
 {
  VAR_11 = *VAR_8;
  if (!FUNC_0(VAR_11))
  {

   if (VAR_11 == 0)
    FUNC_2(VAR_6,
          (const char *) VAR_8, VAR_10);
   *VAR_9++ = VAR_11;
   VAR_8++;
   VAR_10--;
   continue;
  }
  VAR_12 = FUNC_1(VAR_6, (const char *) VAR_8, VAR_10);
  if (VAR_12 < 0)
   FUNC_2(VAR_6,
         (const char *) VAR_8, VAR_10);
  if (VAR_11 == VAR_1)
  {
   *VAR_9++ = VAR_8[1];
   *VAR_9++ = VAR_8[2];
  }
  else if (VAR_11 == VAR_2)
  {
   *VAR_9++ = VAR_7;
   *VAR_9++ = 0xa2;
   *VAR_9++ = VAR_8[1];
   *VAR_9++ = VAR_8[2];
  }
  else if (VAR_11 == VAR_0 &&
     VAR_8[1] >= VAR_3 && VAR_8[1] <= VAR_4)
  {
   *VAR_9++ = VAR_7;
   *VAR_9++ = VAR_8[1] - VAR_3 + 0xa3;
   *VAR_9++ = VAR_8[2];
   *VAR_9++ = VAR_8[3];
  }
  else
   FUNC_3(VAR_6, VAR_5,
            (const char *) VAR_8, VAR_10);
  VAR_8 += VAR_12;
  VAR_10 -= VAR_12;
 }
 *VAR_9 = '\0';
}
