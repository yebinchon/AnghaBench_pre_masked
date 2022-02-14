
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct table {TYPE_1__* columns; } ;
struct property {int name; } ;
typedef size_t UINT ;
struct TYPE_2__ {size_t type; } ;
typedef int LONGLONG ;
typedef scalar_t__ HRESULT ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct table const*,int ,size_t*) ;
 scalar_t__ FUNC_1 (struct table const*,size_t,size_t,int *) ;

__attribute__((used)) static HRESULT FUNC_2( const struct table *VAR_2, UINT VAR_3, const struct property *VAR_4,
                             LONGLONG *VAR_5, UINT *VAR_6 )

{
    HRESULT VAR_7;
    UINT VAR_8;

    VAR_7 = FUNC_0( VAR_2, VAR_4->name, &VAR_8 );
    if (VAR_7 != VAR_1)
        return VAR_7;

    *VAR_6 = VAR_2->columns[VAR_8].type & VAR_0;
    return FUNC_1( VAR_2, VAR_3, VAR_8, VAR_5 );
}
