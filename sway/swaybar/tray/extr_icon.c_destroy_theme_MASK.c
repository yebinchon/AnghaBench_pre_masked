
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct icon_theme_subdir {TYPE_1__* subdirs; struct icon_theme_subdir* name; struct icon_theme_subdir* dir; int directories; struct icon_theme_subdir* inherits; struct icon_theme_subdir* comment; } ;
struct icon_theme {TYPE_1__* subdirs; struct icon_theme* name; struct icon_theme* dir; int directories; struct icon_theme* inherits; struct icon_theme* comment; } ;
struct TYPE_2__ {int length; struct icon_theme_subdir** items; } ;


 int FUNC_0 (struct icon_theme_subdir*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct icon_theme *VAR_0) {
 if (!VAR_0) {
  return;
 }
 FUNC_0(VAR_0->name);
 FUNC_0(VAR_0->comment);
 FUNC_0(VAR_0->inherits);
 FUNC_2(VAR_0->directories);
 FUNC_0(VAR_0->dir);

 for (int VAR_1 = 0; VAR_1 < VAR_0->subdirs->length; ++VAR_1) {
  struct icon_theme_subdir *VAR_2 = VAR_0->subdirs->items[VAR_1];
  FUNC_0(VAR_2->name);
  FUNC_0(VAR_2);
 }
 FUNC_1(VAR_0->subdirs);
 FUNC_0(VAR_0);
}
