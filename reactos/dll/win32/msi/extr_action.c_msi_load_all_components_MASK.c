
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef char WCHAR ;
typedef scalar_t__ UINT ;
struct TYPE_9__ {int db; int components; } ;
struct TYPE_8__ {int hdr; } ;
typedef TYPE_1__ MSIQUERY ;
typedef TYPE_2__ MSIPACKAGE ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (int ,char const*,TYPE_1__**) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int *,int ,TYPE_2__*) ;
 int FUNC_3 (int *) ;
 int VAR_2 ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (int *) ;

UINT FUNC_6( MSIPACKAGE *VAR_3 )
{
    static const WCHAR VAR_4[] = {
        'S','E','L','E','C','T',' ','*',' ','F','R','O','M',' ',
        '`','C','o','m','p','o','n','e','n','t','`',0};
    MSIQUERY *VAR_5;
    UINT VAR_6;

    if (!FUNC_3(&VAR_3->components))
        return VAR_1;

    VAR_6 = FUNC_1( VAR_3->db, VAR_4, &VAR_5 );
    if (VAR_6 != VAR_1)
        return VAR_6;

    if (!FUNC_4( VAR_3 ))
    {
        FUNC_0("can't initialize assembly caches\n");
        FUNC_5( &VAR_5->hdr );
        return VAR_0;
    }

    VAR_6 = FUNC_2(VAR_5, ((void*)0), VAR_2, VAR_3);
    FUNC_5(&VAR_5->hdr);
    return VAR_6;
}
