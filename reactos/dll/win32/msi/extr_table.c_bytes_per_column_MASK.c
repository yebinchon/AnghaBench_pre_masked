
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_3__ {int type; } ;
typedef int MSIDATABASE ;
typedef TYPE_1__ MSICOLUMNINFO ;


 int FUNC_0 (char*,int) ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_0 ;

__attribute__((used)) static inline UINT FUNC_2( MSIDATABASE *VAR_1, const MSICOLUMNINFO *VAR_2, UINT VAR_3 )
{
    if( FUNC_1(VAR_2->type) )
        return 2;

    if( VAR_2->type & VAR_0 )
        return VAR_3;

    if( (VAR_2->type & 0xff) <= 2)
        return 2;

    if( (VAR_2->type & 0xff) != 4 )
        FUNC_0("Invalid column size %u\n", VAR_2->type & 0xff);

    return 4;
}
