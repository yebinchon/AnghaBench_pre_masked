
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pollfd {scalar_t__ fd; int revents; } ;


 int FUNC_0 (struct pollfd*) ;
 int FUNC_1 (struct pollfd*,int,int) ;

__attribute__((used)) static int FUNC_2(struct pollfd *VAR_0, int VAR_1, int VAR_2)
{
    struct pollfd VAR_3[10];
    int VAR_4[10];
    if (VAR_1 > FUNC_0(VAR_3))
        return -1;
    int VAR_5 = 0;
    for (int VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {
        VAR_4[VAR_6] = -1;
        if (VAR_0[VAR_6].fd < 0)
            continue;
        VAR_4[VAR_6] = VAR_5;
        VAR_3[VAR_5++] = VAR_0[VAR_6];
    }
    int VAR_7 = FUNC_1(VAR_3, VAR_5, VAR_2);
    for (int VAR_8 = 0; VAR_8 < VAR_1; VAR_8++)
        VAR_0[VAR_8].revents = (VAR_4[VAR_8] < 0 && VAR_7 >= 0) ? 0 : VAR_3[VAR_4[VAR_8]].revents;
    return VAR_7;
}
