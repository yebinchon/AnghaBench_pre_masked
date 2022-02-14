
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct d3dx_parameter {scalar_t__ class; unsigned int columns; unsigned int rows; } ;
struct d3dx_const_param_eval_output {unsigned int table; scalar_t__ constant_class; unsigned int register_count; struct d3dx_parameter* param; } ;
struct const_upload_info {int transpose; unsigned int major; unsigned int minor; unsigned int major_stride; unsigned int major_count; unsigned int minor_remainder; unsigned int count; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int FUNC_0 (unsigned int,unsigned int) ;
 int FUNC_1 (unsigned int) ;

__attribute__((used)) static void FUNC_2(struct d3dx_const_param_eval_output *VAR_2,
        struct const_upload_info *VAR_3)
{
    struct d3dx_parameter *VAR_4 = VAR_2->param;
    unsigned int VAR_5 = VAR_2->table;

    VAR_3->transpose = (VAR_2->constant_class == VAR_0 && VAR_4->class == VAR_1)
            || (VAR_4->class == VAR_0 && VAR_2->constant_class == VAR_1);
    if (VAR_2->constant_class == VAR_0)
    {
        VAR_3->major = VAR_4->columns;
        VAR_3->minor = VAR_4->rows;
    }
    else
    {
        VAR_3->major = VAR_4->rows;
        VAR_3->minor = VAR_4->columns;
    }

    if (FUNC_1(VAR_5) == 1)
    {
        unsigned int VAR_6 = FUNC_0(VAR_5, VAR_2->register_count);

        VAR_3->major_stride = VAR_3->minor;
        VAR_3->major_count = VAR_6 / VAR_3->major_stride;
        VAR_3->minor_remainder = VAR_6 % VAR_3->major_stride;
    }
    else
    {
        VAR_3->major_stride = FUNC_1(VAR_5);
        VAR_3->major_count = VAR_2->register_count;
        VAR_3->minor_remainder = 0;
    }
    VAR_3->count = VAR_3->major_count * VAR_3->minor + VAR_3->minor_remainder;
}
