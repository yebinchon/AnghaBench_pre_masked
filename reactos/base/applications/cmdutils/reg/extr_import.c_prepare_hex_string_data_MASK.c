
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct parser {scalar_t__ data_type; int data_size; scalar_t__* data; scalar_t__ is_unicode; } ;
typedef scalar_t__ WCHAR ;
typedef int DWORD ;
typedef scalar_t__ BYTE ;


 scalar_t__* FUNC_0 (scalar_t__*,size_t,size_t*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (scalar_t__*) ;

__attribute__((used)) static void FUNC_2(struct parser *VAR_3)
{
    if (VAR_3->data_type == VAR_0 || VAR_3->data_type == VAR_1 ||
        VAR_3->data_type == VAR_2)
    {
        if (VAR_3->is_unicode)
        {
            WCHAR *VAR_4 = VAR_3->data;
            DWORD VAR_5 = VAR_3->data_size / sizeof(WCHAR);

            if (VAR_4[VAR_5 - 1] != 0)
            {
                VAR_4[VAR_5] = 0;
                VAR_3->data_size += sizeof(WCHAR);
            }
        }
        else
        {
            BYTE *VAR_6 = VAR_3->data;

            if (VAR_6[VAR_3->data_size - 1] != 0)
            {
                VAR_6[VAR_3->data_size] = 0;
                VAR_3->data_size++;
            }

            VAR_3->data = FUNC_0(VAR_3->data, VAR_3->data_size, &VAR_3->data_size);
            VAR_3->data_size *= sizeof(WCHAR);
            FUNC_1(VAR_6);
        }
    }
}
