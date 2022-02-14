
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kbuffer {int flags; } ;


 int VAR_0 ;

__attribute__((used)) static unsigned int FUNC_0(struct kbuffer *VAR_1,
         unsigned int VAR_2)
{
 if (VAR_1->flags & VAR_0)
  return (VAR_2 >> 29) & 3;
 else
  return VAR_2 & 3;
}
