
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {void* b_ruby_ref; } ;
typedef TYPE_1__ buf_T ;
typedef scalar_t__ VALUE ;


 scalar_t__ FUNC_0 (int ,int ,int ,TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,scalar_t__) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static VALUE FUNC_3(buf_T *VAR_2)
{
    if (VAR_2->b_ruby_ref)
    {
 return (VALUE) VAR_2->b_ruby_ref;
    }
    else
    {
 VALUE VAR_3 = FUNC_0(VAR_0, 0, 0, VAR_2);
 VAR_2->b_ruby_ref = (void *) VAR_3;
 FUNC_1(VAR_1, FUNC_2(VAR_3), VAR_3);
 return VAR_3;
    }
}
