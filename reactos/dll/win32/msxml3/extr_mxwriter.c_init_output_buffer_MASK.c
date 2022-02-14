
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int xml_encoding ;
struct TYPE_3__ {scalar_t__ utf16_total; int blocks; int encoded; int code_page; } ;
typedef TYPE_1__ output_buffer ;
typedef scalar_t__ HRESULT ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ,int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static HRESULT FUNC_3(xml_encoding VAR_1, output_buffer *VAR_2)
{
    HRESULT VAR_3;

    VAR_3 = FUNC_0(VAR_1, &VAR_2->code_page);
    if (VAR_3 != VAR_0)
        return VAR_3;

    VAR_3 = FUNC_1(&VAR_2->encoded);
    if (VAR_3 != VAR_0)
        return VAR_3;

    FUNC_2(&VAR_2->blocks);
    VAR_2->utf16_total = 0;

    return VAR_0;
}
