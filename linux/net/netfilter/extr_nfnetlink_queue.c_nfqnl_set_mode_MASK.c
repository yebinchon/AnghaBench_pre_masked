
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfqnl_instance {unsigned char copy_mode; unsigned int copy_range; int lock; } ;


 int VAR_0 ;



 unsigned int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int
FUNC_2(struct nfqnl_instance *VAR_2,
        unsigned char VAR_3, unsigned int VAR_4)
{
 int VAR_5 = 0;

 FUNC_0(&VAR_2->lock);
 switch (VAR_3) {
 case 129:
 case 130:
  VAR_2->copy_mode = VAR_3;
  VAR_2->copy_range = 0;
  break;

 case 128:
  VAR_2->copy_mode = VAR_3;
  if (VAR_4 == 0 || VAR_4 > VAR_1)
   VAR_2->copy_range = VAR_1;
  else
   VAR_2->copy_range = VAR_4;
  break;

 default:
  VAR_5 = -VAR_0;

 }
 FUNC_1(&VAR_2->lock);

 return VAR_5;
}
