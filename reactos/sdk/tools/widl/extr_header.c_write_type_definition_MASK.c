
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int written; scalar_t__ namespace; } ;
typedef TYPE_1__ type_t ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *,scalar_t__) ;
 int FUNC_4 (int *,scalar_t__) ;
 int FUNC_5 (int *,TYPE_1__*,int ,int ) ;

__attribute__((used)) static void FUNC_6(FILE *VAR_3, type_t *VAR_4)
{
    int VAR_5 = VAR_4->namespace && !FUNC_2(VAR_4->namespace);
    int VAR_6 = VAR_4->written;

    if(VAR_5) {
        FUNC_0(VAR_3, "#ifdef __cplusplus\n");
        FUNC_0(VAR_3, "} /* extern \"C\" */\n");
        FUNC_4(VAR_3, VAR_4->namespace);
    }
    FUNC_1(VAR_3, 0);
    FUNC_5(VAR_3, VAR_4, VAR_2, VAR_0);
    FUNC_0(VAR_3, ";\n");
    if(VAR_5) {
        VAR_4->written = VAR_6;
        FUNC_3(VAR_3, VAR_4->namespace);
        FUNC_0(VAR_3, "extern \"C\" {\n");
        FUNC_0(VAR_3, "#else\n");
        FUNC_5(VAR_3, VAR_4, VAR_1, VAR_0);
        FUNC_0(VAR_3, ";\n");
        FUNC_0(VAR_3, "#endif\n\n");
    }
}
