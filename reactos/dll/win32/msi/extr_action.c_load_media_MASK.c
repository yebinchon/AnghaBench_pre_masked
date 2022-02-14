
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef char WCHAR ;
typedef scalar_t__ UINT ;
struct TYPE_7__ {TYPE_1__* db; } ;
struct TYPE_6__ {int storage; } ;
typedef int MSIRECORD ;
typedef TYPE_2__ MSIPACKAGE ;
typedef TYPE_2__* LPVOID ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int *,int) ;
 char* FUNC_1 (int *,int) ;
 scalar_t__ FUNC_2 (TYPE_2__*,scalar_t__,int ,char const*) ;

__attribute__((used)) static UINT FUNC_3( MSIRECORD *VAR_2, LPVOID VAR_3 )
{
    MSIPACKAGE *VAR_4 = VAR_3;
    UINT VAR_5 = FUNC_0( VAR_2, 1 );
    const WCHAR *VAR_6 = FUNC_1( VAR_2, 4 );


    if (!VAR_6 || VAR_6[0] != '#' || VAR_5 >= VAR_1)
        return VAR_0;

    return FUNC_2( VAR_4, VAR_5, VAR_4->db->storage, VAR_6 );
}
