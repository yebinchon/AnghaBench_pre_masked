
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int jsop_t ;
typedef int compiler_ctx_t ;
typedef int WCHAR ;
struct TYPE_4__ {TYPE_2__* arg; } ;
struct TYPE_6__ {TYPE_1__ u; } ;
struct TYPE_5__ {unsigned int uint; int * bstr; } ;
typedef int HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int *,int const*) ;
 TYPE_3__* FUNC_1 (int *,unsigned int) ;
 unsigned int FUNC_2 (int *,int ) ;

__attribute__((used)) static HRESULT FUNC_3(compiler_ctx_t *VAR_2, jsop_t VAR_3, const WCHAR *VAR_4, unsigned VAR_5)
{
    unsigned VAR_6;
    WCHAR *VAR_7;

    VAR_7 = FUNC_0(VAR_2, VAR_4);
    if(!VAR_7)
        return VAR_0;

    VAR_6 = FUNC_2(VAR_2, VAR_3);
    if(!VAR_6)
        return VAR_0;

    FUNC_1(VAR_2, VAR_6)->u.arg[0].bstr = VAR_7;
    FUNC_1(VAR_2, VAR_6)->u.arg[1].uint = VAR_5;
    return VAR_1;
}
