
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bwriter_shader {int dummy; } ;
typedef enum shader_type { ____Placeholder_shader_type } shader_type ;
typedef int YY_BUFFER_STATE ;
typedef int DWORD ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (int ) ;
 struct bwriter_shader* FUNC_3 (int,int ,int ,char const*,char**) ;

struct bwriter_shader *FUNC_4(const char *VAR_0, enum shader_type VAR_1, DWORD VAR_2, DWORD VAR_3,
        const char *VAR_4, char **VAR_5)
{
    struct bwriter_shader *VAR_6 = ((void*)0);
    YY_BUFFER_STATE VAR_7;

    VAR_7 = FUNC_1(VAR_0);
    FUNC_2(VAR_7);

    VAR_6 = FUNC_3(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);

    FUNC_0(VAR_7);
    return VAR_6;
}
