
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vo {TYPE_2__* driver; TYPE_1__* params; } ;
struct TYPE_4__ {int caps; } ;
struct TYPE_3__ {int rotate; } ;


 int FUNC_0 (struct vo*,char*,int) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_1(struct vo *VAR_1)
{
    int VAR_2 = VAR_1->params->rotate;
    if (VAR_2) {
        bool VAR_3 = VAR_2 % 90 ? 0 : (VAR_1->driver->caps & VAR_0);
        if (!VAR_3) {
           FUNC_0(VAR_1, "Video is flagged as rotated by %d degrees, but the "
                   "video output does not support this.\n", VAR_2);
        }
    }
}
