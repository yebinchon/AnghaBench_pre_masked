
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct geoPoint {scalar_t__ dist; } ;



__attribute__((used)) static int FUNC_0(const void *VAR_0, const void *VAR_1) {
    const struct geoPoint *VAR_2 = VAR_0, *VAR_3 = VAR_1;


    if (VAR_2->dist > VAR_3->dist)
        return 1;
    else if (VAR_2->dist == VAR_3->dist)
        return 0;
    else
        return -1;
}
