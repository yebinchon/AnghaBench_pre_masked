
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct status_line {int buffer_size; scalar_t__ pid; int read_fd; int write_fd; void* write; void* read; int buffer; int cont_signal; int stop_signal; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct status_line* FUNC_0 (int,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (char* const,char* const*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int,int ,int ) ;
 void* FUNC_6 (int,char*) ;
 scalar_t__ FUNC_7 () ;
 int FUNC_8 (int) ;
 scalar_t__ FUNC_9 (int*) ;
 int FUNC_10 (int ,char*) ;

struct status_line *FUNC_11(char *VAR_7) {
 struct status_line *VAR_8 = FUNC_0(1, sizeof(struct status_line));
 VAR_8->stop_signal = VAR_3;
 VAR_8->cont_signal = VAR_2;

 VAR_8->buffer_size = 8192;
 VAR_8->buffer = FUNC_8(VAR_8->buffer_size);

 int VAR_9[2];
 int VAR_10[2];
 if (FUNC_9(VAR_9) != 0 || FUNC_9(VAR_10) != 0) {
  FUNC_10(VAR_6, "Unable to create pipes for status_command fork");
  FUNC_4(1);
 }

 VAR_8->pid = FUNC_7();
 if (VAR_8->pid == 0) {
  FUNC_2(VAR_9[1], VAR_5);
  FUNC_1(VAR_9[0]);
  FUNC_1(VAR_9[1]);

  FUNC_2(VAR_10[0], VAR_4);
  FUNC_1(VAR_10[0]);
  FUNC_1(VAR_10[1]);

  char *const VAR_11[] = { "sh", "-c", VAR_7, ((void*)0), };
  FUNC_3(VAR_11[0], VAR_11);
  FUNC_4(1);
 }

 FUNC_1(VAR_9[1]);
 VAR_8->read_fd = VAR_9[0];
 FUNC_5(VAR_8->read_fd, VAR_0, VAR_1);
 FUNC_1(VAR_10[0]);
 VAR_8->write_fd = VAR_10[1];
 FUNC_5(VAR_8->write_fd, VAR_0, VAR_1);

 VAR_8->read = FUNC_6(VAR_8->read_fd, "r");
 VAR_8->write = FUNC_6(VAR_8->write_fd, "w");
 return VAR_8;
}
