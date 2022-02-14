
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hlsl_type {int dummy; } ;
struct hlsl_scope {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 int FUNC_0 (struct hlsl_scope*,struct hlsl_type*) ;
 int FUNC_1 (char*) ;
 struct hlsl_type* FUNC_2 (int ,int ,unsigned int,int,int) ;
 int FUNC_3 (char*,char*,char const* const,...) ;

__attribute__((used)) static void FUNC_4(struct hlsl_scope *VAR_11)
{
    struct hlsl_type *VAR_12;
    unsigned int VAR_13, VAR_14, VAR_15;
    static const char * const VAR_16[] =
    {
        "float",
        "half",
        "double",
        "int",
        "uint",
        "bool",
    };
    char VAR_17[10];

    for (VAR_15 = 0; VAR_15 <= VAR_6; ++VAR_15)
    {
        for (VAR_14 = 1; VAR_14 <= 4; ++VAR_14)
        {
            for (VAR_13 = 1; VAR_13 <= 4; ++VAR_13)
            {
                FUNC_3(VAR_17, "%s%ux%u", VAR_16[VAR_15], VAR_13, VAR_14);
                VAR_12 = FUNC_2(FUNC_1(VAR_17), VAR_0, VAR_15, VAR_13, VAR_14);
                FUNC_0(VAR_11, VAR_12);

                if (VAR_14 == 1)
                {
                    FUNC_3(VAR_17, "%s%u", VAR_16[VAR_15], VAR_13);
                    VAR_12 = FUNC_2(FUNC_1(VAR_17), VAR_3, VAR_15, VAR_13, VAR_14);
                    FUNC_0(VAR_11, VAR_12);

                    if (VAR_13 == 1)
                    {
                        FUNC_3(VAR_17, "%s", VAR_16[VAR_15]);
                        VAR_12 = FUNC_2(FUNC_1(VAR_17), VAR_2, VAR_15, VAR_13, VAR_14);
                        FUNC_0(VAR_11, VAR_12);
                    }
                }
            }
        }
    }


    VAR_12 = FUNC_2(FUNC_1("DWORD"), VAR_2, VAR_5, 1, 1);
    FUNC_0(VAR_11, VAR_12);
    VAR_12 = FUNC_2(FUNC_1("FLOAT"), VAR_2, VAR_4, 1, 1);
    FUNC_0(VAR_11, VAR_12);
    VAR_12 = FUNC_2(FUNC_1("VECTOR"), VAR_3, VAR_4, 4, 1);
    FUNC_0(VAR_11, VAR_12);
    VAR_12 = FUNC_2(FUNC_1("MATRIX"), VAR_0, VAR_4, 4, 4);
    FUNC_0(VAR_11, VAR_12);
    VAR_12 = FUNC_2(FUNC_1("STRING"), VAR_1, VAR_8, 1, 1);
    FUNC_0(VAR_11, VAR_12);
    VAR_12 = FUNC_2(FUNC_1("TEXTURE"), VAR_1, VAR_9, 1, 1);
    FUNC_0(VAR_11, VAR_12);
    VAR_12 = FUNC_2(FUNC_1("PIXELSHADER"), VAR_1, VAR_7, 1, 1);
    FUNC_0(VAR_11, VAR_12);
    VAR_12 = FUNC_2(FUNC_1("VERTEXSHADER"), VAR_1, VAR_10, 1, 1);
    FUNC_0(VAR_11, VAR_12);
}
