
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm_adsp {int dummy; } ;


 int FUNC_0 (struct wm_adsp*,char*,unsigned int) ;

__attribute__((used)) static bool FUNC_1(struct wm_adsp *VAR_0, unsigned int VAR_1)
{
 switch (VAR_1) {
 case 0:
  FUNC_0(VAR_0, "Deprecated file format %d\n", VAR_1);
  return 1;
 case 1:
 case 2:
  return 1;
 default:
  return 0;
 }
}
