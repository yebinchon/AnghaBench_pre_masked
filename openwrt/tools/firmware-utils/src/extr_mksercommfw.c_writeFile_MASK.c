
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file_info {scalar_t__ file_size; int file_data; int file_name; } ;
typedef int FILE ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int ,char*) ;
 scalar_t__ FUNC_4 (int ,int,scalar_t__,int *) ;

__attribute__((used)) static int FUNC_5(struct file_info* VAR_0) {
 FILE* VAR_1;

 if (!VAR_0 || !VAR_0->file_name) {
  FUNC_1("Invalid pointer provided!\n");
  return -1;
 }

 FUNC_0("Opening file: %s\n", VAR_0->file_name);

 if (!(VAR_1 = FUNC_3(VAR_0->file_name, "w"))) {
  FUNC_1("Error opening file: %s\n", VAR_0->file_name);
  return -1;
 }

 FUNC_0("Writing file: %s\n", VAR_0->file_name);

 if (FUNC_4(VAR_0->file_data, 1, VAR_0->file_size, VAR_1) != VAR_0->file_size) {
  FUNC_1("Wanted to write, but something went wrong!\n");
  FUNC_2(VAR_1);
  return -1;
 }

 FUNC_2(VAR_1);
 return 0;
}
