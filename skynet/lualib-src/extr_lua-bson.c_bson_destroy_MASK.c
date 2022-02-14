
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bson {scalar_t__ ptr; scalar_t__ buffer; } ;


 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static inline void
FUNC_1(struct bson *VAR_0) {
 if (VAR_0->ptr != VAR_0->buffer) {
  FUNC_0(VAR_0->ptr);
 }
}
