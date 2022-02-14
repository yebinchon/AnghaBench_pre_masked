
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int bits; int alacarte_link; int nocommon; int char_is_unsigned; int leading_underscore; int seg_size; int include_stack; int include_stack_ptr; int output_type; void* os; void* arch; } ;
typedef TYPE_1__ TCCState ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int ,int *,int *) ;
 int FUNC_1 () ;
 int FUNC_2 (char*,char*,int) ;
 int FUNC_3 (int ,char*,int*,int*,int*) ;
 char* FUNC_4 (int ) ;
 void* FUNC_5 (char const*) ;
 int FUNC_6 (char const*,char*,int) ;
 int FUNC_7 () ;
 int FUNC_8 (TYPE_1__*,char*,char*) ;
 TYPE_1__* FUNC_9 (int) ;
 TYPE_1__* VAR_8 ;

TCCState *FUNC_10(const char *VAR_9, int VAR_10, const char *VAR_11)
{
 TCCState *VAR_12;
 char VAR_13[100];
 int VAR_14, VAR_15, VAR_16;

 if (!VAR_9 || !VAR_11) {
  return ((void*)0);
 }
 FUNC_7 ();
 VAR_12 = FUNC_9 (sizeof(TCCState));
 if (!VAR_12) {
  return ((void*)0);
 }
 VAR_8 = VAR_12;
 VAR_12->arch = FUNC_5 (VAR_9);
 VAR_12->bits = VAR_10;
 VAR_12->os = FUNC_5 (VAR_11);
 VAR_12->output_type = VAR_1;
 FUNC_1 ();
 VAR_12->include_stack_ptr = VAR_12->include_stack;



 FUNC_0 (VAR_5, VAR_0, ((void*)0), ((void*)0));
 FUNC_0 (VAR_4, VAR_0, ((void*)0), ((void*)0));
 FUNC_0 (VAR_3, VAR_0, ((void*)0), ((void*)0));
 FUNC_0 (VAR_6, VAR_0, ((void*)0), ((void*)0));


 FUNC_3 (VAR_2, "%d.%d.%d", &VAR_14, &VAR_15, &VAR_16);
 FUNC_2 (VAR_13, "%d", VAR_14 * 10000 + VAR_15 * 100 + VAR_16);
 FUNC_8 (VAR_12, "__TINYC__", VAR_13);
 FUNC_8 (VAR_12, "__R2TINYC__", VAR_13);


 FUNC_8 (VAR_12, "__STDC__", ((void*)0));
 FUNC_8 (VAR_12, "__STDC_VERSION__", "199901L");
 FUNC_8 (VAR_12, "__STDC_HOSTED__", ((void*)0));


 FUNC_8 (VAR_12, "ut8", "uint8_t");
 FUNC_8 (VAR_12, "ut16", "uint16_t");
 FUNC_8 (VAR_12, "ut32", "uint32_t");
 FUNC_8 (VAR_12, "ut64", "uint64_t");

 FUNC_8 (VAR_12, "st8", "int8_t");
 FUNC_8 (VAR_12, "st16", "int16_t");
 FUNC_8 (VAR_12, "st32", "int32_t");
 FUNC_8 (VAR_12, "st64", "int64_t");


 if (!FUNC_6 (VAR_9, "x86", 3)) {
  if (VAR_10 == 32 || VAR_10 == 16) {
   FUNC_8 (VAR_12, "__i386__", ((void*)0));
   FUNC_8 (VAR_12, "__i386", ((void*)0));
   FUNC_8 (VAR_12, "i386", ((void*)0));
  } else {
   FUNC_8 (VAR_12, "__x86_64__", ((void*)0));
  }
 } else if (!FUNC_6 (VAR_9, "arm", 3)) {
  FUNC_8 (VAR_12, "__ARM_ARCH_4__", ((void*)0));
  FUNC_8 (VAR_12, "__arm_elf__", ((void*)0));
  FUNC_8 (VAR_12, "__arm_elf", ((void*)0));
  FUNC_8 (VAR_12, "arm_elf", ((void*)0));
  FUNC_8 (VAR_12, "__arm__", ((void*)0));
  FUNC_8 (VAR_12, "__arm", ((void*)0));
  FUNC_8 (VAR_12, "arm", ((void*)0));
  FUNC_8 (VAR_12, "__APCS_32__", ((void*)0));
 }



 if (!FUNC_6 (VAR_11, "windows", 7)) {
  FUNC_8 (VAR_12, "__WINDOWS__", ((void*)0));
  if (VAR_10 == 64) {
   FUNC_8 (VAR_12, "_WIN64", ((void*)0));
  }
 } else {
  FUNC_8 (VAR_12, "__unix__", ((void*)0));
  FUNC_8 (VAR_12, "__unix", ((void*)0));
  FUNC_8 (VAR_12, "unix", ((void*)0));

  if (!FUNC_6 (VAR_11, "linux", 5)) {
   FUNC_8 (VAR_12, "__linux__", ((void*)0));
   FUNC_8 (VAR_12, "__linux", ((void*)0));
  }

  if (!FUNC_6 (VAR_11, "freebsd", 7)) {
   FUNC_8 (VAR_12, "__FreeBSD__", "__FreeBSD__");
  }

 }


 if (!FUNC_6 (VAR_11, "windows", 7) && (VAR_10 == 64)) {
  FUNC_8 (VAR_12, "__SIZE_TYPE__", "unsigned long long");
  FUNC_8 (VAR_12, "__PTRDIFF_TYPE__", "long long");
 } else {
  FUNC_8 (VAR_12, "__SIZE_TYPE__", "unsigned long");
  FUNC_8 (VAR_12, "__PTRDIFF_TYPE__", "long");
 }

 if (!FUNC_6 (VAR_11, "windows", 7)) {
  FUNC_8 (VAR_12, "__WCHAR_TYPE__", "unsigned short");
 } else {
  FUNC_8 (VAR_12, "__WCHAR_TYPE__", "int");

  FUNC_8 (VAR_12, "__REDIRECT(name, proto, alias)", "name proto __asm__(#alias)");
  FUNC_8 (VAR_12, "__REDIRECT_NTH(name, proto, alias)", "name proto __asm__(#alias) __THROW");
 }

 VAR_12->alacarte_link = 1;
 VAR_12->nocommon = 1;
 if (!FUNC_6 (VAR_9, "x86", 3)) {

  if (VAR_10 == 32 || VAR_10 == 16) {
   VAR_12->seg_size = 32;
  }
 }
 return VAR_12;
}
