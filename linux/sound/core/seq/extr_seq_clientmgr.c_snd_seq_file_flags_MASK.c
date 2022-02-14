
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {int f_mode; } ;




 unsigned short VAR_0 ;
 unsigned short VAR_1 ;
 unsigned short VAR_2 ;

__attribute__((used)) static inline unsigned short FUNC_0(struct file *VAR_3)
{
        switch (VAR_3->f_mode & (129 | 128)) {
        case 128:
                return VAR_2;
        case 129:
                return VAR_0;
        default:
                return VAR_1;
        }
}
