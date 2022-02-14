
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int bgworker_main_type ;
struct TYPE_3__ {char const* fn_name; int fn_addr; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (int ,char*,char const*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (char const*,char const*,int,int *) ;
 scalar_t__ FUNC_3 (char const*,char const*) ;

__attribute__((used)) static bgworker_main_type
FUNC_4(const char *VAR_2, const char *VAR_3)
{




 if (FUNC_3(VAR_2, "postgres") == 0)
 {
  int VAR_4;

  for (VAR_4 = 0; VAR_4 < FUNC_1(VAR_1); VAR_4++)
  {
   if (FUNC_3(VAR_1[VAR_4].fn_name, VAR_3) == 0)
    return VAR_1[VAR_4].fn_addr;
  }


  FUNC_0(VAR_0, "internal function \"%s\" not found", VAR_3);
 }


 return (bgworker_main_type)
  FUNC_2(VAR_2, VAR_3, 1, ((void*)0));
}
