
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LPCITEMIDLIST ;
typedef scalar_t__ BOOL ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int ,int ,scalar_t__) ;
 int FUNC_2 (char*,int ,int ,scalar_t__) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static BOOL FUNC_3( LPCITEMIDLIST VAR_2, LPCITEMIDLIST VAR_3, BOOL VAR_4 )
{
    FUNC_2("%p %p %d\n", VAR_2, VAR_3, VAR_4 );
    if ( !VAR_3 )
        return VAR_0;
    if (FUNC_0( VAR_3, VAR_2 ) )
        return VAR_1;
    if( VAR_4 && FUNC_1( VAR_3, VAR_2, VAR_0 ) )
        return VAR_1;
    return VAR_0;
}
