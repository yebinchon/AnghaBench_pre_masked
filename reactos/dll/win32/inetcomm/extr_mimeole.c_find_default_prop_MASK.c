
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ id; scalar_t__ name; } ;
typedef TYPE_1__ property_t ;


 scalar_t__ FUNC_0 (char const*) ;
 scalar_t__ FUNC_1 (char const*) ;
 int FUNC_2 (char*,scalar_t__,scalar_t__) ;
 TYPE_1__* VAR_0 ;
 int FUNC_3 (char const*,scalar_t__) ;

__attribute__((used)) static const property_t *FUNC_4(const char *VAR_1)
{
    const property_t *VAR_2 = ((void*)0);

    for(VAR_2 = VAR_0; VAR_2->name; VAR_2++)
    {
        if(FUNC_0(VAR_1))
        {
            if(FUNC_1(VAR_1) == VAR_2->id)
            {
                break;
            }
        }
        else if(!FUNC_3(VAR_1, VAR_2->name))
        {
            break;
        }
    }

    if(VAR_2->id)
       FUNC_2("%s: found match with default property id %d\n", VAR_2->name, VAR_2->id);
    else
       VAR_2 = ((void*)0);

    return VAR_2;
}
