
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int ut64 ;
struct TYPE_8__ {int num; } ;
struct TYPE_7__ {TYPE_1__* model; } ;
struct TYPE_6__ {char* cmdStrCache; } ;
typedef int RStrBuf ;
typedef TYPE_2__ RPanel ;
typedef TYPE_3__ RCore ;


 scalar_t__ FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *,char*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int *) ;

ut64 FUNC_6(RCore *VAR_1, RPanel *VAR_2, int VAR_3) {
 if (!VAR_2->model->cmdStrCache) {
  return VAR_0;
 }
 RStrBuf *VAR_4 = FUNC_5 (((void*)0));
 char *VAR_5 = VAR_2->model->cmdStrCache;
 int VAR_6 = 0;
 while (FUNC_0 (VAR_5) && VAR_6 != VAR_3) {
  if (*VAR_5 == '\n') {
   VAR_6++;
  }
  VAR_5++;
 }
 while (FUNC_0 (VAR_5) && FUNC_0 (VAR_5 + 1)) {
  if (*VAR_5 == '0' && *(VAR_5 + 1) == 'x') {
   FUNC_2 (VAR_4, VAR_5, 2);
   while (*VAR_5 != ' ') {
    FUNC_2 (VAR_4, VAR_5, 1);
    VAR_5++;
   }
   ut64 VAR_7 = FUNC_1 (VAR_1->num, FUNC_4 (VAR_4));
   FUNC_3 (VAR_4);
   return VAR_7;
  }
  VAR_5++;
 }
 FUNC_3 (VAR_4);
 return VAR_0;
}
