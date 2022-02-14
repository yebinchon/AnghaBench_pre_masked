
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdsp {int* mixer_matrix; } ;


 unsigned int VAR_0 ;

__attribute__((used)) static int FUNC_0 (struct hdsp *VAR_1, unsigned int VAR_2)
{
 if (VAR_2 >= VAR_0)
  return 0;

 return VAR_1->mixer_matrix[VAR_2];
}
