
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ token; } ;
typedef TYPE_1__ datetkn ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,char*,char const*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;

__attribute__((used)) static bool
FUNC_3(const char *VAR_2, const datetkn *VAR_3, int VAR_4)
{
 bool VAR_5 = 1;
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++)
 {

  if (FUNC_2(VAR_3[VAR_6].token) > VAR_1)
  {

   FUNC_0(VAR_0, "token too long in %s table: \"%.*s\"",
     VAR_2,
     VAR_1 + 1, VAR_3[VAR_6].token);
   VAR_5 = 0;
   break;
  }

  if (VAR_6 > 0 &&
   FUNC_1(VAR_3[VAR_6 - 1].token, VAR_3[VAR_6].token) >= 0)
  {
   FUNC_0(VAR_0, "ordering error in %s table: \"%s\" >= \"%s\"",
     VAR_2,
     VAR_3[VAR_6 - 1].token,
     VAR_3[VAR_6].token);
   VAR_5 = 0;
  }
 }
 return VAR_5;
}
