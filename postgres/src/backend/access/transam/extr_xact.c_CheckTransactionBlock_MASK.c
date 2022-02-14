
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 () ;
 scalar_t__ FUNC_1 () ;
 int VAR_2 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,char const*) ;

__attribute__((used)) static void
FUNC_5(bool VAR_3, bool VAR_4, const char *VAR_5)
{



 if (FUNC_1())
  return;




 if (FUNC_0())
  return;




 if (!VAR_3)
  return;

 FUNC_2(VAR_4 ? VAR_1 : VAR_2,
   (FUNC_3(VAR_0),

    FUNC_4("%s can only be used in transaction blocks",
     VAR_5)));
 return;
}
