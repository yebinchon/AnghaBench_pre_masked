
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_3__ {int Length; int Buffer; } ;
typedef TYPE_1__ UNICODE_STRING ;
typedef char* LPCSTR ;


 char* FUNC_0 (int ,int) ;

__attribute__((used)) static LPCSTR FUNC_1( const UNICODE_STRING *VAR_0 )
{
    if (!VAR_0) return "(null)";
    return FUNC_0(VAR_0->Buffer, VAR_0->Length / sizeof(WCHAR));
}
