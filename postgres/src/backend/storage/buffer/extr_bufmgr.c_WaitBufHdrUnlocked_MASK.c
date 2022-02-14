
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32 ;
struct TYPE_3__ {int state; } ;
typedef int SpinDelayStatus ;
typedef TYPE_1__ BufferDesc ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static uint32
FUNC_4(BufferDesc *VAR_1)
{
 SpinDelayStatus VAR_2;
 uint32 VAR_3;

 FUNC_1(&VAR_2);

 VAR_3 = FUNC_3(&VAR_1->state);

 while (VAR_3 & VAR_0)
 {
  FUNC_2(&VAR_2);
  VAR_3 = FUNC_3(&VAR_1->state);
 }

 FUNC_0(&VAR_2);

 return VAR_3;
}
