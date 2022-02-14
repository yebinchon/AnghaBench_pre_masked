
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct probe_finder {TYPE_2__* pev; int lcache; int fname; int cu_die; } ;
struct TYPE_3__ {int lazy_line; } ;
struct TYPE_4__ {TYPE_1__ point; } ;
typedef int Dwarf_Die ;


 char* FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,struct probe_finder*) ;
 int FUNC_2 (int ,char*,int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ,char const*,char**) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (char*) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_7(Dwarf_Die *VAR_1, struct probe_finder *VAR_2)
{
 int VAR_3 = 0;
 char *VAR_4;

 if (FUNC_5(VAR_2->lcache)) {
  const char *VAR_5;

  VAR_5 = FUNC_0(&VAR_2->cu_die);
  VAR_3 = FUNC_4(VAR_2->fname, VAR_5, &VAR_4);
  if (VAR_3 < 0) {
   FUNC_6("Failed to find source file path.\n");
   return VAR_3;
  }


  VAR_3 = FUNC_2(VAR_2->lcache, VAR_4,
         VAR_2->pev->point.lazy_line);
  FUNC_3(VAR_4);
  if (VAR_3 <= 0)
   return VAR_3;
 }

 return FUNC_1(VAR_1, VAR_0, VAR_2);
}
