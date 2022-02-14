
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ (* lexical_function ) (int const) ;
typedef int WCHAR ;
struct TYPE_3__ {size_t start; size_t end; } ;
typedef int ScriptCache ;
typedef int SCRIPT_ANALYSIS ;
typedef TYPE_1__ IndicSyllable ;
typedef int HDC ;
typedef int BOOL ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int *,int *,int const*,int,int,char*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static BOOL FUNC_1(HDC VAR_3, SCRIPT_ANALYSIS *VAR_4, ScriptCache *VAR_5,
        const WCHAR *VAR_6, const IndicSyllable *VAR_7, lexical_function VAR_8)
{
    if ((VAR_8(VAR_6[VAR_7->start])==VAR_2) && VAR_7->end > VAR_7->start && VAR_8(VAR_6[VAR_7->start+1]) == VAR_1)
        return (FUNC_0(VAR_3, VAR_4, VAR_5, &VAR_6[VAR_7->start], 1, 2, "rphf") > 0);
    return VAR_0;
}
