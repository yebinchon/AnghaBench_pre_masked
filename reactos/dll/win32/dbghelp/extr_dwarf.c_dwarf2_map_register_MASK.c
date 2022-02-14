
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* map_dwarf_register ) (int,int ) ;} ;


 int VAR_0 ;
 int FUNC_0 (char*,int) ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_1 (int,int ) ;

__attribute__((used)) static unsigned FUNC_2(int VAR_3)
{
    if (VAR_3 == VAR_1)
    {
        FUNC_0("What the heck map reg 0x%x\n",VAR_3);
        return 0;
    }
    return VAR_2->map_dwarf_register(VAR_3, VAR_0);
}
