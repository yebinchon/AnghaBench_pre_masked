
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int o_num; int * o_props; } ;
typedef TYPE_1__ AMFObject ;


 char* FUNC_0 (int *,char*,char*) ;
 int VAR_0 ;
 char* FUNC_1 (char*,char*,int ) ;
 char* FUNC_2 (char*,char*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ,char*,int) ;

char *
FUNC_4(AMFObject *VAR_3, char *VAR_4, char *VAR_5)
{
    int VAR_6;

    if (VAR_4+4 >= VAR_5)
        return ((void*)0);

    *VAR_4++ = VAR_0;

    VAR_4 = FUNC_2(VAR_4, VAR_5, VAR_3->o_num);

    for (VAR_6 = 0; VAR_6 < VAR_3->o_num; VAR_6++)
    {
        char *VAR_7 = FUNC_0(&VAR_3->o_props[VAR_6], VAR_4, VAR_5);
        if (VAR_7 == ((void*)0))
        {
            FUNC_3(VAR_2, "AMF_Encode - failed to encode property in index %d",
                     VAR_6);
            break;
        }
        else
        {
            VAR_4 = VAR_7;
        }
    }

    if (VAR_4 + 3 >= VAR_5)
        return ((void*)0);

    VAR_4 = FUNC_1(VAR_4, VAR_5, VAR_1);

    return VAR_4;
}
