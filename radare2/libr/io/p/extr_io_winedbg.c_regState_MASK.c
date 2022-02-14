
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* ut32 ;
struct winedbg_x86_32 {void* edi; void* esi; void* edx; void* ecx; void* ebx; void* eax; void* eflags; void* ebp; void* esp; void* eip; int member_0; } ;


 int FUNC_0 (char*) ;
 char* FUNC_1 (char*) ;
 int FUNC_2 (char*,char*,void**,void**,...) ;
 char* FUNC_3 (char*,char*) ;

__attribute__((used)) static struct winedbg_x86_32 FUNC_4() {
 struct winedbg_x86_32 VAR_0 = {0};
 char *VAR_1 = FUNC_1 ("info reg");
 if (VAR_1) {
  char *VAR_2 = FUNC_3 (VAR_1, "EIP:");
  if (VAR_2) {
   ut32 VAR_3, VAR_4, VAR_5, VAR_6;
   (void)FUNC_2 (VAR_2, "EIP:%08x ESP:%08x EBP:%08x EFLAGS:%08x",
    &VAR_3, &VAR_4, &VAR_5, &VAR_6);
   VAR_0.eip = VAR_3;
   VAR_0.esp = VAR_4;
   VAR_0.ebp = VAR_5;
   VAR_0.eflags = VAR_6;
   VAR_2 = FUNC_3 (VAR_2, "EAX:");
   if (VAR_2) {
    ut32 VAR_7, VAR_8, VAR_9, VAR_10;
    (void)FUNC_2 (VAR_2, "EAX:%08x EBX:%08x ECX:%08x EDX:%08x",
     &VAR_7, &VAR_8, &VAR_9, &VAR_10);
    VAR_0.eax = VAR_7;
    VAR_0.ebx = VAR_8;
    VAR_0.ecx = VAR_9;
    VAR_0.edx = VAR_10;
    VAR_2 = FUNC_3 (VAR_2, "ESI:");
    if (VAR_2) {
     ut32 VAR_11, VAR_12;
     (void)FUNC_2 (VAR_2, "ESI:%08x EDI:%08x", &VAR_11, &VAR_12);
     VAR_0.esi = VAR_11;
     VAR_0.edi = VAR_12;
    }
   }
  }
  FUNC_0 (VAR_1);
 }
 return VAR_0;
}
