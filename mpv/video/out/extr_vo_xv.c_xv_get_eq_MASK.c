
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct vo {TYPE_1__* x11; } ;
struct TYPE_2__ {int display; } ;


 int FUNC_0 (struct vo*,char*,char const*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,int,int*) ;
 int FUNC_2 (struct vo*,int ,char const*,int,int*,int*) ;

__attribute__((used)) static int FUNC_3(struct vo *VAR_3, uint32_t VAR_4, const char *VAR_5,
                     int *VAR_6)
{
    int VAR_7, VAR_8;
    int VAR_9 = FUNC_2(VAR_3, VAR_4, VAR_5, 1, &VAR_7, &VAR_8);
    if (VAR_9 != VAR_0) {
        int VAR_10 = 0;
        FUNC_1(VAR_3->x11->display, VAR_4, VAR_9, &VAR_10);

        *VAR_6 = (VAR_10 - VAR_7) * 200 / (VAR_8 - VAR_7) - 100;
        FUNC_0(VAR_3, "xv_get_eq called! (%s, %d)\n", VAR_5, *VAR_6);
        return VAR_2;
    }
    return VAR_1;
}
