
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int name; } ;



 int FUNC_0 (int ,char*,char const*,int ) ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static int FUNC_1(int VAR_2, int VAR_3, const void *VAR_4)
{
    switch (VAR_3) {
    case 130:
        FUNC_0(VAR_0, "Attach channel %p to category '%s'\n",
                    VAR_4, VAR_1[VAR_2].name);
        break;
    case 129:
        FUNC_0(VAR_0, "Attach prefix \"%s\" to category '%s'\n",
                    (const char *)VAR_4, VAR_1[VAR_2].name);
        break;
    case 128:
        FUNC_0(VAR_0, "Attach suffix \"%s\" to category '%s'\n",
                    (const char *)VAR_4, VAR_1[VAR_2].name);
        break;
    default:
        break;
    }
    return 1;
}
