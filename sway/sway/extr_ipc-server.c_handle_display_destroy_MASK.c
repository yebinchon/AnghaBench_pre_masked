
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct wl_listener {int dummy; } ;
struct TYPE_8__ {int link; } ;
struct TYPE_7__ {int sun_path; } ;
struct TYPE_6__ {int length; int * items; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ) ;
 TYPE_1__* VAR_0 ;
 TYPE_3__ VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_2__* VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct wl_listener *VAR_5, void *VAR_6) {
 if (VAR_2) {
  FUNC_5(VAR_2);
 }
 FUNC_0(VAR_4);
 FUNC_4(VAR_3->sun_path);

 while (VAR_0->length) {
  FUNC_2(VAR_0->items[VAR_0->length-1]);
 }
 FUNC_3(VAR_0);

 FUNC_1(VAR_3);

 FUNC_6(&VAR_1.link);
}
