
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int WCHAR ;
typedef scalar_t__ UINT ;
struct TYPE_6__ {scalar_t__ num_streams; TYPE_1__* streams; int strings; } ;
struct TYPE_5__ {scalar_t__ str_index; } ;
typedef TYPE_1__ MSISTREAM ;
typedef TYPE_2__ MSIDATABASE ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ,int const*,int,scalar_t__*) ;

__attribute__((used)) static MSISTREAM *FUNC_1( MSIDATABASE *VAR_1, const WCHAR *VAR_2 )
{
    UINT VAR_3, VAR_4, VAR_5;

    VAR_3 = FUNC_0( VAR_1->strings, VAR_2, -1, &VAR_4 );
    if (VAR_3 != VAR_0)
        return ((void*)0);

    for (VAR_5 = 0; VAR_5 < VAR_1->num_streams; VAR_5++)
    {
        if (VAR_1->streams[VAR_5].str_index == VAR_4) return &VAR_1->streams[VAR_5];
    }
    return ((void*)0);
}
