
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct temp_file {int handle; int name; } ;
struct TYPE_4__ {int (* close ) (int,int*,int ) ;int (* delete ) (int ,int*,int ) ;int pv; } ;
typedef TYPE_1__ FCI_Int ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,int ,int) ;
 int FUNC_1 (int,int*,int ) ;
 int FUNC_2 (int ,int*,int ) ;

__attribute__((used)) static BOOL FUNC_3( FCI_Int *VAR_3, struct temp_file *VAR_4 )
{
    int VAR_5;

    if (VAR_4->handle == -1) return VAR_2;
    if (VAR_3->close( VAR_4->handle, &VAR_5, VAR_3->pv ) == -1)
    {
        FUNC_0( VAR_3, VAR_1, VAR_5 );
        return VAR_0;
    }
    VAR_4->handle = -1;
    if (VAR_3->delete( VAR_4->name, &VAR_5, VAR_3->pv ) == -1)
    {
        FUNC_0( VAR_3, VAR_1, VAR_5 );
        return VAR_0;
    }
    return VAR_2;
}
