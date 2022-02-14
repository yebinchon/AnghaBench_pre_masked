
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_mixer_interface {int chip; } ;
struct uac3_badd_profile {int c_chmask; int p_chmask; int name; } ;


 int FUNC_0 (int ,char*,int ) ;

__attribute__((used)) static bool FUNC_1(struct usb_mixer_interface *VAR_0,
           struct uac3_badd_profile *VAR_1,
           int VAR_2, int VAR_3)
{




 if (VAR_1->c_chmask < 0 && VAR_1->p_chmask < 0) {
  if (!VAR_2 && !VAR_3) {
   FUNC_0(VAR_0->chip, "BAAD %s: no channels?",
           VAR_1->name);
   return 0;
  }
  return 1;
 }

 if ((VAR_1->c_chmask < 0 && !VAR_2) ||
     (VAR_1->c_chmask >= 0 && VAR_1->c_chmask != VAR_2)) {
  FUNC_0(VAR_0->chip, "BAAD %s c_chmask mismatch",
          VAR_1->name);
  return 0;
 }
 if ((VAR_1->p_chmask < 0 && !VAR_3) ||
     (VAR_1->p_chmask >= 0 && VAR_1->p_chmask != VAR_3)) {
  FUNC_0(VAR_0->chip, "BAAD %s p_chmask mismatch",
          VAR_1->name);
  return 0;
 }
 return 1;
}
