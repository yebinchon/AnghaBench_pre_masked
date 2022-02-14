
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm_coeff_parsed_coeff {unsigned int flags; int ctl_type; } ;
struct wm_adsp {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct wm_adsp*,char*,unsigned int,int ) ;

__attribute__((used)) static int FUNC_1(struct wm_adsp *VAR_1,
    const struct wm_coeff_parsed_coeff *VAR_2,
    unsigned int VAR_3,
    unsigned int VAR_4)
{
 if ((VAR_2->flags & VAR_4) ||
     ((VAR_2->flags & VAR_3) != VAR_3)) {
  FUNC_0(VAR_1, "Illegal flags 0x%x for control type 0x%x\n",
    VAR_2->flags, VAR_2->ctl_type);
  return -VAR_0;
 }

 return 0;
}
