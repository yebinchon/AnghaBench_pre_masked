
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {scalar_t__ len; scalar_t__ alloc; } ;
typedef scalar_t__ ssize_t ;



__attribute__((used)) static inline ssize_t FUNC_0(const struct strbuf *VAR_0) {
 return VAR_0->alloc ? VAR_0->alloc - VAR_0->len - 1 : 0;
}
