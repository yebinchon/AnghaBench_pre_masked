
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,char*) ;

__attribute__((used)) static unsigned
FUNC_3(const char *VAR_2, unsigned VAR_3)
{
 const char *VAR_4 = VAR_2 + VAR_3;
 int VAR_5 = 0;

 while (VAR_2 < VAR_4)
 {
  if (VAR_2[0] != '\\')
   VAR_2++;
  else if (VAR_2 + 3 < VAR_4 &&
     (VAR_2[1] >= '0' && VAR_2[1] <= '3') &&
     (VAR_2[2] >= '0' && VAR_2[2] <= '7') &&
     (VAR_2[3] >= '0' && VAR_2[3] <= '7'))
  {



   VAR_2 += 4;
  }
  else if (VAR_2 + 1 < VAR_4 &&
     (VAR_2[1] == '\\'))
  {



   VAR_2 += 2;
  }
  else
  {



   FUNC_0(VAR_1,
     (FUNC_1(VAR_0),
      FUNC_2("invalid input syntax for type %s", "bytea")));
  }

  VAR_5++;
 }
 return VAR_5;
}
