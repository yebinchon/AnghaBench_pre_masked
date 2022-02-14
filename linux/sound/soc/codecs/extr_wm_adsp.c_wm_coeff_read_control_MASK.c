
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm_coeff_ctl {struct wm_adsp* dsp; } ;
struct wm_adsp {int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct wm_adsp*,char*,size_t,unsigned int) ;
 int FUNC_1 (struct wm_adsp*,char*,size_t,unsigned int,int) ;
 int FUNC_2 (void*) ;
 void* FUNC_3 (size_t,int) ;
 int FUNC_4 (void*,void*,size_t) ;
 int FUNC_5 (int ,unsigned int,void*,size_t) ;
 int FUNC_6 (struct wm_coeff_ctl*,unsigned int*) ;

__attribute__((used)) static int FUNC_7(struct wm_coeff_ctl *VAR_3,
     void *VAR_4, size_t VAR_5)
{
 struct wm_adsp *VAR_6 = VAR_3->dsp;
 void *VAR_7;
 int VAR_8;
 unsigned int VAR_9;

 VAR_8 = FUNC_6(VAR_3, &VAR_9);
 if (VAR_8)
  return VAR_8;

 VAR_7 = FUNC_3(VAR_5, VAR_2 | VAR_1);
 if (!VAR_7)
  return -VAR_0;

 VAR_8 = FUNC_5(VAR_6->regmap, VAR_9, VAR_7, VAR_5);
 if (VAR_8) {
  FUNC_1(VAR_6, "Failed to read %zu bytes from %x: %d\n",
    VAR_5, VAR_9, VAR_8);
  FUNC_2(VAR_7);
  return VAR_8;
 }
 FUNC_0(VAR_6, "Read %zu bytes from %x\n", VAR_5, VAR_9);

 FUNC_4(VAR_4, VAR_7, VAR_5);
 FUNC_2(VAR_7);

 return 0;
}
