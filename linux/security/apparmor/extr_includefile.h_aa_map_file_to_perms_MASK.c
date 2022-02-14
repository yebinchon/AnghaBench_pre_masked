
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct file {int f_flags; int f_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static inline u32 FUNC_0(struct file *VAR_9)
{
 int VAR_10 = VAR_9->f_flags;
 u32 VAR_11 = 0;

 if (VAR_9->f_mode & VAR_2)
  VAR_11 |= VAR_5;
 if (VAR_9->f_mode & VAR_1)
  VAR_11 |= VAR_4;

 if ((VAR_10 & VAR_6) && (VAR_11 & VAR_5))
  VAR_11 = (VAR_11 & ~VAR_5) | VAR_3;

 if (VAR_10 & VAR_8)
  VAR_11 |= VAR_5;
 if (VAR_10 & VAR_7)
  VAR_11 |= VAR_0;

 return VAR_11;
}
