
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct RtfData {int in_text; } ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (struct RtfData*,char const*,int ) ;
 int VAR_1 ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (char const*) ;

__attribute__((used)) static BOOL FUNC_4(struct RtfData* VAR_2, const char* VAR_3)
{
    FUNC_1("%s\n", FUNC_2(VAR_3));
    if (*VAR_3 == '\\' || *VAR_3 == '{') VAR_2->in_text = VAR_0;
    else if (*VAR_3 == '}') VAR_2->in_text = VAR_1;
    return FUNC_0(VAR_2, VAR_3, FUNC_3(VAR_3));
}
