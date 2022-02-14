
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hist_field {int flags; } ;


 int VAR_0 ;
 char* FUNC_0 (struct hist_field*) ;
 char const* FUNC_1 (struct hist_field*,int ) ;
 int FUNC_2 (char*,char const*) ;

__attribute__((used)) static void FUNC_3(struct hist_field *VAR_1, char *VAR_2)
{
 if (VAR_1->flags & VAR_0)
  FUNC_2(VAR_2, "$");

 FUNC_2(VAR_2, FUNC_1(VAR_1, 0));

 if (VAR_1->flags && !(VAR_1->flags & VAR_0)) {
  const char *VAR_3 = FUNC_0(VAR_1);

  if (VAR_3) {
   FUNC_2(VAR_2, ".");
   FUNC_2(VAR_2, VAR_3);
  }
 }
}
