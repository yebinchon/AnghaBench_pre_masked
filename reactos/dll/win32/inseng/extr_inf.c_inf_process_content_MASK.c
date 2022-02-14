
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inf_section {int dummy; } ;
struct inf_file {char* content; } ;
typedef int HRESULT ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 char* FUNC_1 (char**,char**) ;
 int FUNC_2 (struct inf_file*,char*,char*,struct inf_section**) ;
 int FUNC_3 (struct inf_section*,char*) ;
 scalar_t__ FUNC_4 (char*,char) ;

__attribute__((used)) static HRESULT FUNC_5(struct inf_file *VAR_1)
{
    struct inf_section *VAR_2 = ((void*)0);
    char *VAR_3 = VAR_1->content;
    char *VAR_4, *VAR_5;
    HRESULT VAR_6 = VAR_0;

    while (FUNC_0(VAR_6) && (VAR_4 = FUNC_1(&VAR_3, &VAR_5)))
    {
        if (*VAR_4 == '[')
            VAR_6 = FUNC_2(VAR_1, VAR_4, VAR_5, &VAR_2);
        else if (FUNC_4(VAR_4, '=') && VAR_2)
            VAR_6 = FUNC_3(VAR_2, VAR_4);
    }

    return VAR_6;
}
