
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wl_listener {int dummy; } ;
struct sway_view {scalar_t__ surface; int container; } ;
struct sway_server_decoration {TYPE_1__* wlr_server_decoration; } ;
struct TYPE_2__ {scalar_t__ surface; scalar_t__ mode; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 struct sway_server_decoration* VAR_1 ;
 int VAR_2 ;
 int FUNC_1 () ;
 struct sway_view* FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct sway_view*,int) ;
 struct sway_server_decoration* FUNC_4 (struct wl_listener*,int ,int ) ;

__attribute__((used)) static void FUNC_5(struct wl_listener *VAR_3,
  void *VAR_4) {
 struct sway_server_decoration *VAR_5 =
  FUNC_4(VAR_3, VAR_5, VAR_2);
 struct sway_view *VAR_6 =
  FUNC_2(VAR_5->wlr_server_decoration->surface);
 if (VAR_6 == ((void*)0) || VAR_6->surface != VAR_5->wlr_server_decoration->surface) {
  return;
 }

 bool VAR_7 = VAR_5->wlr_server_decoration->mode ==
   VAR_0;
 FUNC_3(VAR_6, VAR_7);

 FUNC_0(VAR_6->container);
 FUNC_1();
}
