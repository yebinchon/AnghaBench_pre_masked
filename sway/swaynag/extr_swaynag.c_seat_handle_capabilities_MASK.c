
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wl_seat {int dummy; } ;
struct TYPE_2__ {int * pointer; } ;
struct swaynag {TYPE_1__ pointer; } ;
typedef enum wl_seat_capability { ____Placeholder_wl_seat_capability } wl_seat_capability ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *,struct swaynag*) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (struct wl_seat*) ;

__attribute__((used)) static void FUNC_3(void *VAR_2, struct wl_seat *VAR_3,
  enum wl_seat_capability VAR_4) {
 struct swaynag *VAR_5 = VAR_2;
 bool VAR_6 = VAR_4 & VAR_0;
 if (VAR_6 && !VAR_5->pointer.pointer) {
  VAR_5->pointer.pointer = FUNC_2(VAR_3);
  FUNC_0(VAR_5->pointer.pointer, &VAR_1,
    VAR_5);
 } else if (!VAR_6 && VAR_5->pointer.pointer) {
  FUNC_1(VAR_5->pointer.pointer);
  VAR_5->pointer.pointer = ((void*)0);
 }
}
