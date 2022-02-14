
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef void* uint32_t ;
struct TYPE_3__ {scalar_t__ zsformat; int * target; int * zs; int format; void* cy; void* cx; } ;
typedef TYPE_1__ gs_texrender_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int * FUNC_0 (void*,void*,int ,int,int *,int ) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (void*,void*,scalar_t__) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static bool FUNC_4(gs_texrender_t *VAR_2, uint32_t VAR_3,
      uint32_t VAR_4)
{
 if (!VAR_2)
  return 0;

 FUNC_1(VAR_2->target);
 FUNC_3(VAR_2->zs);

 VAR_2->target = ((void*)0);
 VAR_2->zs = ((void*)0);
 VAR_2->cx = VAR_3;
 VAR_2->cy = VAR_4;

 VAR_2->target = FUNC_0(VAR_3, VAR_4, VAR_2->format, 1,
           ((void*)0), VAR_0);
 if (!VAR_2->target)
  return 0;

 if (VAR_2->zsformat != VAR_1) {
  VAR_2->zs = FUNC_2(VAR_3, VAR_4, VAR_2->zsformat);
  if (!VAR_2->zs) {
   FUNC_1(VAR_2->target);
   VAR_2->target = ((void*)0);

   return 0;
  }
 }

 return 1;
}
