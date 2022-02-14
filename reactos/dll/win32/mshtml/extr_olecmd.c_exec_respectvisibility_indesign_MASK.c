
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int VARIANT ;
typedef int HTMLDocument ;
typedef int HRESULT ;
typedef int DWORD ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int FUNC_1 (char*,int *,int ,int ,int *) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static HRESULT FUNC_5(HTMLDocument *VAR_2, DWORD VAR_3,
        VARIANT *VAR_4, VARIANT *VAR_5)
{
    FUNC_1("(%p)->(%x %s %p)\n", VAR_2, VAR_3, FUNC_4(VAR_4), VAR_5);


    if(!VAR_4 || FUNC_3(VAR_4) != VAR_1 || !FUNC_2(VAR_4))
        FUNC_0("Unsupported argument %s\n", FUNC_4(VAR_4));

    return VAR_0;
}
