
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct buffer {int size; } ;


 int FUNC_0 (struct buffer*,int) ;

__attribute__((used)) static inline int
FUNC_1(struct buffer *VAR_0) {
 int VAR_1 = VAR_0->size;
 FUNC_0(VAR_0,4);
 VAR_0->size +=4;
 return VAR_1;
}
