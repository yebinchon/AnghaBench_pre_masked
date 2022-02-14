
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regsvr_interface {scalar_t__ iid; } ;
typedef int WCHAR ;
typedef scalar_t__ LONG ;
typedef int HRESULT ;
typedef int HKEY ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int *) ;
 scalar_t__ FUNC_3 (int ,int ,int ,int,int *) ;
 int VAR_5 ;
 int FUNC_4 (scalar_t__,int *,int) ;
 int VAR_6 ;

__attribute__((used)) static HRESULT FUNC_5(struct regsvr_interface const *VAR_7)
{
    LONG VAR_8 = VAR_1;
    HKEY VAR_9;

    VAR_8 = FUNC_3(VAR_2, VAR_6, 0,
   VAR_3 | VAR_4, &VAR_9);
    if (VAR_8 == VAR_0) return VAR_5;
    if (VAR_8 != VAR_1) goto error_return;

    for (; VAR_8 == VAR_1 && VAR_7->iid; ++VAR_7) {
 WCHAR VAR_10[39];

 FUNC_4(VAR_7->iid, VAR_10, 39);
 VAR_8 = FUNC_2(VAR_9, VAR_10);
 if (VAR_8 == VAR_0) VAR_8 = VAR_1;
    }

    FUNC_1(VAR_9);
error_return:
    return VAR_8 != VAR_1 ? FUNC_0(VAR_8) : VAR_5;
}
