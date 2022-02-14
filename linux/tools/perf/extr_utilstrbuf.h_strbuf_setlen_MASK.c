
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {size_t alloc; size_t len; char* buf; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct strbuf*,int ) ;

__attribute__((used)) static inline int FUNC_2(struct strbuf *VAR_0, size_t VAR_1) {
 if (!VAR_0->alloc) {
  int VAR_2 = FUNC_1(VAR_0, 0);
  if (VAR_2)
   return VAR_2;
 }
 FUNC_0(VAR_1 < VAR_0->alloc);
 VAR_0->len = VAR_1;
 VAR_0->buf[VAR_1] = '\0';
 return 0;
}
