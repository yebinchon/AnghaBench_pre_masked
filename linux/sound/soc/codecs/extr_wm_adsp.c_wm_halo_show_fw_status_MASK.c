
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm_adsp {int dummy; } ;


 int FUNC_0 (unsigned int*) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_1 (struct wm_adsp*,char*,unsigned int,unsigned int,unsigned int,unsigned int) ;
 int FUNC_2 (struct wm_adsp*,int ,unsigned int*) ;

__attribute__((used)) static void FUNC_3(struct wm_adsp *VAR_4)
{
 unsigned int VAR_5[] = {
  VAR_0, VAR_1, VAR_2, VAR_3,
 };

 FUNC_2(VAR_4, FUNC_0(VAR_5), VAR_5);

 FUNC_1(VAR_4, "FW SCRATCH 0:0x%x 1:0x%x 2:0x%x 3:0x%x\n",
   VAR_5[0], VAR_5[1], VAR_5[2], VAR_5[3]);
}
