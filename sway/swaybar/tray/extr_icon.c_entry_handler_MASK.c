
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct icon_theme_subdir {char* name; int size; int max_size; int min_size; int threshold; int type; } ;
struct icon_theme {TYPE_1__* subdirs; int directories; void* inherits; void* comment; void* name; } ;
struct TYPE_2__ {int length; struct icon_theme_subdir** items; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,char*) ;
 scalar_t__ FUNC_1 (char*,char*) ;
 void* FUNC_2 (char*) ;
 int FUNC_3 (char*,char**,int) ;

__attribute__((used)) static int FUNC_4(char *VAR_3, char *VAR_4, char *VAR_5,
  struct icon_theme *VAR_6) {
 if (FUNC_1(VAR_3, "Icon Theme") == 0) {
  if (FUNC_1(VAR_4, "Name") == 0) {
   VAR_6->name = FUNC_2(VAR_5);
  } else if (FUNC_1(VAR_4, "Comment") == 0) {
   VAR_6->comment = FUNC_2(VAR_5);
  } else if (FUNC_1(VAR_4, "Inherits") == 0) {
   VAR_6->inherits = FUNC_2(VAR_5);
  } else if (FUNC_1(VAR_4, "Directories") == 0) {
   VAR_6->directories = FUNC_0(VAR_5, ",");
  }
 } else {
  if (VAR_6->subdirs->length == 0) {
   return 0;
  }

  struct icon_theme_subdir *VAR_7 =
   VAR_6->subdirs->items[VAR_6->subdirs->length - 1];
  if (FUNC_1(VAR_7->name, VAR_3) != 0) {
   return 0;
  }

  char *VAR_8;
  int VAR_9 = FUNC_3(VAR_5, &VAR_8, 10);
  if (FUNC_1(VAR_4, "Size") == 0) {
   VAR_7->size = VAR_9;
   return *VAR_8 != '\0';
  } else if (FUNC_1(VAR_4, "Type") == 0) {
   if (FUNC_1(VAR_5, "Fixed") == 0) {
    VAR_7->type = VAR_0;
   } else if (FUNC_1(VAR_5, "Scalable") == 0) {
    VAR_7->type = VAR_1;
   } else if (FUNC_1(VAR_5, "Threshold") == 0) {
    VAR_7->type = VAR_2;
   } else {
    return 1;
   }
  } else if (FUNC_1(VAR_4, "MaxSize") == 0) {
   VAR_7->max_size = VAR_9;
   return *VAR_8 != '\0';
  } else if (FUNC_1(VAR_4, "MinSize") == 0) {
   VAR_7->min_size = VAR_9;
   return *VAR_8 != '\0';
  } else if (FUNC_1(VAR_4, "Threshold") == 0) {
   VAR_7->threshold = VAR_9;
   return *VAR_8 != '\0';
  }
 }
 return 0;
}
