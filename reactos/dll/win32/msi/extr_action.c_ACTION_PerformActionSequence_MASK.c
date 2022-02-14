
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef char WCHAR ;
typedef int UINT ;
struct TYPE_10__ {int db; } ;
struct TYPE_9__ {int hdr; } ;
typedef TYPE_1__ MSIRECORD ;
typedef TYPE_2__ MSIPACKAGE ;
typedef int LPCWSTR ;


 int FUNC_0 (TYPE_2__*,int ,int ) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_2 (TYPE_2__*,int ) ;
 TYPE_1__* FUNC_3 (int ,char const*,int ) ;
 int FUNC_4 (TYPE_1__*,int) ;
 int VAR_3 ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (TYPE_2__*) ;

__attribute__((used)) static UINT FUNC_8(MSIPACKAGE *VAR_4, UINT VAR_5)
{
    UINT VAR_6 = VAR_1;
    MSIRECORD *VAR_7;

    static const WCHAR VAR_8[] =
        {'S','E','L','E','C','T',' ','*',' ','F','R','O','M',' ',
         '`','I','n','s','t','a','l','l','E','x','e','c','u','t','e',
         'S','e','q','u','e','n','c','e','`',' ', 'W','H','E','R','E',' ',
         '`','S','e','q','u','e','n','c','e','`',' ', '=',' ','%','i',0};
    static const WCHAR VAR_9[] =
        {'S','E','L','E','C','T',' ','*',' ','F','R','O','M',' ',
     '`','I','n','s','t','a','l','l','U','I','S','e','q','u','e','n','c','e',
     '`', ' ', 'W','H','E','R','E',' ','`','S','e','q','u','e','n','c','e','`',
  ' ', '=',' ','%','i',0};

    if (FUNC_7(VAR_4))
        VAR_7 = FUNC_3(VAR_4->db, VAR_9, VAR_5);
    else
        VAR_7 = FUNC_3(VAR_4->db, VAR_8, VAR_5);

    if (VAR_7)
    {
        LPCWSTR VAR_10, VAR_11;

        FUNC_5("Running the actions\n");


        VAR_11 = FUNC_4(VAR_7, 2);


        if (FUNC_2(VAR_4, VAR_11) == VAR_2)
        {
            FUNC_6(&VAR_7->hdr);
            return VAR_1;
        }

        VAR_10 = FUNC_4(VAR_7, 1);
        if (!VAR_10)
        {
            FUNC_1("failed to fetch action\n");
            FUNC_6(&VAR_7->hdr);
            return VAR_0;
        }

        VAR_6 = FUNC_0(VAR_4, VAR_10, VAR_3);

        FUNC_6(&VAR_7->hdr);
    }

    return VAR_6;
}
