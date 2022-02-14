
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct parser {scalar_t__ reg_version; int data_size; int data; int data_type; int value_name; int hkey; } ;
typedef int WCHAR ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,int ,int ,int ,int ,int ) ;
 int FUNC_1 (struct parser*) ;
 int FUNC_2 (struct parser*,int ) ;

__attribute__((used)) static WCHAR *FUNC_3(struct parser *VAR_3, WCHAR *VAR_4)
{
    FUNC_0(VAR_3->hkey, VAR_3->value_name, 0, VAR_3->data_type,
                   VAR_3->data, VAR_3->data_size);

    FUNC_1(VAR_3);

    if (VAR_3->reg_version == VAR_2)
        FUNC_2(VAR_3, VAR_1);
    else
        FUNC_2(VAR_3, VAR_0);

    return VAR_4;
}
