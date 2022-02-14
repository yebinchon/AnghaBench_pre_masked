
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
 scalar_t__ FUNC_0 (int ,char const*,TYPE_1__**) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static UINT FUNC_4(MSIPACKAGE *VAR_1)
{
    static const WCHAR VAR_2[] = {
        'C','R','E','A','T','E',' ','T','A','B','L','E',' ',
        '`','_','P','r','o','p','e','r','t','y','`',' ','(',' ',
        '`','_','P','r','o','p','e','r','t','y','`',' ',
        'C','H','A','R','(','5','6',')',' ','N','O','T',' ','N','U','L','L',' ',
        'T','E','M','P','O','R','A','R','Y',',',' ',
        '`','V','a','l','u','e','`',' ','C','H','A','R','(','9','8',')',' ',
        'N','O','T',' ','N','U','L','L',' ','T','E','M','P','O','R','A','R','Y',
        ' ','P','R','I','M','A','R','Y',' ','K','E','Y',' ',
        '`','_','P','r','o','p','e','r','t','y','`',')',' ','H','O','L','D',0};
    MSIQUERY *VAR_3;
    UINT VAR_4;

    VAR_4 = FUNC_0(VAR_1->db, VAR_2, &VAR_3);
    if (VAR_4 != VAR_0)
        return VAR_4;

    VAR_4 = FUNC_2(VAR_3, 0);
    FUNC_1(VAR_3);
    FUNC_3(&VAR_3->hdr);
    return VAR_4;
}
