
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inf_section {int dummy; } ;
struct ciffile {int dummy; } ;
typedef int HRESULT ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct ciffile*,struct inf_section*,char const*) ;
 int FUNC_4 (struct ciffile*,struct inf_section*,char const*) ;
 int FUNC_5 (struct inf_section*,char*,char**,char*) ;
 scalar_t__ FUNC_6 (char*,char*) ;

__attribute__((used)) static HRESULT FUNC_7(struct ciffile *VAR_1, struct inf_section *VAR_2, const char *VAR_3)
{
    HRESULT VAR_4;
    char *VAR_5;

    if (!FUNC_5(VAR_2, "SectionType", &VAR_5, "Component"))
        return VAR_0;

    if (!FUNC_6(VAR_5, "Component"))
        VAR_4 = FUNC_3(VAR_1, VAR_2, VAR_3);
    else if (FUNC_6(VAR_5, "Group") == 0)
        VAR_4 = FUNC_4(VAR_1, VAR_2, VAR_3);
    else
        FUNC_0("Don't know how to process %s\n", FUNC_1(VAR_5));

    FUNC_2(VAR_5);
    return VAR_4;
}
