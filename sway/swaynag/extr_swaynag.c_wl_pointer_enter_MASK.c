
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wl_fixed_t ;
typedef int uint32_t ;
struct wl_surface {int dummy; } ;
struct wl_pointer {int dummy; } ;
struct swaynag_pointer {int serial; } ;
struct swaynag {struct swaynag_pointer pointer; } ;


 int FUNC_0 (struct swaynag*) ;

__attribute__((used)) static void FUNC_1(void *VAR_0, struct wl_pointer *VAR_1,
  uint32_t VAR_2, struct wl_surface *VAR_3,
  wl_fixed_t VAR_4, wl_fixed_t VAR_5) {
 struct swaynag *VAR_6 = VAR_0;
 struct swaynag_pointer *VAR_7 = &VAR_6->pointer;
 VAR_7->serial = VAR_2;
 FUNC_0(VAR_6);
}
