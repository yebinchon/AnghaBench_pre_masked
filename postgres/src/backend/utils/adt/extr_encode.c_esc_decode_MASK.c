
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,char*) ;

__attribute__((used)) static unsigned
FUNC_4(const char *VAR_2, unsigned VAR_3, char *VAR_4)
{
 const char *VAR_5 = VAR_2 + VAR_3;
 char *VAR_6 = VAR_4;
 int VAR_7 = 0;

 while (VAR_2 < VAR_5)
 {
  if (VAR_2[0] != '\\')
   *VAR_6++ = *VAR_2++;
  else if (VAR_2 + 3 < VAR_5 &&
     (VAR_2[1] >= '0' && VAR_2[1] <= '3') &&
     (VAR_2[2] >= '0' && VAR_2[2] <= '7') &&
     (VAR_2[3] >= '0' && VAR_2[3] <= '7'))
  {
   int VAR_8;

   VAR_8 = FUNC_0(VAR_2[1]);
   VAR_8 <<= 3;
   VAR_8 += FUNC_0(VAR_2[2]);
   VAR_8 <<= 3;
   *VAR_6++ = VAR_8 + FUNC_0(VAR_2[3]);
   VAR_2 += 4;
  }
  else if (VAR_2 + 1 < VAR_5 &&
     (VAR_2[1] == '\\'))
  {
   *VAR_6++ = '\\';
   VAR_2 += 2;
  }
  else
  {




   FUNC_1(VAR_1,
     (FUNC_2(VAR_0),
      FUNC_3("invalid input syntax for type %s", "bytea")));
  }

  VAR_7++;
 }

 return VAR_7;
}
