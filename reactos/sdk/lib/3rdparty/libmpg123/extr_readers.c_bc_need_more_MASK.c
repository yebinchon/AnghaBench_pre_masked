
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bufferchain {scalar_t__ firstpos; scalar_t__ pos; scalar_t__ size; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (char*,long,long,long) ;

__attribute__((used)) static ssize_t FUNC_1(struct bufferchain *VAR_1)
{
 FUNC_0("hit end, back to beginning (%li - %li < %li)", (long)VAR_1->size, (long)VAR_1->pos, (long)VAR_1->size);

 VAR_1->pos = VAR_1->firstpos;
 return VAR_0;
}
