
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (char const*,char*) ;
 int FUNC_2 (void*,int,int,int *) ;
 int FUNC_3 (void*) ;
 int FUNC_4 (int *,long,int ) ;
 int FUNC_5 (int *) ;
 void* FUNC_6 (int) ;
 int FUNC_7 (char*,...) ;

void*
FUNC_8(const char* VAR_2, size_t* VAR_3)
{
    FILE* VAR_4;
    void* VAR_5 = ((void*)0);
    int VAR_6;

    FUNC_7("Loading file...");

    VAR_4 = FUNC_1(VAR_2, "rb");
    if (!VAR_4)
    {
        FUNC_7("Could not open file\n");
        return ((void*)0);
    }

    FUNC_4(VAR_4, 0L, VAR_0);
    VAR_6 = FUNC_5(VAR_4);
    FUNC_4(VAR_4, 0L, VAR_1);
    *VAR_3 = VAR_6;
    FUNC_7("ok. Size is %d\n", VAR_6);

    VAR_5 = FUNC_6(VAR_6 + 1);

    if (VAR_5 != ((void*)0))
    {
        if (VAR_6 != FUNC_2(VAR_5, 1, VAR_6, VAR_4))
        {
            FUNC_3(VAR_5);
            VAR_5 = ((void*)0);
        }
    }
    else
    {
        FUNC_7("Could not allocate memory for file\n");
    }

    FUNC_0(VAR_4);

    return VAR_5;
}
