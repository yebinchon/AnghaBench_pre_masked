
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef char WCHAR ;
struct TYPE_11__ {int db; } ;
struct TYPE_10__ {int hdr; } ;
typedef TYPE_1__ MSIRECORD ;
typedef TYPE_2__ MSIPACKAGE ;
typedef int LPCWSTR ;
typedef int INT ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*,int ,TYPE_1__*) ;
 TYPE_1__* FUNC_2 (int ,char*,int ) ;
 int FUNC_3 (TYPE_1__*,int) ;
 int FUNC_4 (TYPE_1__*,int,int ) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static INT FUNC_6(MSIPACKAGE *VAR_1, LPCWSTR VAR_2, LPCWSTR VAR_3, LPCWSTR VAR_4)
{
    WCHAR VAR_5[] = {'S','E','L','E','C','T',' ','*',' ','F','R','O','M',' ',
        '`','A','c','t','i','o','n','T','e','x','t','`',' ','W','H','E','R','E',' ',
        '`','A','c','t','i','o','n','`',' ','=',' ','\'','%','s','\'',0};
    MSIRECORD *VAR_6, *VAR_7;
    INT VAR_8;

    VAR_7 = FUNC_2(VAR_1->db, VAR_5, VAR_2);
    if (VAR_7)
    {
        VAR_3 = FUNC_3(VAR_7, 2);
        VAR_4 = FUNC_3(VAR_7, 3);
    }

    VAR_6 = FUNC_0(3);
    if (!VAR_6) return -1;
    FUNC_4(VAR_6, 1, VAR_2);
    FUNC_4(VAR_6, 2, VAR_3);
    FUNC_4(VAR_6, 3, VAR_4);
    VAR_8 = FUNC_1(VAR_1, VAR_0, VAR_6);
    if (VAR_7) FUNC_5(&VAR_7->hdr);
    FUNC_5(&VAR_6->hdr);
    return VAR_8;
}
