
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct d3dx_const_tab {int const_set_count; int const_set_size; struct d3dx_const_param_eval_output* const_set; } ;
struct d3dx_const_param_eval_output {int dummy; } ;
typedef int HRESULT ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int FUNC_1 () ;
 struct d3dx_const_param_eval_output* FUNC_2 (int ,int ,int) ;
 struct d3dx_const_param_eval_output* FUNC_3 (int ,int ,struct d3dx_const_param_eval_output*,int) ;
 unsigned int VAR_2 ;

__attribute__((used)) static HRESULT FUNC_4(struct d3dx_const_tab *VAR_3, struct d3dx_const_param_eval_output *VAR_4)
{
    if (VAR_3->const_set_count >= VAR_3->const_set_size)
    {
        unsigned int VAR_5;
        struct d3dx_const_param_eval_output *VAR_6;

        if (!VAR_3->const_set_size)
        {
            VAR_5 = VAR_2;
            VAR_6 = FUNC_2(FUNC_1(), 0, sizeof(*VAR_3->const_set) * VAR_5);
            if (!VAR_6)
            {
                FUNC_0("Out of memory.\n");
                return VAR_1;
            }
        }
        else
        {
            VAR_5 = VAR_3->const_set_size * 2;
            VAR_6 = FUNC_3(FUNC_1(), 0, VAR_3->const_set,
                    sizeof(*VAR_3->const_set) * VAR_5);
            if (!VAR_6)
            {
                FUNC_0("Out of memory.\n");
                return VAR_1;
            }
        }
        VAR_3->const_set = VAR_6;
        VAR_3->const_set_size = VAR_5;
    }
    VAR_3->const_set[VAR_3->const_set_count++] = *VAR_4;
    return VAR_0;
}
