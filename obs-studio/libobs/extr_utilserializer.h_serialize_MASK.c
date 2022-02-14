
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct serializer {size_t (* write ) (int ,void*,size_t) ;size_t (* read ) (int ,void*,size_t) ;int data; } ;


 size_t FUNC_0 (int ,void*,size_t) ;
 size_t FUNC_1 (int ,void*,size_t) ;

__attribute__((used)) static inline size_t FUNC_2(struct serializer *VAR_0, void *VAR_1, size_t VAR_2)
{
 if (VAR_0) {
  if (VAR_0->write)
   return VAR_0->write(VAR_0->data, VAR_1, VAR_2);
  else if (VAR_0->read)
   return VAR_0->read(VAR_0->data, VAR_1, VAR_2);
 }

 return 0;
}
