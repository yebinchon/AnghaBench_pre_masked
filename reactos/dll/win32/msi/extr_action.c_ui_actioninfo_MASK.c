
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_10__ {int LastActionResult; int db; } ;
struct TYPE_9__ {int hdr; } ;
typedef TYPE_1__ MSIRECORD ;
typedef TYPE_2__ MSIPACKAGE ;
typedef int * LPCWSTR ;
typedef int INT ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*,int ,TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int,int ) ;
 int FUNC_3 (TYPE_1__*,int,int *) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int ,int ) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(MSIPACKAGE *VAR_3, LPCWSTR VAR_4, BOOL VAR_5,
                          INT VAR_6)
{
    MSIRECORD *VAR_7;
    WCHAR *VAR_8;

    VAR_8 = FUNC_5(VAR_3->db, VAR_5 ? VAR_2 : VAR_1);

    VAR_7 = FUNC_0(2);
    if (!VAR_7)
    {
        FUNC_4(VAR_8);
        return;
    }
    FUNC_3(VAR_7, 0, VAR_8);
    FUNC_3(VAR_7, 1, VAR_4);
    FUNC_2(VAR_7, 2, VAR_5 ? VAR_3->LastActionResult : VAR_6);
    FUNC_1(VAR_3, VAR_0, VAR_7);
    FUNC_6(&VAR_7->hdr);
    FUNC_4(VAR_8);
    if (!VAR_5) VAR_3->LastActionResult = VAR_6;
}
