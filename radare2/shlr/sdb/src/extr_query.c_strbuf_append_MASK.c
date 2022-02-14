
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int len; int size; char* buf; } ;
typedef TYPE_1__ StrBuf ;


 int FUNC_0 (char*,char const*,int) ;
 char* FUNC_1 (char*,int) ;
 int FUNC_2 (char const*) ;

__attribute__((used)) static StrBuf* FUNC_3(StrBuf *VAR_0, const char *VAR_1, const int VAR_2) {
 if (!VAR_0 || !VAR_1 || VAR_2 < 0) {
  return VAR_0;
 }
 int VAR_3 = FUNC_2 (VAR_1);
 if ((VAR_0->len + VAR_3 + 2) >= VAR_0->size) {
  int VAR_4 = VAR_0->size + VAR_3 + 256;
  char *VAR_5 = FUNC_1 (VAR_0->buf, VAR_4);

  if (!VAR_5) {
   return ((void*)0);
  }
  VAR_0->buf = VAR_5;
  VAR_0->size = VAR_4;
 }
 if (VAR_0->buf && VAR_1) {
  FUNC_0 (VAR_0->buf + VAR_0->len, VAR_1, VAR_3);
  VAR_0->len += VAR_3;
 }






 if (VAR_0->buf) {
  VAR_0->buf[VAR_0->len] = 0;
 }
 return VAR_0;
}
