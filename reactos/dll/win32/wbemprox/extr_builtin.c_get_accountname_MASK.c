
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_4__ {int Buffer; } ;
struct TYPE_5__ {TYPE_1__ Name; } ;
typedef TYPE_2__ LSA_TRANSLATED_NAME ;


 int * FUNC_0 (int ) ;

__attribute__((used)) static WCHAR *FUNC_1( LSA_TRANSLATED_NAME *VAR_0 )
{
    if (!VAR_0 || !VAR_0->Name.Buffer) return ((void*)0);
    return FUNC_0( VAR_0->Name.Buffer );
}
