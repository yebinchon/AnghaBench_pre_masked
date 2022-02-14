
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* lbuf; int lbuf_n; int lbuf_s; } ;
typedef TYPE_1__ SppBuf ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (char*,char*,int) ;
 char* FUNC_2 (char*,int) ;
 int VAR_0 ;
 int FUNC_3 (char*) ;

void FUNC_4(SppBuf *VAR_1, char *VAR_2) {
 int VAR_3 = FUNC_3 (VAR_2);
 char *VAR_4;
 if (!VAR_1->lbuf || (VAR_3 + VAR_1->lbuf_n) > VAR_1->lbuf_s) {
  VAR_4 = FUNC_2 (VAR_1->lbuf, VAR_1->lbuf_s << 1);
  if (!VAR_4) {
   FUNC_0 (VAR_0, "Out of memory.\n");
   return;
  }
  VAR_1->lbuf = VAR_4;
 }
 FUNC_1 (VAR_1->lbuf + VAR_1->lbuf_n, VAR_2, VAR_3 + 1);
 VAR_1->lbuf_n += VAR_3;
}
