
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct buffer_ext {size_t max_sz; size_t cur_pos; void* data; } ;


 size_t VAR_0 ;
 int FUNC_0 (void*,void*,size_t) ;
 void* FUNC_1 (void*,size_t) ;

__attribute__((used)) static inline int
FUNC_2(struct buffer_ext *VAR_1, void *VAR_2, size_t VAR_3)
{
 void *VAR_4;
 size_t VAR_5 = VAR_1->max_sz;

retry:
 if ((VAR_1->cur_pos + VAR_3) < VAR_5) {
  FUNC_0(VAR_1->data + VAR_1->cur_pos, VAR_2, VAR_3);
  VAR_1->cur_pos += VAR_3;
  return 0;
 }

 if (!VAR_5)
  VAR_5 = VAR_0;
 else
  VAR_5 <<= 1;

 VAR_4 = FUNC_1(VAR_1->data, VAR_5);
 if (!VAR_4)
  return -1;

 VAR_1->data = VAR_4;
 VAR_1->max_sz = VAR_5;

 goto retry;
}
