
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wl_listener {int dummy; } ;
struct TYPE_2__ {int link; } ;
struct bar_config {int * client; TYPE_1__ client_destroy; } ;


 struct bar_config* VAR_0 ;
 int VAR_1 ;
 struct bar_config* FUNC_0 (struct wl_listener*,int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct wl_listener *VAR_2,
  void *VAR_3) {
 struct bar_config *VAR_4 = FUNC_0(VAR_2, VAR_4, VAR_1);
 FUNC_2(&VAR_4->client_destroy.link);
 FUNC_1(&VAR_4->client_destroy.link);
 VAR_4->client = ((void*)0);
}
