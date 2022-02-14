
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regsvr_coclass {scalar_t__ viprogid; scalar_t__ progid; scalar_t__ clsid; } ;
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
 scalar_t__ FUNC_2 (int ,scalar_t__) ;
 scalar_t__ FUNC_3 (int ,int *) ;
 scalar_t__ FUNC_4 (int ,int ,int ,int,int *) ;
 int VAR_5 ;
 int FUNC_5 (scalar_t__,int *,int) ;
 int VAR_6 ;

__attribute__((used)) static HRESULT FUNC_6(struct regsvr_coclass const *VAR_7)
{
    LONG VAR_8 = VAR_1;
    HKEY VAR_9;

    VAR_8 = FUNC_4(VAR_2, VAR_6, 0,
   VAR_3 | VAR_4, &VAR_9);
    if (VAR_8 == VAR_0) return VAR_5;
    if (VAR_8 != VAR_1) goto error_return;

    for (; VAR_8 == VAR_1 && VAR_7->clsid; ++VAR_7) {
 WCHAR VAR_10[39];

 FUNC_5(VAR_7->clsid, VAR_10, 39);
 VAR_8 = FUNC_3(VAR_9, VAR_10);
 if (VAR_8 == VAR_0) VAR_8 = VAR_1;
 if (VAR_8 != VAR_1) goto error_close_coclass_key;

 if (VAR_7->progid) {
     VAR_8 = FUNC_2(VAR_2, VAR_7->progid);
     if (VAR_8 == VAR_0) VAR_8 = VAR_1;
     if (VAR_8 != VAR_1) goto error_close_coclass_key;
 }

 if (VAR_7->viprogid) {
     VAR_8 = FUNC_2(VAR_2, VAR_7->viprogid);
     if (VAR_8 == VAR_0) VAR_8 = VAR_1;
     if (VAR_8 != VAR_1) goto error_close_coclass_key;
 }
    }

error_close_coclass_key:
    FUNC_1(VAR_9);
error_return:
    return VAR_8 != VAR_1 ? FUNC_0(VAR_8) : VAR_5;
}
