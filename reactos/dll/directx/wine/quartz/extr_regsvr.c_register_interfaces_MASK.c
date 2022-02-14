
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regsvr_interface {scalar_t__ num_methods; scalar_t__ ps_clsid32; scalar_t__ ps_clsid; scalar_t__ base_iid; scalar_t__ name; scalar_t__ iid; } ;
typedef char WCHAR ;
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
 scalar_t__ FUNC_2 (int ,char*,int ,int *,int ,int,int *,int *,int *) ;
 scalar_t__ FUNC_3 (int ,int *,int ,int ,int const*,scalar_t__) ;
 scalar_t__ FUNC_4 (int ,int *,int ,int ,int const*,int) ;
 int VAR_5 ;
 int FUNC_5 (scalar_t__,char*,int) ;
 int VAR_6 ;
 char* VAR_7 ;
 int FUNC_6 (char*) ;
 char* VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_7 (int ,int ,scalar_t__) ;
 int FUNC_8 (char*,char const*,scalar_t__) ;
 scalar_t__ FUNC_9 (scalar_t__) ;

__attribute__((used)) static HRESULT FUNC_10(struct regsvr_interface const *VAR_11)
{
    LONG VAR_12 = VAR_0;
    HKEY VAR_13;

    VAR_12 = FUNC_2(VAR_1, VAR_7, 0, ((void*)0), 0,
     VAR_2 | VAR_3, ((void*)0), &VAR_13, ((void*)0));
    if (VAR_12 != VAR_0) goto error_return;

    for (; VAR_12 == VAR_0 && VAR_11->iid; ++VAR_11) {
 WCHAR VAR_14[39];
 HKEY VAR_15;

 FUNC_5(VAR_11->iid, VAR_14, 39);
 VAR_12 = FUNC_2(VAR_13, VAR_14, 0, ((void*)0), 0,
         VAR_2 | VAR_3, ((void*)0), &VAR_15, ((void*)0));
 if (VAR_12 != VAR_0) goto error_close_interface_key;

 if (VAR_11->name) {
            VAR_12 = FUNC_3(VAR_15, ((void*)0), 0, VAR_4, (const BYTE*)VAR_11->name,
     FUNC_9(VAR_11->name) + 1);
     if (VAR_12 != VAR_0) goto error_close_iid_key;
 }

 if (VAR_11->base_iid) {
     VAR_12 = FUNC_7(VAR_15, VAR_6, VAR_11->base_iid);
     if (VAR_12 != VAR_0) goto error_close_iid_key;
 }

 if (0 <= VAR_11->num_methods) {
     static const WCHAR VAR_16[] = { '%', 'd', 0 };
     HKEY VAR_17;

     VAR_12 = FUNC_2(VAR_15, VAR_8, 0, ((void*)0), 0,
      VAR_2 | VAR_3, ((void*)0), &VAR_17, ((void*)0));
     if (VAR_12 != VAR_0) goto error_close_iid_key;

     FUNC_8(VAR_14, VAR_16, VAR_11->num_methods);
            VAR_12 = FUNC_4(VAR_17, ((void*)0), 0, VAR_4, (const BYTE*)VAR_14,
     (FUNC_6(VAR_14) + 1) * sizeof(WCHAR));
     FUNC_1(VAR_17);

     if (VAR_12 != VAR_0) goto error_close_iid_key;
 }

 if (VAR_11->ps_clsid) {
     VAR_12 = FUNC_7(VAR_15, VAR_10, VAR_11->ps_clsid);
     if (VAR_12 != VAR_0) goto error_close_iid_key;
 }

 if (VAR_11->ps_clsid32) {
     VAR_12 = FUNC_7(VAR_15, VAR_9, VAR_11->ps_clsid32);
     if (VAR_12 != VAR_0) goto error_close_iid_key;
 }

    error_close_iid_key:
 FUNC_1(VAR_15);
    }

error_close_interface_key:
    FUNC_1(VAR_13);
error_return:
    return VAR_12 != VAR_0 ? FUNC_0(VAR_12) : VAR_5;
}
