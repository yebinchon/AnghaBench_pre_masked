
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct serializer {size_t (* write ) (int ,void*,size_t) ;int data; } ;


 size_t FUNC_0 (int ,void*,size_t) ;

__attribute__((used)) static inline size_t FUNC_1(struct serializer *VAR_0, const void *VAR_1,
        size_t VAR_2)
{
 if (VAR_0 && VAR_0->write && VAR_1 && VAR_2)
  return VAR_0->write(VAR_0->data, (void *)VAR_1, VAR_2);
 return 0;
}
