
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {char* data; } ;
typedef TYPE_1__ StringInfoData ;


 int FUNC_0 (TYPE_1__*,char const*,int ) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (unsigned char) ;
 int FUNC_4 (char const*) ;
 int FUNC_5 (char const*,char*,unsigned int*) ;
 int FUNC_6 (unsigned int) ;

char *
FUNC_7(const char *VAR_0)
{
 StringInfoData VAR_1;
 const char *VAR_2;

 FUNC_2(&VAR_1);

 for (VAR_2 = VAR_0; *VAR_2; VAR_2 += FUNC_4(VAR_2))
 {
  if (*VAR_2 == '_' && *(VAR_2 + 1) == 'x'
   && FUNC_3((unsigned char) *(VAR_2 + 2))
   && FUNC_3((unsigned char) *(VAR_2 + 3))
   && FUNC_3((unsigned char) *(VAR_2 + 4))
   && FUNC_3((unsigned char) *(VAR_2 + 5))
   && *(VAR_2 + 6) == '_')
  {
   unsigned int VAR_3;

   FUNC_5(VAR_2 + 2, "%X", &VAR_3);
   FUNC_1(&VAR_1, FUNC_6(VAR_3));
   VAR_2 += 6;
  }
  else
   FUNC_0(&VAR_1, VAR_2, FUNC_4(VAR_2));
 }

 return VAR_1.data;
}
