
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct circlebuf {size_t capacity; int data; } ;


 int FUNC_0 (int ,size_t) ;
 int FUNC_1 (struct circlebuf*,size_t) ;

__attribute__((used)) static inline void FUNC_2(struct circlebuf *VAR_0, size_t VAR_1)
{
 if (VAR_1 <= VAR_0->capacity)
  return;

 VAR_0->data = FUNC_0(VAR_0->data, VAR_1);
 FUNC_1(VAR_0, VAR_1);
 VAR_0->capacity = VAR_1;
}
