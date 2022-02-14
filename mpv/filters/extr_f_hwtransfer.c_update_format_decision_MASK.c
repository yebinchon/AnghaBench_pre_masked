
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_hwupload {int* upload_fmts; int num_upload_fmts; int num_fmts; int* fmt_upload_index; int* fmt_upload_num; int* fmts; int f; } ;
struct priv {int last_input_fmt; int last_upload_fmt; int last_sw_fmt; struct mp_hwupload public; } ;


 int FUNC_0 (int ,char*,int ,int ,int ) ;
 int FUNC_1 (int*,int,int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static bool FUNC_3(struct priv *VAR_0, int VAR_1)
{
    struct mp_hwupload *VAR_2 = &VAR_0->public;

    if (!VAR_1)
        return 0;

    if (VAR_1 == VAR_0->last_input_fmt)
        return 1;

    VAR_0->last_input_fmt = 0;

    int VAR_3 = FUNC_1(VAR_2->upload_fmts, VAR_2->num_upload_fmts,
                                         VAR_1);

    if (!VAR_3)
        return 0;





    int VAR_4 = -1;
    for (int VAR_5 = 0; VAR_5 < VAR_2->num_upload_fmts; VAR_5++) {
        if (VAR_2->upload_fmts[VAR_5] == VAR_3)
            VAR_4 = VAR_5;
    }

    if (VAR_4 < 0)
        return 0;

    for (int VAR_6 = 0; VAR_6 < VAR_2->num_fmts; VAR_6++) {
        if (VAR_4 >= VAR_2->fmt_upload_index[VAR_6] &&
            VAR_4 < VAR_2->fmt_upload_index[VAR_6] + VAR_2->fmt_upload_num[VAR_6])
        {
            VAR_0->last_input_fmt = VAR_1;
            VAR_0->last_upload_fmt = VAR_2->upload_fmts[VAR_4];
            VAR_0->last_sw_fmt = VAR_2->fmts[VAR_6];
            FUNC_0(VAR_2->f, "upload %s -> %s (%s)\n",
                    FUNC_2(VAR_0->last_input_fmt),
                    FUNC_2(VAR_0->last_upload_fmt),
                    FUNC_2(VAR_0->last_sw_fmt));
            return 1;
        }
    }

    return 0;
}
