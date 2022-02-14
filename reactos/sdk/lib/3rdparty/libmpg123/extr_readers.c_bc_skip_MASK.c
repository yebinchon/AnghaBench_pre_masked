
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bufferchain {scalar_t__ size; scalar_t__ pos; } ;
typedef scalar_t__ ssize_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct bufferchain*) ;

__attribute__((used)) static ssize_t FUNC_1(struct bufferchain *VAR_1, ssize_t VAR_2)
{
 if(VAR_2 >= 0)
 {
  if(VAR_1->size - VAR_1->pos < VAR_2) return FUNC_0(VAR_1);
  else return VAR_1->pos += VAR_2;
 }
 else return VAR_0;
}
