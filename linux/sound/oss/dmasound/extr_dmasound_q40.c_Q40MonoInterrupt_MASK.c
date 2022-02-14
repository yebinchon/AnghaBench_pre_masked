
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int irqreturn_t ;
struct TYPE_2__ {int lock; } ;


 int * VAR_0 ;
 int * VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int VAR_3 ;
 TYPE_1__ VAR_4 ;
 int FUNC_1 (int,int ) ;
 int * VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_7, void *VAR_8)
{
 FUNC_2(&VAR_4.lock);
        if (VAR_6>0){
            *VAR_0=*VAR_5;
     *VAR_1=*VAR_5++;
     VAR_6 --;
     FUNC_1(1,VAR_3);
 }else FUNC_0();
 FUNC_3(&VAR_4.lock);
 return VAR_2;
}
