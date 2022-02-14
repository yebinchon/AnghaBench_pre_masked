
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum reg_versions { ____Placeholder_reg_versions } reg_versions ;
typedef char WCHAR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char const*,char const*) ;
 int FUNC_1 (char const*,char const*,int) ;

__attribute__((used)) static enum reg_versions FUNC_2(const WCHAR *VAR_5)
{
    static const WCHAR VAR_6[] = {'R','E','G','E','D','I','T',0};
    static const WCHAR VAR_7[] = {'R','E','G','E','D','I','T','4',0};
    static const WCHAR VAR_8[] = {'W','i','n','d','o','w','s',' ',
                                      'R','e','g','i','s','t','r','y',' ','E','d','i','t','o','r',' ',
                                      'V','e','r','s','i','o','n',' ','5','.','0','0',0};

    while (*VAR_5 == ' ' || *VAR_5 == '\t') VAR_5++;

    if (!FUNC_0(VAR_5, VAR_6))
        return VAR_0;

    if (!FUNC_0(VAR_5, VAR_7))
        return VAR_1;

    if (!FUNC_0(VAR_5, VAR_8))
        return VAR_2;






    if (!FUNC_1(VAR_5, VAR_6, 7))
        return VAR_3;

    return VAR_4;
}
