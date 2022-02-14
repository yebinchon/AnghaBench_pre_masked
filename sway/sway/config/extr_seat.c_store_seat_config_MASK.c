
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct seat_config {char* name; } ;
struct TYPE_5__ {TYPE_1__* seat_configs; } ;
struct TYPE_4__ {struct seat_config** items; } ;


 int VAR_0 ;
 TYPE_3__* VAR_1 ;
 int FUNC_0 (struct seat_config*) ;
 int FUNC_1 (TYPE_1__*,struct seat_config*) ;
 int FUNC_2 (TYPE_1__*,int ,char*) ;
 int FUNC_3 (struct seat_config*,struct seat_config*) ;
 int FUNC_4 (struct seat_config*) ;
 struct seat_config* FUNC_5 (char*) ;
 int VAR_2 ;
 scalar_t__ FUNC_6 (char*,char*) ;
 int FUNC_7 (int ,char*,...) ;

struct seat_config *FUNC_8(struct seat_config *VAR_3) {
 bool VAR_4 = FUNC_6(VAR_3->name, "*") == 0;
 if (VAR_4) {
  FUNC_4(VAR_3);
 }

 int VAR_5 = FUNC_2(VAR_1->seat_configs, VAR_2, VAR_3->name);
 if (VAR_5 >= 0) {
  FUNC_7(VAR_0, "Merging on top of existing seat config");
  struct seat_config *VAR_6 = VAR_1->seat_configs->items[VAR_5];
  FUNC_3(VAR_6, VAR_3);
  FUNC_0(VAR_3);
  VAR_3 = VAR_6;
 } else if (!VAR_4) {
  FUNC_7(VAR_0, "Adding non-wildcard seat config");
  VAR_5 = FUNC_2(VAR_1->seat_configs, VAR_2, "*");
  if (VAR_5 >= 0) {
   FUNC_7(VAR_0, "Merging on top of seat * config");
   struct seat_config *VAR_7 = FUNC_5(VAR_3->name);
   FUNC_3(VAR_7, VAR_1->seat_configs->items[VAR_5]);
   FUNC_3(VAR_7, VAR_3);
   FUNC_0(VAR_3);
   VAR_3 = VAR_7;
  }
  FUNC_1(VAR_1->seat_configs, VAR_3);
 } else {

  FUNC_7(VAR_0, "Adding seat * config");
  FUNC_1(VAR_1->seat_configs, VAR_3);
 }

 FUNC_7(VAR_0, "Config stored for seat %s", VAR_3->name);

 return VAR_3;
}
