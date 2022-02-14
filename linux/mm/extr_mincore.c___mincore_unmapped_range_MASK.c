
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_area_struct {TYPE_1__* vm_file; } ;
typedef int pgoff_t ;
struct TYPE_2__ {int f_mapping; } ;


 unsigned long VAR_0 ;
 int FUNC_0 (struct vm_area_struct*,unsigned long) ;
 unsigned char FUNC_1 (int ,int ) ;

__attribute__((used)) static int FUNC_2(unsigned long VAR_1, unsigned long VAR_2,
    struct vm_area_struct *VAR_3, unsigned char *VAR_4)
{
 unsigned long VAR_5 = (VAR_2 - VAR_1) >> VAR_0;
 int VAR_6;

 if (VAR_3->vm_file) {
  pgoff_t VAR_7;

  VAR_7 = FUNC_0(VAR_3, VAR_1);
  for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++, VAR_7++)
   VAR_4[VAR_6] = FUNC_1(VAR_3->vm_file->f_mapping, VAR_7);
 } else {
  for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++)
   VAR_4[VAR_6] = 0;
 }
 return VAR_5;
}
