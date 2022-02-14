
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cEnv_t {char* CC; char* JMP; char* OBJCOPY; char* FMT; char* CFLAGS; char* LDFLAGS; char const* TRIPLET; char* TEXT; void* SFLIBPATH; void* SHDR; } ;


 struct cEnv_t* FUNC_0 (int,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (char const*) ;
 scalar_t__ FUNC_4 (char const*) ;
 scalar_t__ FUNC_5 (struct cEnv_t*) ;
 int FUNC_6 (struct cEnv_t*) ;
 char* FUNC_7 () ;
 void* FUNC_8 (char*,char const*,...) ;
 char* FUNC_9 (char*) ;
 void* FUNC_10 (char*) ;
 int FUNC_11 (char const*,char*) ;
 void* FUNC_12 (char*) ;
 int FUNC_13 (char*) ;

__attribute__((used)) static struct cEnv_t* FUNC_14(const char *VAR_0, const char *VAR_1, int VAR_2) {
 struct cEnv_t *VAR_3 = FUNC_0 (1, sizeof (struct cEnv_t));
 bool VAR_4;
 char *VAR_5 = ((void*)0);
 char *VAR_6 = ((void*)0);

 if (!VAR_3) {
  return ((void*)0);
 }

 if (!(VAR_3->CC = FUNC_7())) {
  goto fail;
 }

 VAR_3->SFLIBPATH = FUNC_10 ("SFLIBPATH");
 if (!VAR_3->SFLIBPATH) {
  VAR_6 = FUNC_9 ("r2 -hh | grep INCDIR | awk '{print $2}'");
  if (!VAR_6 || (VAR_6[0] == '\0')) {
   FUNC_1 ("Cannot find SFLIBPATH env var.\n"
       "Please define it, or fix r2 installation.\n");
   goto fail;
  }

  VAR_6[FUNC_13 (VAR_6) - 1] = '\0';
  if (!(VAR_3->SFLIBPATH = FUNC_8 ("%s/sflib", VAR_6))) {
   goto fail;
  }
 }

 VAR_3->JMP = FUNC_4 (VAR_0) ? "b" : "jmp";


 if (FUNC_3 (VAR_1)) {
  VAR_3->OBJCOPY = "gobjcopy";
  VAR_3->FMT = "mach0";
  if (!FUNC_11 (VAR_0, "x86")) {
   if (VAR_2 == 32) {
    VAR_3->CFLAGS = FUNC_12 ("-arch i386 -fPIC -fPIE");
    VAR_3->LDFLAGS = FUNC_12 ("-arch i386 -shared -c -fPIC -fPIE -pie");
   } else {
    VAR_3->CFLAGS = FUNC_12 ("-arch x86_64 -fPIC -fPIE");
    VAR_3->LDFLAGS = FUNC_12 ("-arch x86_64 -shared -c -fPIC -fPIE -pie");
   }
  } else {
   VAR_3->CFLAGS = FUNC_12 ("-shared -c -fPIC -pie -fPIE");
   VAR_3->LDFLAGS = FUNC_12 ("-shared -c -fPIC -pie -fPIE");
  }
  VAR_3->SHDR = FUNC_8 ("\n.text\n%s _main\n", VAR_3->JMP);
 } else {
  VAR_3->OBJCOPY = "objcopy";
  VAR_3->FMT = "elf";
  VAR_3->SHDR = FUNC_8 ("\n.section .text\n.globl  main\n"
       "// .type   main, @function\n%s main\n", VAR_3->JMP);
  if (!FUNC_11 (VAR_0, "x86")) {
   if (VAR_2 == 32) {
    VAR_3->CFLAGS = FUNC_12 ("-fPIC -fPIE -pie -fpic -m32");
    VAR_3->LDFLAGS = FUNC_12 ("-fPIC -fPIE -pie -fpic -m32");
   } else {
    VAR_3->CFLAGS = FUNC_12 ("-fPIC -fPIE -pie -fpic -m64");
    VAR_3->LDFLAGS = FUNC_12 ("-fPIC -fPIE -pie -fpic -m64");
   }
  } else {
   VAR_3->CFLAGS = FUNC_12 ("-fPIC -fPIE -pie -fpic -nostartfiles");
   VAR_3->LDFLAGS = FUNC_12 ("-fPIC -fPIE -pie -fpic -nostartfiles");
  }
 }

 VAR_3->TRIPLET = FUNC_8 ("%s-%s-%d", VAR_1, VAR_0, VAR_2);

 if (!FUNC_11 (VAR_1, "windows")) {
  VAR_3->TEXT = ".text";
  VAR_3->FMT = "pe";
 } else if (FUNC_3(VAR_1)) {

  VAR_3->TEXT = "0..__text";
 } else {
  VAR_3->TEXT = ".text";
 }

 VAR_4 = 0;
 if (!FUNC_11 (VAR_3->TRIPLET, "darwin-arm-64")) {
  FUNC_2 (VAR_3->CC);
  VAR_3->CC = FUNC_12 ("xcrun --sdk iphoneos gcc -arch arm64 -miphoneos-version-min=0.0");
  VAR_4 = 1;
  VAR_3->TEXT = "0.__TEXT.__text";
 } else if (!FUNC_11 (VAR_3->TRIPLET, "darwin-arm-32")) {
  FUNC_2 (VAR_3->CC);
  VAR_3->CC = FUNC_12 ("xcrun --sdk iphoneos gcc -arch armv7 -miphoneos-version-min=0.0");
  VAR_4 = 1;
  VAR_3->TEXT = "0.__TEXT.__text";
 }

 VAR_5 = FUNC_8 ("%s -fno-stack-protector -nostdinc -include '%s'/'%s'/sflib.h",
     VAR_3->CFLAGS, VAR_3->SFLIBPATH, VAR_3->TRIPLET);
 if (!VAR_5) {
  goto fail;
 }
 FUNC_2 (VAR_3->CFLAGS);
 VAR_3->CFLAGS = FUNC_12 (VAR_5);

 if (VAR_4) {
  FUNC_2 (VAR_5);
  VAR_5 = FUNC_8 ("%s -fomit-frame-pointer"
      " -fno-zero-initialized-in-bss", VAR_3->CFLAGS);
  if (!VAR_5) {
   goto fail;
  }
  FUNC_2 (VAR_3->CFLAGS);
  VAR_3->CFLAGS = FUNC_12 (VAR_5);
 } else {
  FUNC_2 (VAR_5);
  VAR_5 = FUNC_8 ("%s -z execstack -fomit-frame-pointer"
    " -finline-functions -fno-zero-initialized-in-bss", VAR_3->CFLAGS);
  if (!VAR_5) {
   goto fail;
  }
  FUNC_2 (VAR_3->CFLAGS);
  VAR_3->CFLAGS = FUNC_12 (VAR_5);
 }
 FUNC_2 (VAR_5);
 VAR_5 = FUNC_8 ("%s -nostdlib", VAR_3->LDFLAGS);
 if (!VAR_5) {
  goto fail;
 }
 FUNC_2 (VAR_3->LDFLAGS);
 VAR_3->LDFLAGS = FUNC_12 (VAR_5);

 if (FUNC_5 (VAR_3)) {
  FUNC_1 ("Error with cEnv allocation!\n");
  goto fail;
 }

 FUNC_2 (VAR_5);
 FUNC_2 (VAR_6);
 return VAR_3;

fail:
 FUNC_2 (VAR_5);
 FUNC_2 (VAR_6);
 FUNC_6 (VAR_3);
 return ((void*)0);
}
