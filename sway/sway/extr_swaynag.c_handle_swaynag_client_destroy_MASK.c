
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wl_listener {int dummy; } ;
struct TYPE_2__ {int link; } ;
struct swaynag_instance {int * client; TYPE_1__ client_destroy; } ;


 int VAR_0 ;
 struct swaynag_instance* VAR_1 ;
 struct swaynag_instance* FUNC_0 (struct wl_listener*,int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct wl_listener *VAR_2,
  void *VAR_3) {
 struct swaynag_instance *VAR_4 =
  FUNC_0(VAR_2, VAR_4, VAR_0);
 FUNC_2(&VAR_4->client_destroy.link);
 FUNC_1(&VAR_4->client_destroy.link);
 VAR_4->client = ((void*)0);
}
