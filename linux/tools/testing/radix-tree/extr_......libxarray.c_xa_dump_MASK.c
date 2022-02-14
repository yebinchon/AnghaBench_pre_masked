
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xarray {int xa_flags; void* xa_head; } ;
struct TYPE_2__ {unsigned int shift; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,struct xarray const*,void*,int ,int ,int ,int ) ;
 int FUNC_1 (void*,int ,unsigned int) ;
 scalar_t__ FUNC_2 (void*) ;
 int FUNC_3 (struct xarray const*,int ) ;
 TYPE_1__* FUNC_4 (void*) ;

void FUNC_5(const struct xarray *VAR_4)
{
 void *VAR_5 = VAR_4->xa_head;
 unsigned int VAR_6 = 0;

 FUNC_0("xarray: %px head %px flags %x marks %d %d %d\n", VAR_4, VAR_5,
   VAR_4->xa_flags, FUNC_3(VAR_4, VAR_1),
   FUNC_3(VAR_4, VAR_2), FUNC_3(VAR_4, VAR_3));
 if (FUNC_2(VAR_5))
  VAR_6 = FUNC_4(VAR_5)->shift + VAR_0;
 FUNC_1(VAR_5, 0, VAR_6);
}
