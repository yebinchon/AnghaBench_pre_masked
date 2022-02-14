
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef char WCHAR ;
typedef scalar_t__ UINT ;
struct TYPE_10__ {int db; } ;
struct TYPE_9__ {int hdr; } ;
typedef TYPE_1__ MSIQUERY ;
typedef TYPE_2__ MSIPACKAGE ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*,int *,int ,TYPE_2__*) ;
 scalar_t__ FUNC_1 (int ,TYPE_1__**,char const*) ;
 int FUNC_2 (char*) ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (TYPE_2__*,int ) ;
 int FUNC_4 (TYPE_2__*,int ) ;
 int FUNC_5 (int *) ;
 int VAR_2 ;

UINT FUNC_6(MSIPACKAGE *VAR_3)
{
    static const WCHAR VAR_4[] = {
        'S','E','L','E','C','T',' ','*',' ','F','R','O','M',' ',
        'A','p','p','S','e','a','r','c','h',0};
    MSIQUERY *VAR_5;
    UINT VAR_6;

    if (FUNC_3(VAR_3, VAR_2))
    {
        FUNC_2("Skipping AppSearch action: already done in UI sequence\n");
        return VAR_0;
    }
    else
        FUNC_4(VAR_3, VAR_2);

    VAR_6 = FUNC_1( VAR_3->db, &VAR_5, VAR_4 );
    if (VAR_6 != VAR_0)
        return VAR_0;

    VAR_6 = FUNC_0( VAR_5, ((void*)0), VAR_1, VAR_3 );
    FUNC_5( &VAR_5->hdr );
    return VAR_6;
}
