
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int xmlreaderinput ;
struct TYPE_3__ {int allocated; int prev_cr; scalar_t__ written; scalar_t__ cur; int data; } ;
typedef TYPE_1__ encoded_buffer ;
typedef int HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int *,int const) ;

__attribute__((used)) static HRESULT FUNC_2(xmlreaderinput *VAR_3, encoded_buffer *VAR_4)
{
    const int VAR_5 = 0x2000;
    VAR_4->data = FUNC_1(VAR_3, VAR_5);
    if (!VAR_4->data) return VAR_0;

    FUNC_0(VAR_4->data, 0, 4);
    VAR_4->cur = 0;
    VAR_4->allocated = VAR_5;
    VAR_4->written = 0;
    VAR_4->prev_cr = VAR_1;

    return VAR_2;
}
