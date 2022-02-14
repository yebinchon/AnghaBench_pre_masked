
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct icon_theme_subdir {int size; int type; int max_size; int min_size; int threshold; int name; } ;
struct icon_theme {TYPE_1__* subdirs; int directories; } ;
struct TYPE_2__ {int length; struct icon_theme_subdir** items; } ;





 struct icon_theme_subdir* FUNC_0 (int,int) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*,struct icon_theme_subdir*) ;
 int FUNC_2 (int ,int ,char*) ;
 scalar_t__ FUNC_3 (char*,char*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (struct icon_theme*) ;

__attribute__((used)) static bool FUNC_6(char *VAR_1, char *VAR_2,
  struct icon_theme *VAR_3) {
 if (!VAR_1) {
  return FUNC_3(VAR_2, "Icon Theme");
 }

 if (FUNC_3(VAR_1, "Icon Theme") == 0) {
  if (!FUNC_5(VAR_3)) {
   return 1;
  }
 } else {
  if (VAR_3->subdirs->length == 0) {
   return 0;
  }

  struct icon_theme_subdir *VAR_4 =
   VAR_3->subdirs->items[VAR_3->subdirs->length - 1];
  if (!VAR_4->size) return 1;

  switch (VAR_4->type) {
  case 130: VAR_4->max_size = VAR_4->min_size = VAR_4->size;
   break;
  case 129: {
   if (!VAR_4->max_size) VAR_4->max_size = VAR_4->size;
   if (!VAR_4->min_size) VAR_4->min_size = VAR_4->size;
   break;
  }
  case 128:
   VAR_4->max_size = VAR_4->size + VAR_4->threshold;
   VAR_4->min_size = VAR_4->size - VAR_4->threshold;
  }
 }

 if (VAR_2 && FUNC_2(VAR_3->directories, VAR_0, VAR_2) != -1) {
  struct icon_theme_subdir *VAR_5 = FUNC_0(1, sizeof(struct icon_theme_subdir));
  if (!VAR_5) {
   return 1;
  }
  VAR_5->name = FUNC_4(VAR_2);
  VAR_5->threshold = 2;
  FUNC_1(VAR_3->subdirs, VAR_5);
 }

 return 0;
}
