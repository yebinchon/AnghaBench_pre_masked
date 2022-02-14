
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct buffer {scalar_t__ size; scalar_t__ ptr; } ;


 int FUNC_0 (struct buffer*,int) ;
 int FUNC_1 (scalar_t__,void const*,int) ;

__attribute__((used)) static inline void
FUNC_2(struct buffer *VAR_0, const void * VAR_1, int VAR_2) {
 FUNC_0(VAR_0,VAR_2);
 FUNC_1(VAR_0->ptr + VAR_0->size, VAR_1, VAR_2);
 VAR_0->size += VAR_2;
}
