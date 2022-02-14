
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct obs_core_video {int ** mapped_surfaces; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static inline void FUNC_1(struct obs_core_video *VAR_1)
{
 for (int VAR_2 = 0; VAR_2 < VAR_0; ++VAR_2) {
  if (VAR_1->mapped_surfaces[VAR_2]) {
   FUNC_0(VAR_1->mapped_surfaces[VAR_2]);
   VAR_1->mapped_surfaces[VAR_2] = ((void*)0);
  }
 }
}
