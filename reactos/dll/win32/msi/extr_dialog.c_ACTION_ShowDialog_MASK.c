
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef char WCHAR ;
struct TYPE_10__ {int db; } ;
struct TYPE_9__ {int hdr; } ;
typedef TYPE_1__ MSIRECORD ;
typedef TYPE_2__ MSIPACKAGE ;
typedef int INT ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*,int ,TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int,int) ;
 int FUNC_3 (TYPE_1__*,int,char const*) ;
 int FUNC_4 (int ,char const*) ;
 int FUNC_5 (int *) ;

INT FUNC_6( MSIPACKAGE *VAR_2, const WCHAR *VAR_3 )
{
    static const WCHAR VAR_4[] = {'D','i','a','l','o','g',0};
    MSIRECORD *VAR_5;
    INT VAR_6;

    if (!FUNC_4(VAR_2->db, VAR_4)) return 0;

    VAR_5 = FUNC_0(0);
    if (!VAR_5) return -1;
    FUNC_3(VAR_5, 0, VAR_3);
    VAR_6 = FUNC_1(VAR_2, VAR_1, VAR_5);
    FUNC_5(&VAR_5->hdr);

    if (VAR_6 == -2) VAR_6 = 0;

    if (!VAR_6)
    {
        MSIRECORD *VAR_7 = FUNC_0(2);
        if (!VAR_7) return -1;
        FUNC_2(VAR_7, 1, 2726);
        FUNC_3(VAR_7, 2, VAR_3);
        FUNC_1(VAR_2, VAR_0, VAR_7);

        FUNC_5(&VAR_7->hdr);
    }
    return VAR_6;
}
