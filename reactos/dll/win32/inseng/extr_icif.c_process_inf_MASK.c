
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inf_section {int dummy; } ;
struct inf_file {int dummy; } ;
struct ciffile {int name; } ;
typedef int HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (char*,int ,...) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (struct inf_file*,struct inf_section**) ;
 char* FUNC_5 (struct inf_section*) ;
 int FUNC_6 (struct ciffile*,struct inf_section*,char*) ;
 int FUNC_7 (struct ciffile*,struct inf_section*) ;
 scalar_t__ FUNC_8 (char*,char*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (char*,char*,int ) ;

__attribute__((used)) static HRESULT FUNC_12(struct ciffile *VAR_3, struct inf_file *VAR_4)
{
    struct inf_section *VAR_5 = ((void*)0);
    char *VAR_6;
    HRESULT VAR_7 = VAR_2;

    while (FUNC_0(VAR_7) && FUNC_4(VAR_4, &VAR_5))
    {
        VAR_6 = FUNC_5(VAR_5);
        if (!VAR_6) return VAR_1;

        FUNC_1("start processing section %s\n", FUNC_2(VAR_6));

        if (!FUNC_8(VAR_6, "Strings") ||
            !FUNC_11(VAR_6, "Strings.", FUNC_10("Strings.")))
        {

        }
        else if (FUNC_8(VAR_6, "Version") == 0)
            VAR_7 = FUNC_7(VAR_3, VAR_5);
        else
            VAR_7 = FUNC_6(VAR_3, VAR_5, VAR_6);

        FUNC_1("finished processing section %s (%x)\n", FUNC_2(VAR_6), VAR_7);
        FUNC_3(VAR_6);
    }


    if (FUNC_0(VAR_7) && !VAR_3->name)
    {
        VAR_3->name = FUNC_9(VAR_0);
        if (!VAR_3->name) VAR_7 = VAR_1;
    }

    return VAR_7;
}
