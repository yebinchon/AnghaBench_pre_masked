
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum kernel_load_data_id { ____Placeholder_kernel_load_data_id } kernel_load_data_id ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;



 int FUNC_1 () ;
 int VAR_6 ;
 int FUNC_2 () ;
 int FUNC_3 (char*) ;

int FUNC_4(enum kernel_load_data_id VAR_7)
{
 bool VAR_8, VAR_9;

 VAR_8 =
  (VAR_6 & VAR_2) == VAR_2;

 switch (VAR_7) {
 case 129:
  if (FUNC_0(VAR_0)
      && FUNC_1()) {
   FUNC_3("impossible to appraise a kernel image without a file descriptor; try using kexec_file_load syscall.\n");
   return -VAR_1;
  }

  if (VAR_8 && (VAR_6 & VAR_4)) {
   FUNC_3("impossible to appraise a kernel image without a file descriptor; try using kexec_file_load syscall.\n");
   return -VAR_1;
  }
  break;
 case 130:
  if (VAR_8 && (VAR_6 & VAR_3)) {
   FUNC_3("Prevent firmware sysfs fallback loading.\n");
   return -VAR_1;
  }
  break;
 case 128:
  VAR_9 = FUNC_2();

  if (VAR_8 && (!VAR_9
        && (VAR_6 & VAR_5))) {
   FUNC_3("impossible to appraise a module without a file descriptor. sig_enforce kernel parameter might help\n");
   return -VAR_1;
  }
 default:
  break;
 }
 return 0;
}
