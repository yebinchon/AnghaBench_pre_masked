
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_5__ {int tfm; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*,void const*,unsigned int) ;
 TYPE_1__* VAR_0 ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;
 int VAR_1 ;

u32 FUNC_5(u32 VAR_2, const void *VAR_3, unsigned int VAR_4)
{
 FUNC_1(VAR_0, VAR_1);
 u32 VAR_5, *VAR_6 = (u32 *)FUNC_4(VAR_0);
 int VAR_7;

 VAR_0->tfm = VAR_1;
 *VAR_6 = VAR_2;

 VAR_7 = FUNC_3(VAR_0, VAR_3, VAR_4);
 FUNC_0(VAR_7);

 VAR_5 = *VAR_6;
 FUNC_2(VAR_6);
 return VAR_5;
}
