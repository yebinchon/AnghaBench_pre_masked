
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int bfd_vma ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 int* VAR_2 ;
 size_t* VAR_3 ;
 int* VAR_4 ;

__attribute__((used)) static void
FUNC_0 (bfd_vma VAR_5, int VAR_6)
{
  VAR_3[VAR_1] = VAR_1;
  if (VAR_0)
    {
      VAR_2[VAR_1] = VAR_5;
      VAR_4[VAR_1] = VAR_6;
    }
  else
    {

      VAR_2[VAR_1] = VAR_5 & 0xffffffff;
      VAR_4[VAR_1] = VAR_6 & 0xffffffff;
    }
}
