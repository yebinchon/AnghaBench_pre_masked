
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int caps; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 int FUNC_0 (unsigned int,int ,unsigned int) ;

int FUNC_1(unsigned int VAR_3, unsigned int VAR_4)
{
 int VAR_5;

 if (!(VAR_2.caps & VAR_0))
  return -1;

 VAR_5 = FUNC_0(VAR_3, VAR_1, VAR_4);
 if (VAR_5)
  return VAR_5;
 return 0;
}
