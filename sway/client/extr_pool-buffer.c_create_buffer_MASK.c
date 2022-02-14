
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct wl_shm_pool {int dummy; } ;
struct wl_shm {int dummy; } ;
struct pool_buffer {size_t size; int width; int height; int buffer; int cairo; int pango; int surface; void* data; } ;
typedef int int32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (void*,int ,int,int,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (size_t,char**) ;
 int FUNC_5 (char*) ;
 void* FUNC_6 (int *,size_t,int,int ,int,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (int ,int *,struct pool_buffer*) ;
 struct wl_shm_pool* FUNC_10 (struct wl_shm*,int,size_t) ;
 int FUNC_11 (struct wl_shm_pool*,int ,int,int,int,int) ;
 int FUNC_12 (struct wl_shm_pool*) ;

__attribute__((used)) static struct pool_buffer *FUNC_13(struct wl_shm *VAR_5,
  struct pool_buffer *VAR_6, int32_t VAR_7, int32_t VAR_8,
  uint32_t VAR_9) {
 uint32_t VAR_10 = VAR_7 * 4;
 size_t VAR_11 = VAR_10 * VAR_8;

 char *VAR_12;
 int VAR_13 = FUNC_4(VAR_11, &VAR_12);
 FUNC_0(VAR_13 != -1);
 void *VAR_14 = FUNC_6(((void*)0), VAR_11, VAR_2 | VAR_3, VAR_1, VAR_13, 0);
 struct wl_shm_pool *VAR_15 = FUNC_10(VAR_5, VAR_13, VAR_11);
 VAR_6->buffer = FUNC_11(VAR_15, 0,
   VAR_7, VAR_8, VAR_10, VAR_9);
 FUNC_12(VAR_15);
 FUNC_3(VAR_13);
 FUNC_8(VAR_12);
 FUNC_5(VAR_12);

 VAR_6->size = VAR_11;
 VAR_6->width = VAR_7;
 VAR_6->height = VAR_8;
 VAR_6->data = VAR_14;
 VAR_6->surface = FUNC_2(VAR_14,
   VAR_0, VAR_7, VAR_8, VAR_10);
 VAR_6->cairo = FUNC_1(VAR_6->surface);
 VAR_6->pango = FUNC_7(VAR_6->cairo);

 FUNC_9(VAR_6->buffer, &VAR_4, VAR_6);
 return VAR_6;
}
