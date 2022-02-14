
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ,char const*,int) ;
 int FUNC_2 (int ,char const*,int) ;
 int FUNC_3 (int ,int ,char const*,int) ;

__attribute__((used)) static void
FUNC_4(const unsigned char *VAR_7, unsigned char *VAR_8, int VAR_9)
{
 int VAR_10;
 int VAR_11;

 while (VAR_9 > 0)
 {
  VAR_10 = *VAR_7;
  if (!FUNC_0(VAR_10))
  {

   if (VAR_10 == 0)
    FUNC_2(VAR_4,
          (const char *) VAR_7, VAR_9);
   *VAR_8++ = VAR_10;
   VAR_7++;
   VAR_9--;
   continue;
  }
  VAR_11 = FUNC_1(VAR_4, (const char *) VAR_7, VAR_9);
  if (VAR_11 < 0)
   FUNC_2(VAR_4,
         (const char *) VAR_7, VAR_9);
  if (VAR_10 == VAR_0)
  {
   *VAR_8++ = VAR_5;
   *VAR_8++ = VAR_7[1];
  }
  else if (VAR_10 == VAR_2)
  {
   *VAR_8++ = VAR_6;
   *VAR_8++ = VAR_7[1];
   *VAR_8++ = VAR_7[2];
  }
  else if (VAR_10 == VAR_1)
  {
   *VAR_8++ = VAR_7[1];
   *VAR_8++ = VAR_7[2];
  }
  else
   FUNC_3(VAR_4, VAR_3,
            (const char *) VAR_7, VAR_9);
  VAR_7 += VAR_11;
  VAR_9 -= VAR_11;
 }
 *VAR_8 = '\0';
}
