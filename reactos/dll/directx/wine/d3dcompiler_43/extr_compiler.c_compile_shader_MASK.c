
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct target_info {int type; char sm_major; char sm_minor; int support; } ;
struct bwriter_shader {int dummy; } ;
typedef enum shader_type { ____Placeholder_shader_type } shader_type ;
typedef int ID3DBlob ;
typedef int HRESULT ;
typedef char DWORD ;


 int FUNC_0 (char,int **) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*,...) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 () ;
 int FUNC_5 (int ,int ,char*) ;
 char* FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int VAR_2 ;
 int FUNC_8 (struct bwriter_shader*) ;
 int FUNC_9 (struct bwriter_shader*,int,char**,char*) ;
 int FUNC_10 (char*,...) ;
 int FUNC_11 (char const*) ;
 struct target_info* FUNC_12 (char const*) ;
 int FUNC_13 (char*,char const*,char) ;
 struct bwriter_shader* FUNC_14 (char const*,int,char,char,char const*,char**) ;
 char FUNC_15 (char const*) ;

__attribute__((used)) static HRESULT FUNC_16(const char *VAR_3, const char *VAR_4, const char *VAR_5,
        ID3DBlob **VAR_6, ID3DBlob **VAR_7)
{
    struct bwriter_shader *VAR_8;
    char *VAR_9 = ((void*)0);
    HRESULT VAR_10;
    DWORD *VAR_11, VAR_12, VAR_13, VAR_14;
    ID3DBlob *VAR_15;
    char *VAR_16;
    enum shader_type VAR_17;
    const struct target_info *VAR_18;

    FUNC_10("Preprocessed shader source: %s\n", FUNC_11(VAR_3));

    FUNC_10("Checking compilation target %s\n", FUNC_11(VAR_4));
    VAR_18 = FUNC_12(VAR_4);
    if (!VAR_18)
    {
        FUNC_3("Unknown compilation target %s\n", FUNC_11(VAR_4));
        return VAR_0;
    }
    else
    {
        if (!VAR_18->support)
        {
            FUNC_3("Compilation target %s not yet supported\n", FUNC_11(VAR_4));
            return VAR_0;
        }
        else
        {
            VAR_17 = VAR_18->type;
            VAR_13 = VAR_18->sm_major;
            VAR_14 = VAR_18->sm_minor;
        }
    }

    VAR_8 = FUNC_14(VAR_3, VAR_17, VAR_13, VAR_14, VAR_5, &VAR_9);

    if (VAR_9)
    {
        FUNC_10("Compiler messages:\n");
        FUNC_10("%s\n", FUNC_11(VAR_9));

        FUNC_10("Shader source:\n");
        FUNC_10("%s\n", FUNC_11(VAR_3));

        if (VAR_7)
        {
            const char *VAR_19 = *VAR_7 ? FUNC_6(*VAR_7) : ((void*)0);

            VAR_12 = FUNC_15(VAR_9) + (VAR_19 ? FUNC_15(VAR_19) : 0) + 1;
            VAR_10 = FUNC_0(VAR_12, &VAR_15);
            if (FUNC_2(VAR_10))
            {
                FUNC_5(FUNC_4(), 0, VAR_9);
                if (VAR_8) FUNC_8(VAR_8);
                return VAR_10;
            }
            VAR_16 = FUNC_6(VAR_15);
            if (VAR_19)
            {
                FUNC_13(VAR_16, VAR_19, FUNC_15(VAR_19) + 1);
                VAR_16 += FUNC_15(VAR_19);
            }
            FUNC_13(VAR_16, VAR_9, FUNC_15(VAR_9) + 1);

            if (*VAR_7) FUNC_7(*VAR_7);
            *VAR_7 = VAR_15;
        }
        FUNC_5(FUNC_4(), 0, VAR_9);
    }

    if (!VAR_8)
    {
        FUNC_1("HLSL shader parsing failed.\n");
        return VAR_1;
    }

    VAR_10 = FUNC_9(VAR_8, 9, &VAR_11, &VAR_12);
    FUNC_8(VAR_8);
    if (FUNC_2(VAR_10))
    {
        FUNC_1("SlWriteBytecode failed with error 0x%08x.\n", VAR_10);
        return VAR_1;
    }

    if (VAR_6)
    {
        VAR_10 = FUNC_0(VAR_12, &VAR_15);
        if (FUNC_2(VAR_10))
        {
            FUNC_5(FUNC_4(), 0, VAR_11);
            return VAR_10;
        }
        FUNC_13(FUNC_6(VAR_15), VAR_11, VAR_12);
        *VAR_6 = VAR_15;
    }

    FUNC_5(FUNC_4(), 0, VAR_11);

    return VAR_2;
}
