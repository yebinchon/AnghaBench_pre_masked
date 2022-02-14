
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
typedef int gs_indexbuffer_t ;
struct TYPE_4__ {int * (* device_indexbuffer_create ) (int ,int,void*,size_t,int) ;} ;
struct TYPE_5__ {int device; TYPE_1__ exports; } ;
typedef TYPE_2__ graphics_t ;
typedef enum gs_index_type { ____Placeholder_gs_index_type } gs_index_type ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (void*,size_t) ;
 int FUNC_1 (char*) ;
 int * FUNC_2 (int ,int,void*,size_t,int) ;
 TYPE_2__* VAR_2 ;

gs_indexbuffer_t *FUNC_3(enum gs_index_type VAR_3, void *VAR_4,
     size_t VAR_5, uint32_t VAR_6)
{
 graphics_t *VAR_7 = VAR_2;

 if (!FUNC_1("gs_indexbuffer_create"))
  return ((void*)0);

 if (VAR_4 && VAR_5 && (VAR_6 & VAR_0) != 0) {
  size_t VAR_8 = VAR_3 == VAR_1 ? 2 : 4;
  VAR_4 = FUNC_0(VAR_4, VAR_8 * VAR_5);
 }

 return VAR_7->exports.device_indexbuffer_create(
  VAR_7->device, VAR_3, VAR_4, VAR_5, VAR_6);
}
