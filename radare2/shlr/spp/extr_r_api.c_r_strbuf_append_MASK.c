
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int len; char* buf; char* ptr; int ptrlen; } ;
typedef TYPE_1__ SStrBuf ;


 int FUNC_0 (char*) ;
 char* FUNC_1 (int) ;
 int FUNC_2 (char*,char const*,int) ;
 char* FUNC_3 (char*,int) ;
 int FUNC_4 (char const*) ;

int FUNC_5(SStrBuf *VAR_0, const char *VAR_1) {
 int VAR_2 = FUNC_4 (VAR_1);
 if (VAR_2 < 1) {
  return 0;
 }
 if ((VAR_0->len + VAR_2 + 1) < sizeof (VAR_0->buf)) {
  FUNC_2 (VAR_0->buf + VAR_0->len, VAR_1, VAR_2 + 1);
  FUNC_0 (VAR_0->ptr);
 } else {
  int VAR_3 = VAR_0->len + VAR_2 + 128;
  char *VAR_4 = VAR_0->ptr;
  bool VAR_5 = 1;
  if (!VAR_0->ptr) {
   VAR_4 = FUNC_1 (VAR_3);
   if (VAR_4 && VAR_0->len > 0) {
    FUNC_2 (VAR_4, VAR_0->buf, VAR_0->len);
   }
  } else if (VAR_0->len + VAR_2 + 1 > VAR_0->ptrlen) {
   VAR_4 = FUNC_3 (VAR_0->ptr, VAR_3);
  } else {
   VAR_5 = 0;
  }
  if (VAR_5) {
   if (!VAR_4) return 0;
   VAR_0->ptr = VAR_4;
   VAR_0->ptrlen = VAR_3;
  }
  FUNC_2 (VAR_4 + VAR_0->len, VAR_1, VAR_2 + 1);
 }
 VAR_0->len += VAR_2;
 return 1;
}
