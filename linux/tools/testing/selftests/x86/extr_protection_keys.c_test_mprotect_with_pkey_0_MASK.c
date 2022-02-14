
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_3__ {long size; int prot; } ;


 long VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int*,long,int,int ) ;
 TYPE_1__* VAR_1 ;

void FUNC_2(int *VAR_2, u16 VAR_3)
{
 long VAR_4;
 int VAR_5;

 FUNC_0(VAR_1);
 VAR_4 = VAR_1->size;






 if (VAR_4 >= VAR_0)
  VAR_4 = VAR_0;
 VAR_5 = VAR_1->prot;


 FUNC_1(VAR_2, VAR_4, VAR_5, 0);


 FUNC_1(VAR_2, VAR_4, VAR_5, VAR_3);
}
