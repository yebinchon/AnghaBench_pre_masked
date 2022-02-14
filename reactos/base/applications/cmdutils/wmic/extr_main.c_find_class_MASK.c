
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_3__ {int const* class; int alias; } ;


 unsigned int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 (int const*,int ) ;

__attribute__((used)) static const WCHAR *FUNC_2( const WCHAR *VAR_1 )
{
    unsigned int VAR_2;

    for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_0); VAR_2++)
    {
        if (!FUNC_1( VAR_1, VAR_0[VAR_2].alias )) return VAR_0[VAR_2].class;
    }
    return ((void*)0);
}
