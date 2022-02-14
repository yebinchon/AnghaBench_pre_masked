
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int encoding; int const* encoding_name; } ;
typedef TYPE_1__ xmlwriteroutput ;
typedef int WCHAR ;


 int const* FUNC_0 (int ) ;

__attribute__((used)) static const WCHAR *FUNC_1(xmlwriteroutput *VAR_0)
{
    if (VAR_0->encoding_name)
        return VAR_0->encoding_name;

    return FUNC_0(VAR_0->encoding);
}
