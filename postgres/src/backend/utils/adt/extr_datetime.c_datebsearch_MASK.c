
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__* token; } ;
typedef TYPE_1__ datetkn ;


 int VAR_0 ;
 int FUNC_0 (char const*,scalar_t__*,int ) ;

__attribute__((used)) static const datetkn *
FUNC_1(const char *VAR_1, const datetkn *VAR_2, int VAR_3)
{
 if (VAR_3 > 0)
 {
  const datetkn *VAR_4 = VAR_2 + VAR_3 - 1,
       *VAR_5;
  int VAR_6;

  while (VAR_4 >= VAR_2)
  {
   VAR_5 = VAR_2 + ((VAR_4 - VAR_2) >> 1);

   VAR_6 = (int) VAR_1[0] - (int) VAR_5->token[0];
   if (VAR_6 == 0)
   {

    VAR_6 = FUNC_0(VAR_1, VAR_5->token, VAR_0);
    if (VAR_6 == 0)
     return VAR_5;
   }
   if (VAR_6 < 0)
    VAR_4 = VAR_5 - 1;
   else
    VAR_2 = VAR_5 + 1;
  }
 }
 return ((void*)0);
}
