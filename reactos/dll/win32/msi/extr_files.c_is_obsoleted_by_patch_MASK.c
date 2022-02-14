
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ disk_id; } ;
struct TYPE_6__ {int db; int patches; } ;
typedef TYPE_1__ MSIPACKAGE ;
typedef TYPE_2__ MSIFILE ;
typedef int BOOL ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_1__*,scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ,int ) ;
 int VAR_3 ;

__attribute__((used)) static BOOL FUNC_3( MSIPACKAGE *VAR_4, MSIFILE *VAR_5 )
{
    if (!FUNC_1( &VAR_4->patches ) && VAR_5->disk_id < VAR_1)
    {
        if (!FUNC_2( VAR_4->db, VAR_3, 0 )) return VAR_0;
        return VAR_2;
    }
    if (FUNC_0( VAR_4, VAR_5->disk_id )) return VAR_2;
    return VAR_0;
}
