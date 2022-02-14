
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct m_geometry {double w; double h; int x; int y; scalar_t__ y_sign; scalar_t__ y_per; scalar_t__ x_sign; scalar_t__ x_per; scalar_t__ xy_valid; scalar_t__ h_per; scalar_t__ w_per; scalar_t__ wh_valid; } ;


 int VAR_0 ;

void FUNC_0(int *VAR_1, int *VAR_2, int *VAR_3, int *VAR_4,
                      int VAR_5, int VAR_6, struct m_geometry *VAR_7)
{
    if (VAR_7->wh_valid) {
        int VAR_8 = *VAR_3, VAR_9 = *VAR_4;
        if (VAR_7->w > 0)
            *VAR_3 = VAR_7->w_per ? VAR_5 * (VAR_7->w / 100.0) : VAR_7->w;
        if (VAR_7->h > 0)
            *VAR_4 = VAR_7->h_per ? VAR_6 * (VAR_7->h / 100.0) : VAR_7->h;

        double VAR_10 = (double)VAR_8 / VAR_9;
        if (VAR_7->w > 0 && !(VAR_7->h > 0)) {
            *VAR_4 = *VAR_3 / VAR_10;
        } else if (!(VAR_7->w > 0) && VAR_7->h > 0) {
            *VAR_3 = *VAR_4 * VAR_10;
        }


        *VAR_1 += VAR_8 / 2 - *VAR_3 / 2;
        *VAR_2 += VAR_9 / 2 - *VAR_4 / 2;
    }

    if (VAR_7->xy_valid) {
        if (VAR_7->x != VAR_0) {
            *VAR_1 = VAR_7->x;
            if (VAR_7->x_per)
                *VAR_1 = (VAR_5 - *VAR_3) * (*VAR_1 / 100.0);
            if (VAR_7->x_sign)
                *VAR_1 = VAR_5 - *VAR_3 - *VAR_1;
        }
        if (VAR_7->y != VAR_0) {
            *VAR_2 = VAR_7->y;
            if (VAR_7->y_per)
                *VAR_2 = (VAR_6 - *VAR_4) * (*VAR_2 / 100.0);
            if (VAR_7->y_sign)
                *VAR_2 = VAR_6 - *VAR_4 - *VAR_2;
        }
    }
}
