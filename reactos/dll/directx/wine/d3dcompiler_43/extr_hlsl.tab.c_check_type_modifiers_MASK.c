
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct source_location {int col; int line; int file; } ;
typedef int DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ,int ,char*) ;

__attribute__((used)) static BOOL FUNC_1(DWORD VAR_4, struct source_location *VAR_5)
{
    if (VAR_4 & ~VAR_2)
    {
        FUNC_0(VAR_5->file, VAR_5->line, VAR_5->col, VAR_1,
                "modifier not allowed on typedefs");
        return VAR_0;
    }
    return VAR_3;
}
