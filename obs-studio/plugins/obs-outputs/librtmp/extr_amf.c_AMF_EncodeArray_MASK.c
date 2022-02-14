
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int o_num; int * o_props; } ;
typedef TYPE_1__ AMFObject ;


 char* FUNC_0 (int *,char*,char*) ;
 char* FUNC_1 (char*,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ,char*,int) ;

char *
FUNC_3(AMFObject *VAR_2, char *VAR_3, char *VAR_4)
{
    int VAR_5;

    if (VAR_3+4 >= VAR_4)
        return ((void*)0);

    *VAR_3++ = VAR_0;

    VAR_3 = FUNC_1(VAR_3, VAR_4, VAR_2->o_num);

    for (VAR_5 = 0; VAR_5 < VAR_2->o_num; VAR_5++)
    {
        char *VAR_6 = FUNC_0(&VAR_2->o_props[VAR_5], VAR_3, VAR_4);
        if (VAR_6 == ((void*)0))
        {
            FUNC_2(VAR_1, "AMF_Encode - failed to encode property in index %d",
                     VAR_5);
            break;
        }
        else
        {
            VAR_3 = VAR_6;
        }
    }






    return VAR_3;
}
