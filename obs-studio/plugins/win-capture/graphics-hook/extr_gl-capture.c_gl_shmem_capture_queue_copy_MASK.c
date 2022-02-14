
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int* texture_ready; int* texture_mapped; int * pbos; } ;
typedef int GLvoid ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__ VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int * FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (char*,char*) ;
 int FUNC_3 (int,int *) ;

__attribute__((used)) static inline void FUNC_4(void)
{
 for (int VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
  if (VAR_3.texture_ready[VAR_4]) {
   GLvoid *VAR_5;

   VAR_3.texture_ready[VAR_4] = 0;

   FUNC_0(VAR_0, VAR_3.pbos[VAR_4]);
   if (FUNC_2("gl_shmem_capture_queue_copy",
         "failed to bind pbo")) {
    return;
   }

   VAR_5 =
    FUNC_1(VAR_0, VAR_1);
   if (VAR_5) {
    VAR_3.texture_mapped[VAR_4] = 1;
    FUNC_3(VAR_4, VAR_5);
   }
   break;
  }
 }
}
