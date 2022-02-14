
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_3__ {scalar_t__ uri; } ;
typedef int IUri ;
typedef TYPE_1__ HTMLOuterWindow ;
typedef int HRESULT ;


 int FUNC_0 (scalar_t__,int const*,int,int **,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int const*,int ,int **) ;

HRESULT FUNC_2(HTMLOuterWindow *VAR_2, const WCHAR *VAR_3, IUri **VAR_4)
{
    return VAR_2->uri
        ? FUNC_0(VAR_2->uri, VAR_3, VAR_1|VAR_0, VAR_4, 0)
        : FUNC_1(VAR_3, 0, VAR_4);
}
