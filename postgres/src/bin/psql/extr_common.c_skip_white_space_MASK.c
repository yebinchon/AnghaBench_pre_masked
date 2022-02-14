
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int encoding; } ;


 int FUNC_0 (char const*,int ) ;
 scalar_t__ FUNC_1 (unsigned char) ;
 TYPE_1__ VAR_0 ;

__attribute__((used)) static const char *
FUNC_2(const char *VAR_1)
{
 int VAR_2 = 0;

 while (*VAR_1)
 {
  int VAR_3 = FUNC_0(VAR_1, VAR_0.encoding);
  if (FUNC_1((unsigned char) *VAR_1))
   VAR_1 += VAR_3;
  else if (VAR_1[0] == '/' && VAR_1[1] == '*')
  {
   VAR_2++;
   VAR_1 += 2;
  }
  else if (VAR_2 > 0 && VAR_1[0] == '*' && VAR_1[1] == '/')
  {
   VAR_2--;
   VAR_1 += 2;
  }
  else if (VAR_2 == 0 && VAR_1[0] == '-' && VAR_1[1] == '-')
  {
   VAR_1 += 2;





   while (*VAR_1)
   {
    if (*VAR_1 == '\n')
    {
     VAR_1++;
     break;
    }
    VAR_1 += FUNC_0(VAR_1, VAR_0.encoding);
   }
  }
  else if (VAR_2 > 0)
   VAR_1 += VAR_3;
  else
   break;
 }

 return VAR_1;
}
