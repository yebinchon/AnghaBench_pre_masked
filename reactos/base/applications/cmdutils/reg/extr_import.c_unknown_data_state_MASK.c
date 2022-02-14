
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct parser {int data_type; } ;
typedef int WCHAR ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct parser*,int ) ;

__attribute__((used)) static WCHAR *FUNC_2(struct parser *VAR_1, WCHAR *VAR_2)
{
    FUNC_0("Unknown registry data type [0x%x]\n", VAR_1->data_type);

    FUNC_1(VAR_1, VAR_0);
    return VAR_2;
}
