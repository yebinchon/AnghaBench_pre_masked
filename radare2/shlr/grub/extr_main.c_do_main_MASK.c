
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct grub_fs {scalar_t__ (* open ) (struct grub_file*,char*) ;scalar_t__ (* read ) (struct grub_file*,char*,int ) ;scalar_t__ (* dir ) (int ,char*,int ,int ) ;int (* close ) (struct grub_file*) ;} ;
struct grub_file {int device; int size; } ;
typedef scalar_t__ grub_err_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct grub_fs VAR_2 ;
 int FUNC_0 () ;
 struct grub_file* FUNC_1 (struct grub_fs*,int ) ;
 int FUNC_2 (char*,...) ;
 scalar_t__ FUNC_3 (struct grub_file*,char*) ;
 scalar_t__ FUNC_4 (struct grub_file*,char*,int ) ;
 int FUNC_5 (struct grub_file*) ;
 scalar_t__ FUNC_6 (int ,char*,int ,int ) ;
 int FUNC_7 (int,char*,int ) ;

int FUNC_8() {
 struct grub_file *VAR_3;
 struct grub_fs *VAR_4;
 grub_err_t VAR_5;

 VAR_4 = &VAR_2;
 VAR_3 = FUNC_1 (VAR_4, VAR_0);
 if (VAR_3 == ((void*)0)) {
  FUNC_2 ("oops\n");
  return 0;
 }

 VAR_5 = VAR_4->open (VAR_3, "/test");
 if (VAR_5 == 0) {
  char VAR_6[1024];
  VAR_5 = VAR_4->read (VAR_3, VAR_6, VAR_3->size);

  FUNC_7 (1, VAR_6, VAR_3->size);
  VAR_4->close (VAR_3);


  VAR_5 = VAR_4->dir (VAR_3->device, "/", VAR_1, 0);
  if (VAR_5 != 0)
   FUNC_0 ();
 } else {
  FUNC_0 ();
  FUNC_2 ("error is : %d\n", VAR_5);
  return 0;
 }
 return 1;
}
