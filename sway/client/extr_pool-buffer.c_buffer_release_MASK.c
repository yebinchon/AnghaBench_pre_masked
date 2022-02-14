
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wl_buffer {int dummy; } ;
struct pool_buffer {int busy; } ;



__attribute__((used)) static void FUNC_0(void *VAR_0, struct wl_buffer *VAR_1) {
 struct pool_buffer *VAR_2 = VAR_0;
 VAR_2->busy = 0;
}
