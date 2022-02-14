
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wined3d_gl_info {int quirks; } ;
typedef int GLuint ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (char*,int,...) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int FUNC_3 (char*,int,...) ;
 int FUNC_4 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_5 (char const**) ;
 int FUNC_6 (int ,int,int *,char*) ;
 int FUNC_7 (int ,int ,int*) ;
 int FUNC_8 (int ,int,int *,char*) ;
 int FUNC_9 (int ,int ,int*) ;
 char* FUNC_10 (int) ;
 int FUNC_11 (char*) ;

void FUNC_12(const struct wined3d_gl_info *VAR_3, GLuint VAR_4, BOOL VAR_5)
{
    int VAR_6 = 0;
    char *VAR_7;

    if (!FUNC_4(VAR_2) && !FUNC_1(VAR_2))
        return;

    if (VAR_5)
        FUNC_2(FUNC_7(VAR_4, VAR_0, &VAR_6));
    else
        FUNC_2(FUNC_9(VAR_4, VAR_0, &VAR_6));



    if (VAR_6 > 1)
    {
        const char *VAR_8, *VAR_9;

        VAR_7 = FUNC_10(VAR_6);




        VAR_7[VAR_6 - 1] = 0;
        if (VAR_5)
            FUNC_2(FUNC_6(VAR_4, VAR_6, ((void*)0), VAR_7));
        else
            FUNC_2(FUNC_8(VAR_4, VAR_6, ((void*)0), VAR_7));

        VAR_8 = VAR_7;
        if (VAR_3->quirks & VAR_1)
        {
            FUNC_3("Info log received from GLSL shader #%u:\n", VAR_4);
            while ((VAR_9 = FUNC_5(&VAR_8))) FUNC_3("    %.*s", (int)(VAR_8 - VAR_9), VAR_9);
        }
        else
        {
            FUNC_0("Info log received from GLSL shader #%u:\n", VAR_4);
            while ((VAR_9 = FUNC_5(&VAR_8))) FUNC_0("    %.*s", (int)(VAR_8 - VAR_9), VAR_9);
        }
        FUNC_11(VAR_7);
    }
}
