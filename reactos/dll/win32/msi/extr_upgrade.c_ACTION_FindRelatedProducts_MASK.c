
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
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,char const*,TYPE_1__**) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int *,int ,TYPE_2__*) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (TYPE_2__*,int ) ;
 int FUNC_6 (int *) ;
 int VAR_2 ;
 int VAR_3 ;

UINT FUNC_7(MSIPACKAGE *VAR_4)
{
    static const WCHAR VAR_5[] = {
        'S','E','L','E','C','T',' ','*',' ','F','R','O','M',' ',
        '`','U','p','g','r','a','d','e','`',0};
    MSIQUERY *VAR_6;
    UINT VAR_7;

    if (FUNC_4(VAR_4->db, VAR_3, 0))
    {
        FUNC_2("Skipping FindRelatedProducts action: product already installed\n");
        return VAR_0;
    }
    if (FUNC_3(VAR_4, VAR_2))
    {
        FUNC_2("Skipping FindRelatedProducts action: already done in UI sequence\n");
        return VAR_0;
    }
    else
        FUNC_5(VAR_4, VAR_2);

    VAR_7 = FUNC_0(VAR_4->db, VAR_5, &VAR_6);
    if (VAR_7 != VAR_0)
        return VAR_0;

    VAR_7 = FUNC_1(VAR_6, ((void*)0), VAR_1, VAR_4);
    FUNC_6(&VAR_6->hdr);
    return VAR_7;
}
