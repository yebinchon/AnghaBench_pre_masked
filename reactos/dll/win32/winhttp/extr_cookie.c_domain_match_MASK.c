
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int const* name; } ;
typedef TYPE_1__ domain_t ;
typedef int WCHAR ;
typedef scalar_t__ BOOL ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,int ,int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int const*) ;
 scalar_t__ FUNC_2 (int const*,int const*) ;
 int FUNC_3 (int const*,int const*) ;

__attribute__((used)) static BOOL FUNC_4( const WCHAR *VAR_2, domain_t *VAR_3, BOOL VAR_4 )
{
    FUNC_0("comparing %s with %s\n", FUNC_1(VAR_2), FUNC_1(VAR_3->name));

    if (VAR_4 && !FUNC_3( VAR_2, VAR_3->name )) return VAR_0;
    else if (!VAR_4 && FUNC_2( VAR_2, VAR_3->name )) return VAR_0;
    return VAR_1;
}
