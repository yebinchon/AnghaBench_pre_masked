
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clocksource {int flags; scalar_t__ rating; int name; scalar_t__ resume; scalar_t__ suspend; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 struct clocksource* VAR_1 ;

__attribute__((used)) static void FUNC_1(struct clocksource *VAR_2)
{



 if (!(VAR_2->flags & VAR_0))
  return;






 if (VAR_2->suspend || VAR_2->resume) {
  FUNC_0("Nonstop clocksource %s should not supply suspend/resume interfaces\n",
   VAR_2->name);
 }


 if (!VAR_1 || VAR_2->rating > VAR_1->rating)
  VAR_1 = VAR_2;
}
