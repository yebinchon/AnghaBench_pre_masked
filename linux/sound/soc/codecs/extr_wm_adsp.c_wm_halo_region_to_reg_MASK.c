
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm_adsp_region {int type; int base; } ;


 int FUNC_0 (int,char*) ;






__attribute__((used)) static unsigned int FUNC_1(struct wm_adsp_region const *VAR_0,
       unsigned int VAR_1)
{
 switch (VAR_0->type) {
 case 132:
 case 131:
  return VAR_0->base + (VAR_1 * 4);
 case 129:
 case 128:
  return (VAR_0->base + (VAR_1 * 3)) & ~0x3;
 case 130:
  return VAR_0->base + (VAR_1 * 5);
 default:
  FUNC_0(1, "Unknown memory region type");
  return VAR_1;
 }
}
