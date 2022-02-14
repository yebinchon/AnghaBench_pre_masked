
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct file {int f_mode; int f_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static inline u32 FUNC_0(struct file *VAR_7)
{
 u32 VAR_8 = 0;

 if (VAR_7->f_mode & VAR_4)
  VAR_8 |= VAR_2;
 if (VAR_7->f_mode & VAR_5) {
  if (VAR_7->f_flags & VAR_6)
   VAR_8 |= VAR_0;
  else
   VAR_8 |= VAR_3;
 }
 if (!VAR_8) {



  VAR_8 = VAR_1;
 }

 return VAR_8;
}
