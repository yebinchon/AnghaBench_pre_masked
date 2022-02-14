
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ (* PagePrecedes ) (int,int) ;} ;
typedef TYPE_1__* SlruCtl ;


 int FUNC_0 (TYPE_1__*,char*) ;
 scalar_t__ FUNC_1 (int,int) ;

__attribute__((used)) static bool
FUNC_2(SlruCtl VAR_0, char *VAR_1, int VAR_2, void *VAR_3)
{
 int VAR_4 = *(int *) VAR_3;

 if (VAR_0->PagePrecedes(VAR_2, VAR_4))
  FUNC_0(VAR_0, VAR_1);

 return 0;
}
