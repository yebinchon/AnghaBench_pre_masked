
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct obs_core_video {scalar_t__ gpu_conversion; } ;
typedef int gs_texture_t ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (struct obs_core_video*,int) ;
 int FUNC_8 (struct obs_core_video*,int *) ;
 int FUNC_9 (struct obs_core_video*) ;
 int * FUNC_10 (struct obs_core_video*) ;
 int FUNC_11 (struct obs_core_video*,int) ;

__attribute__((used)) static inline void FUNC_12(struct obs_core_video *VAR_1, bool VAR_2,
    const bool VAR_3, int VAR_4)
{
 FUNC_0();

 FUNC_2(0);
 FUNC_5(VAR_0);

 FUNC_9(VAR_1);

 if (VAR_2 || VAR_3) {
  gs_texture_t *VAR_5 = FUNC_10(VAR_1);






  if (VAR_1->gpu_conversion)
   FUNC_8(VAR_1, VAR_5);
  if (VAR_2)
   FUNC_11(VAR_1, VAR_4);
 }

 FUNC_6(((void*)0), ((void*)0));
 FUNC_1(1);

 FUNC_3();
}
