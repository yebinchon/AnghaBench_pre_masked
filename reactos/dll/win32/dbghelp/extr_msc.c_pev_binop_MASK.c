
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pevaluator {int dummy; } ;
typedef int res ;
typedef int DWORD_PTR ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (struct pevaluator*,char*,char) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct pevaluator*,int*) ;
 int FUNC_2 (struct pevaluator*,char*) ;
 int FUNC_3 (char*,int,char*,int) ;

__attribute__((used)) static BOOL FUNC_4(struct pevaluator* VAR_3, char VAR_4)
{
    char VAR_5[VAR_1];
    DWORD_PTR VAR_6, VAR_7, VAR_8;

    if (!FUNC_1(VAR_3, &VAR_6) || !FUNC_1(VAR_3, &VAR_7)) return VAR_0;
    switch (VAR_4)
    {
    case '+': VAR_8 = VAR_6 + VAR_7; break;
    case '-': VAR_8 = VAR_6 - VAR_7; break;
    case '*': VAR_8 = VAR_6 * VAR_7; break;
    case '/': VAR_8 = VAR_6 / VAR_7; break;
    case '%': VAR_8 = VAR_6 % VAR_7; break;
    default: return FUNC_0(VAR_3, "binop: unknown op (%c)", VAR_4);
    }
    FUNC_3(VAR_5, sizeof(VAR_5), "%ld", VAR_8);
    FUNC_2(VAR_3, VAR_5);
    return VAR_2;
}
