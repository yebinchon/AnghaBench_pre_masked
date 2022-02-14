
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct temp_file {int handle; int name; } ;
struct TYPE_4__ {int (* open ) (int ,int,int,int*,int ) ;int pv; int (* gettemp ) (int ,int ,int ) ;} ;
typedef TYPE_1__ FCI_Int ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (TYPE_1__*,int ,int) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int,int,int*,int ) ;

__attribute__((used)) static BOOL FUNC_3( FCI_Int *VAR_11, struct temp_file *VAR_12 )
{
    int VAR_13;

    if (!VAR_11->gettemp( VAR_12->name, VAR_0, VAR_11->pv ))
    {
        FUNC_0( VAR_11, VAR_3, VAR_1 );
        return VAR_2;
    }
    if ((VAR_12->handle = VAR_11->open( VAR_12->name, VAR_8 | VAR_6 | VAR_7 | VAR_5,
                                   VAR_9 | VAR_10, &VAR_13, VAR_11->pv )) == -1)
    {
        FUNC_0( VAR_11, VAR_3, VAR_13 );
        return VAR_2;
    }
    return VAR_4;
}
