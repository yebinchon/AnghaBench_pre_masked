
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket_sendbuffer {int type; size_t sz; void const* buffer; } ;


 void* FUNC_0 (size_t) ;



 size_t VAR_0 ;
 int FUNC_1 (void*,void const*,size_t) ;

__attribute__((used)) static const void *
FUNC_2(struct socket_sendbuffer *VAR_1, size_t *VAR_2) {
 switch (VAR_1->type) {
 case 130:
  *VAR_2 = VAR_1->sz;
  return VAR_1->buffer;
 case 129:
  *VAR_2 = VAR_0;
  return VAR_1->buffer;
 case 128:

  *VAR_2 = VAR_1->sz;
  void * VAR_3 = FUNC_0(*VAR_2);
  FUNC_1(VAR_3, VAR_1->buffer, *VAR_2);
  return VAR_3;
 }

 *VAR_2 = 0;
 return ((void*)0);
}
