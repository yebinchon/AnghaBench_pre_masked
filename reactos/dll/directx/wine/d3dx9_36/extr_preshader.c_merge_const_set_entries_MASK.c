
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct d3dx_parameter {scalar_t__ type; scalar_t__ class; unsigned int columns; unsigned int rows; scalar_t__ element_count; int name; int * data; } ;
struct d3dx_const_tab {int const_set_count; struct d3dx_const_param_eval_output* const_set; } ;
struct d3dx_const_param_eval_output {int table; int register_index; int register_count; int element_count; scalar_t__ direct_copy; struct d3dx_parameter* param; } ;
typedef enum pres_reg_tables { ____Placeholder_pres_reg_tables } pres_reg_tables ;
typedef int HRESULT ;
typedef int DWORD ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (char*,unsigned int,int ,int,...) ;
 int FUNC_1 (int ) ;
 unsigned int FUNC_2 (int,int) ;
 int FUNC_3 (int,unsigned int) ;
 int FUNC_4 (struct d3dx_const_param_eval_output*,struct d3dx_const_param_eval_output*,int) ;
 scalar_t__ FUNC_5 (scalar_t__) ;

__attribute__((used)) static HRESULT FUNC_6(struct d3dx_const_tab *VAR_5,
        struct d3dx_parameter *VAR_6, unsigned int VAR_7)
{
    unsigned int VAR_8, VAR_9 = VAR_7;
    DWORD *VAR_10;
    enum pres_reg_tables VAR_11;
    unsigned int VAR_12, VAR_13;
    struct d3dx_const_param_eval_output *VAR_14;

    if (!VAR_5->const_set_count)
        return VAR_3;

    while (VAR_7 < VAR_5->const_set_count - 1)
    {
        VAR_14 = &VAR_5->const_set[VAR_7];
        VAR_10 = VAR_14->param->data;
        VAR_11 = VAR_14->table;
        VAR_12 = FUNC_2(VAR_11, VAR_14->register_index);
        VAR_13 = 0;
        for (VAR_8 = VAR_7; VAR_8 < VAR_5->const_set_count; ++VAR_8)
        {
            struct d3dx_const_param_eval_output *VAR_15 = &VAR_5->const_set[VAR_8];
            unsigned int VAR_16 = FUNC_2(VAR_15->table,
                    VAR_15->register_count * VAR_15->element_count);
            unsigned int VAR_17 = FUNC_2(VAR_15->table, VAR_15->register_index);

            if (!(VAR_15->table == VAR_11 && VAR_12 == VAR_17
                    && VAR_15->direct_copy == VAR_14->direct_copy
                    && VAR_10 == VAR_15->param->data
                    && (VAR_15->direct_copy || (VAR_14->param->type == VAR_15->param->type
                    && VAR_14->param->class == VAR_15->param->class
                    && VAR_14->param->columns == VAR_15->param->columns
                    && VAR_14->param->rows == VAR_15->param->rows
                    && VAR_14->register_count == VAR_15->register_count
                    && (VAR_8 == VAR_5->const_set_count - 1
                    || VAR_14->param->element_count == VAR_15->param->element_count)))))
                break;

            VAR_12 += VAR_16;
            VAR_10 += VAR_15->direct_copy ? VAR_16 : VAR_15->param->rows
                    * VAR_15->param->columns * VAR_15->element_count;
            VAR_13 += VAR_15->element_count;
        }

        if (VAR_8 > VAR_7 + 1)
        {
            FUNC_0("Merging %u child parameters for %s, not merging %u, direct_copy %#x.\n", VAR_8 - VAR_7,
                    FUNC_1(VAR_6->name), VAR_5->const_set_count - VAR_8, VAR_14->direct_copy);

            VAR_14->element_count = VAR_13;
            if (VAR_14->direct_copy)
            {
                VAR_14->element_count = 1;
                if (VAR_7 == VAR_9
                        && !(VAR_6->type == VAR_2 && VAR_6->class == VAR_1))
                {
                    if (FUNC_5(VAR_6->type) == VAR_4)
                        return VAR_0;
                    VAR_14->param = VAR_6;
                }
                VAR_14->register_count = FUNC_3(VAR_11, VAR_12)
                        - VAR_14->register_index;
            }
            FUNC_4(&VAR_5->const_set[VAR_7 + 1], &VAR_5->const_set[VAR_8],
                    sizeof(*VAR_5->const_set) * (VAR_5->const_set_count - VAR_8));
            VAR_5->const_set_count -= VAR_8 - VAR_7 - 1;
        }
        else
        {
            FUNC_0("Not merging %u child parameters for %s, direct_copy %#x.\n",
                    VAR_5->const_set_count - VAR_8, FUNC_1(VAR_6->name), VAR_14->direct_copy);
        }
        VAR_7 = VAR_8;
    }
    return VAR_3;
}
