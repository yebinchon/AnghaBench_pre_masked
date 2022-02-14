
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int s; int S; int c; int C; int t; int r; } ;
struct TYPE_11__ {int vContSupported; TYPE_1__ vcont; } ;
struct TYPE_12__ {size_t data_len; char* data; TYPE_2__ stub_features; } ;
typedef TYPE_3__ libgdbr_t ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*) ;
 scalar_t__ FUNC_2 (TYPE_3__*,int) ;
 scalar_t__ FUNC_3 (TYPE_3__*) ;
 scalar_t__ FUNC_4 (TYPE_3__*,char*) ;
 int FUNC_5 (char*) ;
 char* FUNC_6 (char*,char*) ;

int FUNC_7(libgdbr_t *VAR_0) {
 int VAR_1 = -1;
 char *VAR_2 = ((void*)0);

 if (!VAR_0) {
  return -1;
 }

 if (!FUNC_0 (VAR_0)) {
  goto end;
 }
 if (FUNC_4 (VAR_0, "vCont?") < 0 || FUNC_2 (VAR_0, 0) < 0 || FUNC_3 (VAR_0) < 0) {
  VAR_1 = -1;
  goto end;
 }
 if (VAR_0->data_len == 0) {
  VAR_0->stub_features.vContSupported = 0;
  VAR_1 = 0;
  goto end;
 }
 VAR_0->data[VAR_0->data_len] = '\0';
 if (!(VAR_2 = FUNC_6 (VAR_0->data + FUNC_5 ("vCont;"), ";"))) {
  VAR_1 = 0;
  goto end;
 }
 while (VAR_2) {
  switch (*VAR_2) {
  case 's':
   VAR_0->stub_features.vcont.s = 1;
   break;
  case 'S':
   VAR_0->stub_features.vcont.S = 1;
   break;
  case 'c':
   VAR_0->stub_features.vcont.c = 1;
   break;
  case 'C':
   VAR_0->stub_features.vcont.C = 1;
   break;
  case 't':
   VAR_0->stub_features.vcont.t = 1;
   break;
  case 'r':
   VAR_0->stub_features.vcont.r = 1;
   break;
  }
  VAR_0->stub_features.vContSupported = 1;
  VAR_2 = FUNC_6 (((void*)0), ";");
 }

 VAR_1 = 0;
end:
 FUNC_1 (VAR_0);
 return VAR_1;
}
