
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int allocated; scalar_t__ written; int data; } ;
typedef TYPE_1__ encoded_buffer ;
typedef int HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int const) ;
 int FUNC_1 (int ,int ,int) ;

__attribute__((used)) static HRESULT FUNC_2(encoded_buffer *VAR_2)
{
    const int VAR_3 = 0x1000;
    VAR_2->data = FUNC_0(VAR_3);
    if (!VAR_2->data) return VAR_0;

    FUNC_1(VAR_2->data, 0, 4);
    VAR_2->allocated = VAR_3;
    VAR_2->written = 0;

    return VAR_1;
}
