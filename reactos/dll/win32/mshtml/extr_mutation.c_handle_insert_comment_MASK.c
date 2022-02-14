
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int endifW ;
typedef int WCHAR ;
typedef char PRUnichar ;
typedef int HTMLDocumentNode ;
typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (char const) ;
 scalar_t__ FUNC_2 (char const) ;
 scalar_t__ FUNC_3 (char const*,char const*,int) ;
 int FUNC_4 (char*,char const*,int) ;
 int FUNC_5 (char const*) ;

__attribute__((used)) static PRUnichar *FUNC_6(HTMLDocumentNode *VAR_2, const PRUnichar *VAR_3)
{
    int VAR_4 = 0, VAR_5 = 0;
    const PRUnichar *VAR_6, *VAR_7;
    PRUnichar *VAR_8;
    DWORD VAR_9;

    enum {
        CMP_EQ,
        CMP_LT,
        CMP_LTE,
        CMP_GT,
        CMP_GTE
    } VAR_10 = CMP_EQ;

    static const PRUnichar VAR_11[] = {'<','!','[','e','n','d','i','f',']'};

    if(VAR_3[0] != '[' || VAR_3[1] != 'i' || VAR_3[2] != 'f')
        return ((void*)0);

    VAR_6 = VAR_3+3;
    while(FUNC_2(*VAR_6))
        VAR_6++;

    if(VAR_6[0] == 'l' && VAR_6[1] == 't') {
        VAR_6 += 2;
        if(*VAR_6 == 'e') {
            VAR_10 = CMP_LTE;
            VAR_6++;
        }else {
            VAR_10 = CMP_LT;
        }
    }else if(VAR_6[0] == 'g' && VAR_6[1] == 't') {
        VAR_6 += 2;
        if(*VAR_6 == 'e') {
            VAR_10 = CMP_GTE;
            VAR_6++;
        }else {
            VAR_10 = CMP_GT;
        }
    }

    if(!FUNC_2(*VAR_6++))
        return ((void*)0);
    while(FUNC_2(*VAR_6))
        VAR_6++;

    if(VAR_6[0] != 'I' || VAR_6[1] != 'E')
        return ((void*)0);

    VAR_6 +=2;
    if(!FUNC_2(*VAR_6++))
        return ((void*)0);
    while(FUNC_2(*VAR_6))
        VAR_6++;

    if(!FUNC_1(*VAR_6))
        return ((void*)0);
    while(FUNC_1(*VAR_6))
        VAR_4 = VAR_4*10 + (*VAR_6++ - '0');

    if(*VAR_6 == '.') {
        VAR_6++;
        if(!FUNC_1(*VAR_6))
            return ((void*)0);
        while(FUNC_1(*VAR_6))
            VAR_5 = VAR_5*10 + (*VAR_6++ - '0');
    }

    while(FUNC_2(*VAR_6))
        VAR_6++;
    if(VAR_6[0] != ']' || VAR_6[1] != '>')
        return ((void*)0);
    VAR_6 += 2;

    VAR_9 = FUNC_5(VAR_6);
    if(VAR_9 < sizeof(VAR_11)/sizeof(WCHAR))
        return ((void*)0);

    VAR_7 = VAR_6 + VAR_9-sizeof(VAR_11)/sizeof(WCHAR);
    if(FUNC_3(VAR_7, VAR_11, sizeof(VAR_11)))
        return ((void*)0);

    switch(VAR_10) {
    case CMP_EQ:
        if(VAR_4 == VAR_0 && VAR_5 == VAR_1)
            break;
        return ((void*)0);
    case CMP_LT:
        if(VAR_4 > VAR_0)
            break;
        if(VAR_4 == VAR_0 && VAR_5 > VAR_1)
            break;
        return ((void*)0);
    case CMP_LTE:
        if(VAR_4 > VAR_0)
            break;
        if(VAR_4 == VAR_0 && VAR_5 >= VAR_1)
            break;
        return ((void*)0);
    case CMP_GT:
        if(VAR_4 < VAR_0)
            break;
        if(VAR_4 == VAR_0 && VAR_5 < VAR_1)
            break;
        return ((void*)0);
    case CMP_GTE:
        if(VAR_4 < VAR_0)
            break;
        if(VAR_4 == VAR_0 && VAR_5 <= VAR_1)
            break;
        return ((void*)0);
    }

    VAR_8 = FUNC_0((VAR_7-VAR_6+1)*sizeof(WCHAR));
    if(!VAR_8)
        return ((void*)0);

    FUNC_4(VAR_8, VAR_6, (VAR_7-VAR_6)*sizeof(WCHAR));
    VAR_8[VAR_7-VAR_6] = 0;

    return VAR_8;
}
