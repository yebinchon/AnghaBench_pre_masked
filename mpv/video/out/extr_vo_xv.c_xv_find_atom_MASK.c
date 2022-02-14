
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct vo {TYPE_1__* x11; } ;
struct TYPE_6__ {int flags; char const* name; int min_value; int max_value; } ;
typedef TYPE_2__ XvAttribute ;
struct TYPE_5__ {int display; } ;
typedef scalar_t__ Atom ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (int ,char const*,int ) ;
 int VAR_2 ;
 TYPE_2__* FUNC_2 (int ,int ,int*) ;
 int VAR_3 ;
 int FUNC_3 (char const*,char*) ;

__attribute__((used)) static int FUNC_4(struct vo *VAR_4, uint32_t VAR_5, const char *VAR_6,
                        bool VAR_7, int *VAR_8, int *VAR_9)
{
    Atom VAR_10 = VAR_0;
    int VAR_11 = 0;
    XvAttribute *VAR_12 = FUNC_2(VAR_4->x11->display, VAR_5,
                                                    &VAR_11);
    for (int VAR_13 = 0; VAR_13 < VAR_11 && VAR_12; VAR_13++) {
        int VAR_14 = VAR_7 ? VAR_2 : VAR_3;
        if (VAR_12[VAR_13].flags & VAR_14) {
            VAR_10 = FUNC_1(VAR_4->x11->display, VAR_12[VAR_13].name, VAR_1);
            *VAR_8 = VAR_12[VAR_13].min_value;
            *VAR_9 = VAR_12[VAR_13].max_value;


            if (VAR_10 != VAR_0) {
                if (!FUNC_3(VAR_12[VAR_13].name, "XV_BRIGHTNESS") &&
                    (!FUNC_3(VAR_6, "brightness")))
                    break;
                else if (!FUNC_3(VAR_12[VAR_13].name, "XV_CONTRAST") &&
                         (!FUNC_3(VAR_6, "contrast")))
                    break;
                else if (!FUNC_3(VAR_12[VAR_13].name, "XV_SATURATION") &&
                         (!FUNC_3(VAR_6, "saturation")))
                    break;
                else if (!FUNC_3(VAR_12[VAR_13].name, "XV_HUE") &&
                         (!FUNC_3(VAR_6, "hue")))
                    break;
                if (!FUNC_3(VAR_12[VAR_13].name, "XV_RED_INTENSITY") &&
                    (!FUNC_3(VAR_6, "red_intensity")))
                    break;
                else if (!FUNC_3(VAR_12[VAR_13].name, "XV_GREEN_INTENSITY")
                         && (!FUNC_3(VAR_6, "green_intensity")))
                    break;
                else if (!FUNC_3(VAR_12[VAR_13].name, "XV_BLUE_INTENSITY")
                         && (!FUNC_3(VAR_6, "blue_intensity")))
                    break;
                else if ((!FUNC_3(VAR_12[VAR_13].name, "XV_ITURBT_709")
                          || !FUNC_3(VAR_12[VAR_13].name, "XV_COLORSPACE"))
                         && (!FUNC_3(VAR_6, "bt_709")))
                    break;
                VAR_10 = VAR_0;
                continue;
            }
        }
    }
    FUNC_0(VAR_12);
    return VAR_10;
}
