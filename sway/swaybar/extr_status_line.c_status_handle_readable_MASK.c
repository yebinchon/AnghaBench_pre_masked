
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct status_line {int protocol; size_t buffer_size; char* buffer; int click_events; int stop_signal; int cont_signal; char* text; int read; int buffer_index; int tokener; int blocks; int write_fd; int read_fd; } ;
typedef int ssize_t ;
typedef int json_object ;


 int VAR_0 ;
 int VAR_1 ;



 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;
 int FUNC_1 (char**,int*,int ) ;
 int FUNC_2 (struct status_line*) ;
 int FUNC_3 (int ,int ,int*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,char*,int **) ;
 int FUNC_7 (int *) ;
 int FUNC_8 () ;
 int * FUNC_9 (char*) ;
 int FUNC_10 (char*,char*,int ) ;
 int FUNC_11 (int ,char*,int) ;
 char* FUNC_12 (char*,int) ;
 int FUNC_13 (struct status_line*,char*) ;
 char* FUNC_14 (char*,char) ;
 int FUNC_15 (char*) ;
 int FUNC_16 (int ,char*,...) ;
 int FUNC_17 (int ,char*) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int ,char*,int) ;

bool FUNC_20(struct status_line *VAR_5) {
 ssize_t VAR_6 = 1;
 switch (VAR_5->protocol) {
 case 128:
  VAR_4 = 0;
  int VAR_7;
  if (FUNC_3(VAR_5->read_fd, VAR_1, &VAR_7) == -1) {
   FUNC_16(VAR_3, "Unable to read status command output size");
   FUNC_13(VAR_5, "[error reading from status command]");
   return 1;
  }

  if ((size_t)VAR_7 + 1 > VAR_5->buffer_size) {

   VAR_5->buffer_size = VAR_7 + 1;
   VAR_5->buffer = FUNC_12(VAR_5->buffer, VAR_5->buffer_size);
  }
  if (VAR_5->buffer == ((void*)0)) {
   FUNC_17(VAR_3, "Unable to read status line");
   FUNC_13(VAR_5, "[error reading from status command]");
   return 1;
  }

  VAR_6 = FUNC_11(VAR_5->read_fd, VAR_5->buffer, VAR_7);
  if (VAR_6 != VAR_7) {
   FUNC_13(VAR_5, "[error reading from status command]");
   return 1;
  }
  VAR_5->buffer[VAR_7] = 0;


  char *VAR_8 = FUNC_14(VAR_5->buffer, '\n');
  json_object *VAR_9, *VAR_10;
  if (VAR_8 != ((void*)0)
    && (VAR_9 = FUNC_9(VAR_5->buffer))
    && FUNC_6(VAR_9, "version", &VAR_10)
    && FUNC_5(VAR_10) == 1) {
   FUNC_16(VAR_2, "Using i3bar protocol.");
   VAR_5->protocol = 130;

   json_object *VAR_11;
   if (FUNC_6(VAR_9, "click_events", &VAR_11)
     && FUNC_4(VAR_11)) {
    FUNC_16(VAR_2, "Enabling click events.");
    VAR_5->click_events = 1;
    if (FUNC_19(VAR_5->write_fd, "[\n", 2) != 2) {
     FUNC_13(VAR_5, "[failed to write to status command]");
     FUNC_7(VAR_9);
     return 1;
    }
   }

   json_object *VAR_12;
   if (FUNC_6(VAR_9, "stop_signal", &VAR_12)) {
    VAR_5->stop_signal = FUNC_5(VAR_12);
    FUNC_16(VAR_2, "Setting stop signal to %d", VAR_5->stop_signal);
   }
   if (FUNC_6(VAR_9, "cont_signal", &VAR_12)) {
    VAR_5->cont_signal = FUNC_5(VAR_12);
    FUNC_16(VAR_2, "Setting cont signal to %d", VAR_5->cont_signal);
   }

   FUNC_7(VAR_9);

   FUNC_18(&VAR_5->blocks);
   VAR_5->tokener = FUNC_8();
   VAR_5->buffer_index = FUNC_15(VAR_8 + 1);
   FUNC_10(VAR_5->buffer, VAR_8 + 1, VAR_5->buffer_index + 1);
   return FUNC_2(VAR_5);
  }

  FUNC_16(VAR_2, "Using text protocol.");
  VAR_5->protocol = 129;
  VAR_5->text = VAR_5->buffer;

 case 129:
  VAR_4 = 0;
  while (1) {
   if (VAR_5->buffer[VAR_6 - 1] == '\n') {
    VAR_5->buffer[VAR_6 - 1] = '\0';
   }
   VAR_6 = FUNC_1(&VAR_5->buffer,
     &VAR_5->buffer_size, VAR_5->read);
   if (VAR_4 == VAR_0) {
    FUNC_0(VAR_5->read);
    return 1;
   } else if (VAR_4) {
    FUNC_13(VAR_5, "[error reading from status command]");
    return 1;
   }
  }
 case 130:
  return FUNC_2(VAR_5);
 default:
  return 0;
 }
}
