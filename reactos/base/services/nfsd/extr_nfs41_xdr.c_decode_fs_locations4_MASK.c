
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int32_t ;
struct TYPE_3__ {int location_count; int * locations; int path; } ;
typedef TYPE_1__ fs_locations4 ;
typedef int fs_location4 ;
typedef int bool_t ;
typedef int XDR ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int*) ;

__attribute__((used)) static bool_t FUNC_6(
    XDR *VAR_2,
    fs_locations4 *VAR_3)
{
    u_int32_t VAR_4, VAR_5;
    fs_location4 *VAR_6;

    if (!FUNC_2(VAR_2, &VAR_3->path))
        return VAR_0;

    if (!FUNC_5(VAR_2, &VAR_5))
        return VAR_0;


    if (VAR_5 == 0) {
        FUNC_3(VAR_3->locations);
        VAR_6 = ((void*)0);
    } else if (VAR_5 != VAR_3->location_count) {
        VAR_6 = FUNC_4(VAR_3->locations, VAR_5 * sizeof(fs_location4));
        if (VAR_6 == ((void*)0))
            return VAR_0;
        FUNC_0(VAR_6, VAR_5 * sizeof(fs_location4));
    } else {
        VAR_6 = VAR_3->locations;
    }

    VAR_3->locations = VAR_6;
    VAR_3->location_count = VAR_5;

    for (VAR_4 = 0; VAR_4 < VAR_5; VAR_4++) {
        if (!FUNC_1(VAR_2, &VAR_6[VAR_4])) {
            FUNC_3(VAR_6);
            return VAR_0;
        }
    }
    return VAR_1;
}
