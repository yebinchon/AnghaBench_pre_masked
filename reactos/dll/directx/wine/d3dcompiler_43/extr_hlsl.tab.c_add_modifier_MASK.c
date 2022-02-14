
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct YYLTYPE {int first_column; int first_line; } ;
struct TYPE_2__ {int source_file; } ;
typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 TYPE_1__ VAR_3 ;
 int FUNC_1 (int ,int ,int ,int ,char*,...) ;

__attribute__((used)) static DWORD FUNC_2(DWORD VAR_4, DWORD VAR_5, const struct YYLTYPE *VAR_6)
{
    if (VAR_4 & VAR_5)
    {
        FUNC_1(VAR_3.source_file, VAR_6->first_line, VAR_6->first_column, VAR_0,
                "modifier '%s' already specified", FUNC_0(VAR_5));
        return VAR_4;
    }
    if (VAR_5 & (VAR_2 | VAR_1)
            && VAR_4 & (VAR_2 | VAR_1))
    {
        FUNC_1(VAR_3.source_file, VAR_6->first_line, VAR_6->first_column, VAR_0,
                "more than one matrix majority keyword");
        return VAR_4;
    }
    return VAR_4 | VAR_5;
}
