
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_5__ {scalar_t__ wProcessorArchitecture; } ;
struct TYPE_6__ {TYPE_1__ s; } ;
struct TYPE_7__ {TYPE_2__ u; } ;
typedef TYPE_3__ SYSTEM_INFO ;


 int FUNC_0 (TYPE_3__*) ;
 scalar_t__ VAR_0 ;
 int const* VAR_1 ;
 int const* VAR_2 ;

__attribute__((used)) static const WCHAR *FUNC_1(void)
{
    SYSTEM_INFO VAR_3;
    FUNC_0( &VAR_3 );
    if (VAR_3.u.s.wProcessorArchitecture == VAR_0) return VAR_2;
    return VAR_1;
}
