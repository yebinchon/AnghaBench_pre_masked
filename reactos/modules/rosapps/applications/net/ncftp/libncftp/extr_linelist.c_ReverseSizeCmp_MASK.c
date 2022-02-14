
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ size; } ;
typedef TYPE_1__* FileInfoPtr ;



__attribute__((used)) static int
FUNC_0(const void *VAR_0, const void *VAR_1)
{
 FileInfoPtr *VAR_2, *VAR_3;

 VAR_2 = (FileInfoPtr *) VAR_0;
 VAR_3 = (FileInfoPtr *) VAR_1;
 if ((**VAR_2).size == (**VAR_3).size)
  return (0);
 else if ((**VAR_2).size < (**VAR_3).size)
  return (-1);
 return (1);
}
