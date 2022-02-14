
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef char WCHAR ;
typedef scalar_t__ UINT ;
struct TYPE_8__ {int db; } ;
struct TYPE_7__ {int hdr; } ;
typedef TYPE_1__ MSIQUERY ;
typedef TYPE_2__ MSIPACKAGE ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,char const*,TYPE_1__**) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int *,int ,TYPE_2__*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static UINT FUNC_4(MSIPACKAGE *VAR_2)
{
    static const WCHAR VAR_3[] = {
        'S','E','L','E','C','T',' ','*',' ','F','R','O','M',' ',
        '`','I','n','s','t','a','l','l','U','I','S','e','q','u','e','n','c','e','`',' ',
        'W','H','E','R','E',' ','`','S','e','q','u','e','n','c','e','`',' ','>',' ','0',' ',
        'O','R','D','E','R',' ','B','Y',' ','`','S','e','q','u','e','n','c','e','`',0};
    MSIQUERY *VAR_4;
    UINT VAR_5;

    VAR_5 = FUNC_0(VAR_2->db, VAR_3, &VAR_4);
    if (VAR_5 == VAR_0)
    {
        FUNC_2("Running the actions\n");
        VAR_5 = FUNC_1(VAR_4, ((void*)0), VAR_1, VAR_2);
        FUNC_3(&VAR_4->hdr);
    }
    return VAR_5;
}
