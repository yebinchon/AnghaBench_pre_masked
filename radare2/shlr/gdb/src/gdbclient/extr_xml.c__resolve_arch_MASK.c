
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int bits; void* arch; } ;
struct TYPE_5__ {TYPE_1__ target; } ;
typedef TYPE_2__ libgdbr_t ;


 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 int FUNC_0 (char*,char*) ;
 scalar_t__ FUNC_1 (char*,char*) ;
 char* FUNC_2 (char*,char) ;
 char* FUNC_3 (char*,char*) ;

__attribute__((used)) static int FUNC_4(libgdbr_t *VAR_4, char *VAR_5) {
 char *VAR_6;

 VAR_4->target.arch = VAR_2;
 if ((VAR_6 = FUNC_3 (VAR_5, "<architecture"))) {
  if (!(VAR_6 = FUNC_2 (VAR_6, '>'))) {
   return -1;
  }
  VAR_6++;
  if (FUNC_1 (VAR_6, "i386")) {
   VAR_4->target.arch = VAR_3;
   VAR_4->target.bits = 32;
   VAR_6 += 4;
   if (FUNC_1 (VAR_6, ":x86-64")) {
    VAR_4->target.bits = 64;
   }
  } else if (FUNC_1 (VAR_6, "aarch64")) {
   VAR_4->target.arch = VAR_0;
   VAR_4->target.bits = 64;
  } else if (FUNC_1 (VAR_6, "arm")) {
   VAR_4->target.arch = VAR_0;
   VAR_4->target.bits = 32;
  } else if (FUNC_1 (VAR_6, "mips")) {
   VAR_4->target.arch = VAR_1;
   VAR_4->target.bits = 32;
  }

 } else {

  if (FUNC_3 (VAR_5, "com.apple.debugserver.arm64")) {
   VAR_4->target.arch = VAR_0;
   VAR_4->target.bits = 64;
  } else if (FUNC_3 (VAR_5, "org.gnu.gdb.mips")) {

   VAR_4->target.arch = VAR_1;
   VAR_4->target.bits = 32;
  } else if (FUNC_3(VAR_5, "com.apple.debugserver.x86_64")) {
   VAR_4->target.arch = VAR_3;
   VAR_4->target.bits = 64;
  } else {
   FUNC_0 ("Unknown architecture parsing XML (%s)\n", VAR_5);
  }
 }
 return 0;
}
