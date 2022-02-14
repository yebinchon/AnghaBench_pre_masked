
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct list {int dummy; } ;
typedef char WCHAR ;
typedef int HRESULT ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (struct list*,char const*,int,char const*,int) ;

__attribute__((used)) static HRESULT FUNC_2(const WCHAR *VAR_2, struct list *VAR_3)
{
    const WCHAR *VAR_4, *VAR_5, *VAR_6, *VAR_7;
    HRESULT VAR_8;

    VAR_4 = VAR_2;
    while(*VAR_4) {
        if(VAR_4[0] == '\r' && VAR_4[1] == '\n' && !VAR_4[2])
            break;
        for(VAR_6 = VAR_4; *VAR_6 && *VAR_6 != ':' && *VAR_6 != '\r'; VAR_6++);
        if(*VAR_6 != ':')
            return VAR_0;

        VAR_7 = VAR_6+1;
        while(*VAR_7 == ' ')
            VAR_7++;
        if(!*VAR_7)
            return VAR_0;

        for(VAR_5 = VAR_7+1; *VAR_5 && *VAR_5 != '\r'; VAR_5++);

        VAR_8 = FUNC_1(VAR_3, VAR_4, VAR_6-VAR_4, VAR_7, VAR_5-VAR_7);
        if(FUNC_0(VAR_8))
            return VAR_8;

        VAR_4 = VAR_5;
        if(VAR_4[0] == '\r' && VAR_4[1] == '\n')
            VAR_4 += 2;
    }

    return VAR_1;
}
