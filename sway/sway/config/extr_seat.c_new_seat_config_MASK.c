
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int size; int * name; } ;
struct seat_config {int fallback; int hide_cursor_timeout; TYPE_1__ xcursor_theme; int allow_constrain; struct seat_config* name; struct seat_config* attachments; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct seat_config* FUNC_0 (int,int) ;
 struct seat_config* FUNC_1 () ;
 int FUNC_2 (struct seat_config*) ;
 struct seat_config* FUNC_3 (char const*) ;
 int FUNC_4 (struct seat_config*,char*) ;
 int FUNC_5 (int ,char*) ;

struct seat_config *FUNC_6(const char* VAR_2) {
 struct seat_config *VAR_3 = FUNC_0(1, sizeof(struct seat_config));
 if (!VAR_3) {
  FUNC_5(VAR_1, "Unable to allocate seat config");
  return ((void*)0);
 }

 VAR_3->name = FUNC_3(VAR_2);
 if (!FUNC_4(VAR_3->name, "could not allocate name for seat")) {
  FUNC_2(VAR_3);
  return ((void*)0);
 }

 VAR_3->fallback = -1;
 VAR_3->attachments = FUNC_1();
 if (!FUNC_4(VAR_3->attachments,
    "could not allocate seat attachments list")) {
  FUNC_2(VAR_3->name);
  FUNC_2(VAR_3);
  return ((void*)0);
 }
 VAR_3->hide_cursor_timeout = -1;
 VAR_3->allow_constrain = VAR_0;
 VAR_3->xcursor_theme.name = ((void*)0);
 VAR_3->xcursor_theme.size = 24;

 return VAR_3;
}
