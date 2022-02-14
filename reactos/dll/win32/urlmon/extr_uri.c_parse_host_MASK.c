
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int parse_data ;
typedef int WCHAR ;
typedef int DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (char*,int const**,int *,int ,int ) ;
 int VAR_1 ;
 int FUNC_1 (int const**,int *,int ,int ) ;
 int FUNC_2 (int const**,int *,int ) ;
 int FUNC_3 (int const**,int *,int ,int ) ;

__attribute__((used)) static BOOL FUNC_4(const WCHAR **VAR_2, parse_data *VAR_3, DWORD VAR_4, DWORD VAR_5) {
    if(!FUNC_1(VAR_2, VAR_3, VAR_4, VAR_5)) {
        if(!FUNC_2(VAR_2, VAR_3, VAR_4)) {
            if(!FUNC_3(VAR_2, VAR_3, VAR_4, VAR_5)) {
                FUNC_0("(%p %p %x %x): Malformed URI, Unknown host type.\n",
                    VAR_2, VAR_3, VAR_4, VAR_5);
                return VAR_0;
            }
        }
    }

    return VAR_1;
}
