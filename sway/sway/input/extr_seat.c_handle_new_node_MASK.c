
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wl_listener {int dummy; } ;
struct sway_seat {int dummy; } ;
struct sway_node {int dummy; } ;


 int VAR_0 ;
 struct sway_seat* VAR_1 ;
 int FUNC_0 (struct sway_seat*,struct sway_node*) ;
 struct sway_seat* FUNC_1 (struct wl_listener*,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct wl_listener *VAR_2, void *VAR_3) {
 struct sway_seat *VAR_4 = FUNC_1(VAR_2, VAR_4, VAR_0);
 struct sway_node *VAR_5 = VAR_3;
 FUNC_0(VAR_4, VAR_5);
}
