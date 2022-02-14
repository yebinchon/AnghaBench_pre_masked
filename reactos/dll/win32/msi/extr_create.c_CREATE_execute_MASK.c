
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct tagMSIVIEW {int dummy; } ;
typedef int UINT ;
struct TYPE_3__ {int col_info; int name; int db; int hold; scalar_t__ bIsTemp; } ;
typedef int MSIRECORD ;
typedef TYPE_1__ MSICREATEVIEW ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,TYPE_1__*,int ,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ,int ) ;

__attribute__((used)) static UINT FUNC_3( struct tagMSIVIEW *VAR_3, MSIRECORD *VAR_4 )
{
    MSICREATEVIEW *VAR_5 = (MSICREATEVIEW*)VAR_3;
    BOOL VAR_6 = (VAR_5->bIsTemp) ? VAR_1 : VAR_2;

    FUNC_0("%p Table %s (%s)\n", VAR_5, FUNC_1(VAR_5->name),
          VAR_5->bIsTemp?"temporary":"permanent");

    if (VAR_5->bIsTemp && !VAR_5->hold)
        return VAR_0;

    return FUNC_2( VAR_5->db, VAR_5->name, VAR_5->col_info, VAR_6 );
}
