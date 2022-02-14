
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regsvr_coclass {int progid_extra; scalar_t__ name; int * progid; int * viprogid; scalar_t__ ips32_tmodel; scalar_t__ ips32; int * ips; scalar_t__ clsid; } ;
typedef int WCHAR ;
typedef scalar_t__ LONG ;
typedef int HRESULT ;
typedef int HKEY ;
typedef int BYTE ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int *,int ,int *,int ,int,int *,int *,int *) ;
 scalar_t__ FUNC_3 (int ,int *,int ,int ,int const*,scalar_t__) ;
 int VAR_5 ;
 int FUNC_4 (scalar_t__,int *,int) ;
 int * VAR_6 ;
 int * VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 int VAR_9 ;
 scalar_t__ FUNC_6 (int ,int ,int *) ;
 scalar_t__ FUNC_7 (int *,int *,int *,scalar_t__,int ) ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 int * VAR_10 ;
 int VAR_11 ;

__attribute__((used)) static HRESULT FUNC_9(struct regsvr_coclass const *VAR_12)
{
    LONG VAR_13 = VAR_0;
    HKEY VAR_14;

    VAR_13 = FUNC_2(VAR_1, VAR_6, 0, ((void*)0), 0,
     VAR_2 | VAR_3, ((void*)0), &VAR_14, ((void*)0));
    if (VAR_13 != VAR_0) goto error_return;

    for (; VAR_13 == VAR_0 && VAR_12->clsid; ++VAR_12) {
 WCHAR VAR_15[39];
 HKEY VAR_16;

 FUNC_4(VAR_12->clsid, VAR_15, 39);
 VAR_13 = FUNC_2(VAR_14, VAR_15, 0, ((void*)0), 0,
         VAR_2 | VAR_3, ((void*)0), &VAR_16, ((void*)0));
 if (VAR_13 != VAR_0) goto error_close_coclass_key;

 if (VAR_12->name) {
            VAR_13 = FUNC_3(VAR_16, ((void*)0), 0, VAR_4, (const BYTE*)VAR_12->name,
     FUNC_8(VAR_12->name) + 1);
     if (VAR_13 != VAR_0) goto error_close_clsid_key;
 }

 if (VAR_12->ips) {
     VAR_13 = FUNC_6(VAR_16, VAR_8, VAR_12->ips);
     if (VAR_13 != VAR_0) goto error_close_clsid_key;
 }

 if (VAR_12->ips32) {
     HKEY VAR_17;

     VAR_13 = FUNC_2(VAR_16, VAR_7, 0, ((void*)0), 0,
      VAR_2 | VAR_3, ((void*)0),
      &VAR_17, ((void*)0));
     if (VAR_13 != VAR_0) goto error_close_clsid_key;

            VAR_13 = FUNC_3(VAR_17, ((void*)0), 0, VAR_4, (const BYTE*)VAR_12->ips32,
     FUNC_5(VAR_12->ips32) + 1);
     if (VAR_13 == VAR_0 && VAR_12->ips32_tmodel)
  VAR_13 = FUNC_3(VAR_17, VAR_10, 0, VAR_4,
                                     (const BYTE*)VAR_12->ips32_tmodel,
         FUNC_8(VAR_12->ips32_tmodel) + 1);
     FUNC_1(VAR_17);
     if (VAR_13 != VAR_0) goto error_close_clsid_key;
 }

 if (VAR_12->progid) {
     VAR_13 = FUNC_6(VAR_16, VAR_9,
      VAR_12->progid);
     if (VAR_13 != VAR_0) goto error_close_clsid_key;

     VAR_13 = FUNC_7(VAR_15, VAR_12->progid, ((void*)0),
      VAR_12->name, VAR_12->progid_extra);
     if (VAR_13 != VAR_0) goto error_close_clsid_key;
 }

 if (VAR_12->viprogid) {
     VAR_13 = FUNC_6(VAR_16, VAR_11,
      VAR_12->viprogid);
     if (VAR_13 != VAR_0) goto error_close_clsid_key;

     VAR_13 = FUNC_7(VAR_15, VAR_12->viprogid, VAR_12->progid,
      VAR_12->name, VAR_12->progid_extra);
     if (VAR_13 != VAR_0) goto error_close_clsid_key;
 }

    error_close_clsid_key:
 FUNC_1(VAR_16);
    }

error_close_coclass_key:
    FUNC_1(VAR_14);
error_return:
    return VAR_13 != VAR_0 ? FUNC_0(VAR_13) : VAR_5;
}
