
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct seat_config* name; } ;
struct seat_config {TYPE_1__ xcursor_theme; TYPE_2__* attachments; struct seat_config* name; } ;
struct TYPE_4__ {int length; int * items; } ;


 int FUNC_0 (struct seat_config*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ) ;

void FUNC_3(struct seat_config *VAR_0) {
 if (!VAR_0) {
  return;
 }

 FUNC_0(VAR_0->name);
 for (int VAR_1 = 0; VAR_1 < VAR_0->attachments->length; ++VAR_1) {
  FUNC_2(VAR_0->attachments->items[VAR_1]);
 }
 FUNC_1(VAR_0->attachments);
 FUNC_0(VAR_0->xcursor_theme.name);
 FUNC_0(VAR_0);
}
