
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef char WCHAR ;
typedef scalar_t__ UINT ;
struct TYPE_8__ {int hdr; } ;
struct TYPE_7__ {int hdr; } ;
typedef TYPE_1__ MSIRECORD ;
typedef TYPE_2__ MSIQUERY ;
typedef int MSIDATABASE ;
typedef int LPCWSTR ;
typedef int BOOL ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,TYPE_2__**,char const*,int ,int ) ;
 scalar_t__ FUNC_1 (TYPE_2__*,int *) ;
 scalar_t__ FUNC_2 (TYPE_2__*,TYPE_1__**) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static BOOL FUNC_4(MSIDATABASE *VAR_2, LPCWSTR VAR_3, LPCWSTR VAR_4)
{
    MSIQUERY *VAR_5;
    MSIRECORD *VAR_6;
    UINT VAR_7;

    static const WCHAR VAR_8[] = {
        'S','E','L','E','C','T',' ','*',' ','F','R','O','M',' ',
        '`','_','C','o','l','u','m','n','s','`',' ','W','H','E','R','E',' ',
        '`','T','a','b','l','e','`','=','\'','%','s','\'',' ','A','N','D',' ',
        '`','N','a','m','e','`','=','\'','%','s','\'',0
    };

    VAR_7 = FUNC_0(VAR_2, &VAR_5, VAR_8, VAR_3, VAR_4);
    if (VAR_7 != VAR_0)
        return VAR_1;

    VAR_7 = FUNC_1(VAR_5, ((void*)0));
    if (VAR_7 != VAR_0)
        goto done;

    VAR_7 = FUNC_2(VAR_5, &VAR_6);
    if (VAR_7 == VAR_0)
        FUNC_3(&VAR_6->hdr);

done:
    FUNC_3(&VAR_5->hdr);
    return (VAR_7 == VAR_0);
}
