
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct parser {int * value_name; } ;
typedef int WCHAR ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct parser*,int ) ;

__attribute__((used)) static WCHAR *FUNC_2(struct parser *VAR_1, WCHAR *VAR_2)
{
    FUNC_0(VAR_1->value_name);
    VAR_1->value_name = ((void*)0);

    FUNC_1(VAR_1, VAR_0);
    return VAR_2 + 1;
}
