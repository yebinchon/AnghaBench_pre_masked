
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct parser {char* cmd; size_t idx; int len; } ;
typedef char WCHAR ;


 int FUNC_0 (char*) ;

__attribute__((used)) static int FUNC_1( struct parser *VAR_0 )
{
    const WCHAR *VAR_1 = &VAR_0->cmd[VAR_0->idx];
    int VAR_2, VAR_3 = 0;

    for (VAR_2 = 0; VAR_2 < VAR_0->len; VAR_2++)
    {
        if (VAR_1[VAR_2] < '0' || VAR_1[VAR_2] > '9')
        {
            FUNC_0("should only be numbers here!\n");
            break;
        }
        VAR_3 = (VAR_1[VAR_2] - '0') + VAR_3 * 10;
    }
    return VAR_3;
}
