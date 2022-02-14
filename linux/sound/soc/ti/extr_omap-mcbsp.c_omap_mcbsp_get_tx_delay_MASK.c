
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct omap_mcbsp {TYPE_1__* pdata; } ;
struct TYPE_2__ {scalar_t__ buffer_size; } ;


 scalar_t__ FUNC_0 (struct omap_mcbsp*,int ) ;
 int VAR_0 ;

__attribute__((used)) static u16 FUNC_1(struct omap_mcbsp *VAR_1)
{
 u16 VAR_2;


 VAR_2 = FUNC_0(VAR_1, VAR_0);


 return VAR_1->pdata->buffer_size - VAR_2;
}
