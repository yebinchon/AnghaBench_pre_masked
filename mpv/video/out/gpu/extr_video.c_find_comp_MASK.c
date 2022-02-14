
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ra_imgfmt_desc {int num_planes; int** components; } ;



__attribute__((used)) static int FUNC_0(struct ra_imgfmt_desc *VAR_0, int VAR_1)
{
    int VAR_2 = 0;
    for (int VAR_3 = 0; VAR_3 < VAR_0->num_planes; VAR_3++) {
        for (int VAR_4 = 0; VAR_4 < 4; VAR_4++) {
            if (VAR_0->components[VAR_3][VAR_4]) {
                if (VAR_0->components[VAR_3][VAR_4] == VAR_1)
                    return VAR_2;
                VAR_2++;
            }
        }
    }
    return -1;
}
