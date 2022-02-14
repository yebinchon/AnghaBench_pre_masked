
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct parser {int data_size; int data; } ;
typedef int WCHAR ;
typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct parser*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct parser*,int ) ;

__attribute__((used)) static WCHAR *FUNC_4(struct parser *VAR_2, WCHAR *VAR_3)
{
    WCHAR *VAR_4 = VAR_3;

    VAR_2->data = FUNC_2(sizeof(DWORD));

    if (!FUNC_0(VAR_4, VAR_2->data))
        goto invalid;

    VAR_2->data_size = sizeof(DWORD);

    FUNC_3(VAR_2, VAR_1);
    return VAR_4;

invalid:
    FUNC_1(VAR_2);
    FUNC_3(VAR_2, VAR_0);
    return VAR_4;
}
