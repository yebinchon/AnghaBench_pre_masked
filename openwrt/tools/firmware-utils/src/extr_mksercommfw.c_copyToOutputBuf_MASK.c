
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file_info {int file_size; int file_name; scalar_t__ file_data; } ;
typedef int FILE ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*,...) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int VAR_1 ;
 int * FUNC_3 (int ,char*) ;
 int FUNC_4 (scalar_t__,int,int,int *) ;
 int FUNC_5 (int *,long,int ) ;
 int FUNC_6 (int *) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (scalar_t__,int ,int) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int FUNC_10(struct file_info* VAR_4) {
 FILE* VAR_5 = ((void*)0);

 int VAR_6 = 0;
 int VAR_7;
 int VAR_8;
 int VAR_9;

 if (!VAR_4 || !VAR_4->file_name) {
  FUNC_1("Invalid pointer provided!\n");
  return -1;
 }

 FUNC_0("Opening file: %s\n", VAR_4->file_name);

 if (!(VAR_5 = FUNC_3(VAR_4->file_name, "rb"))) {
  FUNC_1("Error opening file: %s\n", VAR_4->file_name);
  return -1;
 }


 FUNC_9(VAR_5);
 FUNC_5(VAR_5, 0L, VAR_0);
 VAR_6 = FUNC_6(VAR_5);
 FUNC_9(VAR_5);

 if (VAR_6 < 1) {
  FUNC_1("Error getting filesize: %s\n", VAR_4->file_name);
  FUNC_2(VAR_5);
  return -1;
 }

 if (VAR_3) {
  VAR_7 = VAR_2;
  VAR_8 = 0;
  VAR_9 = VAR_2;
 } else {
  VAR_7 = VAR_1;
  VAR_8 = VAR_6;
  VAR_9 = 0;
 }

 FUNC_0("Filesize: %i\n", VAR_6);
 VAR_4->file_size = VAR_6 + VAR_7;

 if (!(VAR_4->file_data = FUNC_7(VAR_4->file_size))) {
  FUNC_1("Out of memory!\n");
  FUNC_2(VAR_5);
  return -1;
 }


 FUNC_8(VAR_4->file_data + VAR_8, 0, VAR_7);


 if (FUNC_4(VAR_4->file_data + VAR_9, 1, VAR_6, VAR_5) != VAR_6) {
  FUNC_1("Error reading file %s\n", VAR_4->file_name);
  FUNC_2(VAR_5);
  return -1;
 }

 FUNC_0("File: read successful\n");
 FUNC_2(VAR_5);

 return VAR_8;
}
