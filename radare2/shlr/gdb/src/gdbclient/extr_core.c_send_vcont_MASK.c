
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int tmp ;
struct TYPE_14__ {int is_valid; } ;
struct TYPE_12__ {int r; int t; int C; int c; int S; int s; } ;
struct TYPE_13__ {TYPE_1__ vcont; int vContSupported; } ;
struct TYPE_15__ {int sock; TYPE_3__ stop_reason; TYPE_2__ stub_features; } ;
typedef TYPE_4__ libgdbr_t ;
struct TYPE_16__ {int valid; } ;


 char* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (TYPE_4__*) ;
 void* FUNC_3 () ;
 int FUNC_4 (void*) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ,char*,int) ;
 int FUNC_7 (TYPE_4__*,int) ;
 TYPE_7__ VAR_2 ;
 int FUNC_8 (TYPE_4__*,char*) ;
 int FUNC_9 (char*,int,char*,char const*,...) ;

int FUNC_10(libgdbr_t *VAR_3, const char *VAR_4, const char *VAR_5) {
 char VAR_6[255] = { 0 };
 int VAR_7 = -1;
 void *VAR_8 = ((void*)0);

 if (!VAR_3) {
  return -1;
 }

 if (!VAR_3->stub_features.vContSupported) {
  VAR_7 = FUNC_9 (VAR_6, sizeof (VAR_6) - 1, "%s", VAR_4);
 } else {
  bool VAR_9 = 0;
  switch (*VAR_4) {
  case 's':
   if (VAR_3->stub_features.vcont.s) {
    VAR_9 = 1;
   }
   break;
  case 'S':
   if (VAR_3->stub_features.vcont.S) {
    VAR_9 = 1;
   }
   break;
  case 'c':
   if (VAR_3->stub_features.vcont.c) {
    VAR_9 = 1;
   }
   break;
  case 'C':
   if (VAR_3->stub_features.vcont.C) {
    VAR_9 = 1;
   }
   break;
  case 't':
   if (VAR_3->stub_features.vcont.t) {
    VAR_9 = 1;
   }
   break;
  case 'r':
   if (VAR_3->stub_features.vcont.r) {
    VAR_9 = 1;
   }
   break;
  }
  if (VAR_9) {
   if (!VAR_5) {
    VAR_7 = FUNC_9 (VAR_6, sizeof (VAR_6) - 1, "%s;%s", VAR_0, VAR_4);
   } else {
    VAR_7 = FUNC_9 (VAR_6, sizeof (VAR_6) - 1, "%s;%s:%s", VAR_0, VAR_4, VAR_5);
   }
  } else {
   VAR_7 = FUNC_9 (VAR_6, sizeof (VAR_6) - 1, "%s", VAR_4);
  }
 }
 if (VAR_7 < 0) {
  return VAR_7;
 }

 if (!FUNC_0 (VAR_3)) {
  goto end;
 }
 VAR_2.valid = 0;
 VAR_3->stop_reason.is_valid = 0;
 VAR_7 = FUNC_8 (VAR_3, VAR_6);
 if (VAR_7 < 0) {
  return VAR_7;
 }

 VAR_8 = FUNC_3 ();
 while ((VAR_7 = FUNC_7 (VAR_3, 1)) < 0 && !VAR_1 && FUNC_5 (VAR_3->sock));
 if (VAR_1) {
  VAR_1 = 0;

  FUNC_6 (VAR_3->sock, "\x03", 1);

  if (FUNC_7 (VAR_3, 0) < 0) {
   VAR_7 = -1;
   goto end;
  }
 }

 VAR_7 = FUNC_2 (VAR_3);
end:
 FUNC_4 (VAR_8);
 FUNC_1 (VAR_3);
 return VAR_7;
}
