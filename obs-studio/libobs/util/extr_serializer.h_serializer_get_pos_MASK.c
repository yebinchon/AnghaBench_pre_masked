
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct serializer {int (* get_pos ) (int ) ;int data; } ;
typedef int int64_t ;


 int FUNC_0 (int ) ;

__attribute__((used)) static inline int64_t FUNC_1(struct serializer *VAR_0)
{
 if (VAR_0 && VAR_0->get_pos)
  return VAR_0->get_pos(VAR_0->data);
 return -1;
}
