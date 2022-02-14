
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dt_info {int dummy; } ;
struct check {scalar_t__ error; scalar_t__ warn; } ;


 int FUNC_0 (struct check**) ;
 struct check** VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*) ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (struct check*,struct dt_info*) ;
 int VAR_2 ;

void FUNC_4(bool VAR_3, struct dt_info *VAR_4)
{
 int VAR_5;
 int VAR_6 = 0;

 for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_0); VAR_5++) {
  struct check *VAR_7 = VAR_0[VAR_5];

  if (VAR_7->warn || VAR_7->error)
   VAR_6 = VAR_6 || FUNC_3(VAR_7, VAR_4);
 }

 if (VAR_6) {
  if (!VAR_3) {
   FUNC_2(VAR_2, "ERROR: Input tree has errors, aborting "
    "(use -f to force output)\n");
   FUNC_1(2);
  } else if (VAR_1 < 3) {
   FUNC_2(VAR_2, "Warning: Input tree has errors, "
    "output forced\n");
  }
 }
}
