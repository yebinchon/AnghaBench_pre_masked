
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef scalar_t__ LONG ;
typedef int HKEY ;
typedef int BYTE ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,char const*,int ,int *,int ,int,int *,int *,int *) ;
 scalar_t__ FUNC_2 (int ,int *,int ,int ,int const*,scalar_t__) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_3 (int ,int ,char const*) ;
 scalar_t__ FUNC_4 (int ,int ,int const*) ;
 scalar_t__ FUNC_5 (char const*) ;

__attribute__((used)) static LONG FUNC_6(
    WCHAR const *VAR_7,
    char const *VAR_8,
    char const *VAR_9,
    char const *VAR_10,
    char const *VAR_11)
{
    LONG VAR_12;
    HKEY VAR_13;

    VAR_12 = FUNC_1(VAR_1, VAR_8, 0,
     ((void*)0), 0, VAR_2 | VAR_3, ((void*)0),
     &VAR_13, ((void*)0));
    if (VAR_12 != VAR_0) return VAR_12;

    if (VAR_10) {
        VAR_12 = FUNC_2(VAR_13, ((void*)0), 0, VAR_4, (const BYTE*)VAR_10, FUNC_5(VAR_10) + 1);
 if (VAR_12 != VAR_0) goto error_close_progid_key;
    }

    if (VAR_7) {
 VAR_12 = FUNC_4(VAR_13, VAR_5, VAR_7);
 if (VAR_12 != VAR_0) goto error_close_progid_key;
    }

    if (VAR_9) {
 VAR_12 = FUNC_3(VAR_13, VAR_6,
         VAR_9);
 if (VAR_12 != VAR_0) goto error_close_progid_key;
    }

    if (VAR_11) {
 HKEY VAR_14;

 VAR_12 = FUNC_1(VAR_13, VAR_11, 0,
         ((void*)0), 0, VAR_2 | VAR_3, ((void*)0),
         &VAR_14, ((void*)0));
 if (VAR_12 == VAR_0)
     FUNC_0(VAR_14);
    }

error_close_progid_key:
    FUNC_0(VAR_13);
    return VAR_12;
}
