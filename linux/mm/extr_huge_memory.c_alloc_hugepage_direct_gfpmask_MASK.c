
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int vm_flags; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_0 (int ,int *) ;
 int VAR_10 ;

__attribute__((used)) static inline gfp_t FUNC_1(struct vm_area_struct *VAR_11)
{
 const bool VAR_12 = !!(VAR_11->vm_flags & VAR_6);


 if (FUNC_0(VAR_2, &VAR_10))
  return VAR_0 | (VAR_12 ? 0 : VAR_9);


 if (FUNC_0(VAR_3, &VAR_10))
  return VAR_1 | VAR_8;


 if (FUNC_0(VAR_4, &VAR_10))
  return VAR_1 |
   (VAR_12 ? VAR_7 :
     VAR_8);


 if (FUNC_0(VAR_5, &VAR_10))
  return VAR_1 |
         (VAR_12 ? VAR_7 : 0);

 return VAR_1;
}
