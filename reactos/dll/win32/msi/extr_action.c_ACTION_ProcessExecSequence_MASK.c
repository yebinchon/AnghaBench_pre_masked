
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef char WCHAR ;
typedef scalar_t__ UINT ;
struct TYPE_8__ {int db; scalar_t__ ExecuteSequenceRun; } ;
struct TYPE_7__ {int hdr; } ;
typedef TYPE_1__ MSIQUERY ;
typedef TYPE_2__ MSIPACKAGE ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_1__*,int *,int ,TYPE_2__*) ;
 scalar_t__ FUNC_1 (int ,TYPE_1__**,char const*) ;
 int FUNC_2 (char*) ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (int ,int ,int *,int) ;
 int FUNC_4 (int *) ;
 int VAR_3 ;

__attribute__((used)) static UINT FUNC_5(MSIPACKAGE *VAR_4)
{
    static const WCHAR VAR_5[] = {
        'S','E','L','E','C','T',' ','*',' ', 'F','R','O','M',' ',
        '`','I','n','s','t','a','l','l','E','x','e','c','u','t','e',
        'S','e','q','u','e','n','c','e','`',' ', 'W','H','E','R','E',' ',
        '`','S','e','q','u','e','n','c','e','`',' ', '>',' ','0',' ',
        'O','R','D','E','R',' ', 'B','Y',' ','`','S','e','q','u','e','n','c','e','`',0};
    MSIQUERY *VAR_6;
    UINT VAR_7;

    if (VAR_4->ExecuteSequenceRun)
    {
        FUNC_2("Execute Sequence already Run\n");
        return VAR_0;
    }

    VAR_4->ExecuteSequenceRun = VAR_2;

    VAR_7 = FUNC_1(VAR_4->db, &VAR_6, VAR_5);
    if (VAR_7 == VAR_0)
    {
        FUNC_2("Running the actions\n");

        FUNC_3( VAR_4->db, VAR_3, ((void*)0), -1 );
        VAR_7 = FUNC_0(VAR_6, ((void*)0), VAR_1, VAR_4);
        FUNC_4(&VAR_6->hdr);
    }
    return VAR_7;
}
