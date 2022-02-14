
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct seq_file {int dummy; } ;
struct TYPE_2__ {char const* name; } ;
struct hist_field {int flags; TYPE_1__ var; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 char* FUNC_0 (struct hist_field*) ;
 char* FUNC_1 (struct hist_field*,int ) ;
 int FUNC_2 (struct seq_file*,char*,char const*) ;
 int FUNC_3 (struct seq_file*,char) ;
 int FUNC_4 (struct seq_file*,char*) ;

__attribute__((used)) static void FUNC_5(struct seq_file *VAR_5, struct hist_field *VAR_6)
{
 const char *VAR_7 = FUNC_1(VAR_6, 0);

 if (VAR_6->var.name)
  FUNC_2(VAR_5, "%s=", VAR_6->var.name);

 if (VAR_6->flags & VAR_1)
  FUNC_4(VAR_5, "cpu");
 else if (VAR_7) {
  if (VAR_6->flags & VAR_4 ||
      VAR_6->flags & VAR_0)
   FUNC_3(VAR_5, '$');
  FUNC_2(VAR_5, "%s", VAR_7);
 } else if (VAR_6->flags & VAR_3)
  FUNC_4(VAR_5, "common_timestamp");

 if (VAR_6->flags) {
  if (!(VAR_6->flags & VAR_4) &&
      !(VAR_6->flags & VAR_2)) {
   const char *VAR_8 = FUNC_0(VAR_6);

   if (VAR_8)
    FUNC_2(VAR_5, ".%s", VAR_8);
  }
 }
}
