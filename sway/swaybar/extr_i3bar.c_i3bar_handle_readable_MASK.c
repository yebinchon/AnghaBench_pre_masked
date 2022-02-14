
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct status_line {int started; size_t buffer_index; char* buffer; size_t buffer_size; int expecting_comma; int read_fd; TYPE_1__* tokener; } ;
struct json_object {int dummy; } ;
typedef int ssize_t ;
typedef enum json_tokener_error { ____Placeholder_json_tokener_error } json_tokener_error ;
struct TYPE_4__ {size_t char_offset; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct status_line*,struct json_object*) ;
 scalar_t__ FUNC_2 (char) ;
 scalar_t__ FUNC_3 (struct json_object*) ;
 int FUNC_4 (struct json_object*) ;
 int VAR_3 ;
 int FUNC_5 (int) ;
 int FUNC_6 (TYPE_1__*) ;
 struct json_object* FUNC_7 (TYPE_1__*,char*,size_t) ;
 int FUNC_8 (TYPE_1__*) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_9 (char*,char*,size_t) ;
 int FUNC_10 (int ,char*,size_t) ;
 char* FUNC_11 (char*,int) ;
 int FUNC_12 (struct status_line*,char*) ;
 size_t FUNC_13 (char*,char*) ;
 int FUNC_14 (int ,char*,...) ;

bool FUNC_15(struct status_line *VAR_6) {
 while (!VAR_6->started) {
  for (size_t VAR_7 = 0; VAR_7 < VAR_6->buffer_index; ++VAR_7) {
   if (VAR_6->buffer[VAR_7] == '[') {
    VAR_6->started = 1;
    VAR_6->buffer_index -= ++VAR_7;
    FUNC_9(VAR_6->buffer, &VAR_6->buffer[VAR_7], VAR_6->buffer_index);
    break;
   } else if (!FUNC_2(VAR_6->buffer[VAR_7])) {
    FUNC_14(VAR_1, "Invalid i3bar json: expected '[' but encountered '%c'",
      VAR_6->buffer[VAR_7]);
    FUNC_12(VAR_6, "[invalid i3bar json]");
    return 1;
   }
  }
  if (VAR_6->started) {
   break;
  }

  VAR_2 = 0;
  ssize_t VAR_8 = FUNC_10(VAR_6->read_fd, VAR_6->buffer, VAR_6->buffer_size);
  if (VAR_8 > -1) {
   VAR_6->buffer_index = VAR_8;
  } else if (VAR_2 == VAR_0) {
   return 0;
  } else {
   FUNC_12(VAR_6, "[error reading from status command]");
   return 1;
  }
 }

 struct json_object *VAR_9 = ((void*)0);
 struct json_object *VAR_10;
 size_t VAR_11 = 0;
 while (1) {







  if (VAR_6->expecting_comma) {
   for (; VAR_11 < VAR_6->buffer_index; ++VAR_11) {
    if (VAR_6->buffer[VAR_11] == ',') {
     VAR_6->expecting_comma = 0;
     ++VAR_11;
     break;
    } else if (!FUNC_2(VAR_6->buffer[VAR_11])) {
     FUNC_14(VAR_1, "Invalid i3bar json: expected ',' but encountered '%c'",
       VAR_6->buffer[VAR_11]);
     FUNC_12(VAR_6, "[invalid i3bar json]");
     return 1;
    }
   }
   if (VAR_11 < VAR_6->buffer_index) {
    continue;
   }
   VAR_11 = VAR_6->buffer_index = 0;
  } else {
   VAR_10 = FUNC_7(VAR_6->tokener,
     &VAR_6->buffer[VAR_11], VAR_6->buffer_index - VAR_11);
   enum json_tokener_error VAR_12 = FUNC_6(VAR_6->tokener);
   if (VAR_12 == VAR_4) {
    if (FUNC_3(VAR_10) == VAR_5) {
     if (VAR_9) {
      FUNC_4(VAR_9);
     }
     VAR_9 = VAR_10;
    } else {
     FUNC_4(VAR_10);
    }




    char *VAR_13 =
     &VAR_6->buffer[VAR_11 + VAR_6->tokener->char_offset - 1];
    char VAR_14 = *VAR_13;
    while (FUNC_2(VAR_14)) {
     VAR_14 = *--VAR_13;
    }
    *VAR_13 = '\0';
    size_t VAR_15 = FUNC_13(&VAR_6->buffer[VAR_11], " \f\n\r\t\v");
    FUNC_14(VAR_1, "Received i3bar json: '%s%c'",
      &VAR_6->buffer[VAR_11 + VAR_15], VAR_14);
    *VAR_13 = VAR_14;

    VAR_11 += VAR_6->tokener->char_offset;
    VAR_6->expecting_comma = 1;

    if (VAR_11 < VAR_6->buffer_index) {
     continue;
    }
    VAR_11 = VAR_6->buffer_index = 0;
   } else if (VAR_12 == VAR_3) {
    FUNC_8(VAR_6->tokener);
    if (VAR_6->buffer_index < VAR_6->buffer_size) {

     VAR_6->buffer_index -= VAR_11;
     FUNC_9(VAR_6->buffer, &VAR_6->buffer[VAR_11],
       VAR_6->buffer_index);
     VAR_11 = 0;
    } else {

     VAR_6->buffer_size *= 2;
     char *VAR_16 = FUNC_11(VAR_6->buffer, VAR_6->buffer_size);
     if (VAR_16) {
      VAR_6->buffer = VAR_16;
     } else {
      FUNC_0(VAR_6->buffer);
      FUNC_12(VAR_6, "[failed to allocate buffer]");
      return 1;
     }
    }
   } else {
    char VAR_17 = VAR_6->buffer[VAR_6->buffer_index - 1];
    VAR_6->buffer[VAR_6->buffer_index - 1] = '\0';
    FUNC_14(VAR_1, "Failed to parse i3bar json - %s: '%s%c'",
      FUNC_5(VAR_12), &VAR_6->buffer[VAR_11], VAR_17);
    FUNC_12(VAR_6, "[failed to parse i3bar json]");
    return 1;
   }
  }

  VAR_2 = 0;
  ssize_t VAR_18 = FUNC_10(VAR_6->read_fd, &VAR_6->buffer[VAR_6->buffer_index],
    VAR_6->buffer_size - VAR_6->buffer_index);
  if (VAR_18 > -1) {
   VAR_6->buffer_index += VAR_18;
  } else if (VAR_2 == VAR_0) {
   break;
  } else {
   FUNC_12(VAR_6, "[error reading from status command]");
   return 1;
  }
 }

 if (VAR_9) {
  FUNC_14(VAR_1, "Rendering last received json");
  FUNC_1(VAR_6, VAR_9);
  FUNC_4(VAR_9);
  return 1;
 } else {
  return 0;
 }
}
