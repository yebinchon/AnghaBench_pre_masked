
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct badge_color {char const* name; scalar_t__ hash; char const* color; } ;


 struct badge_color* VAR_0 ;
 void* FUNC_0 (char const*) ;
 int FUNC_1 (char const*,char const*) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static inline const char *FUNC_3(const char *VAR_1) {
    static int VAR_2 = -1;
    int VAR_3;

    if(FUNC_2(VAR_2 == -1)) {
        for(VAR_3 = 0; VAR_0[VAR_3].name ;VAR_3++)
            VAR_0[VAR_3].hash = FUNC_0(VAR_0[VAR_3].name);

        VAR_2 = VAR_3;
    }

    uint32_t VAR_4 = FUNC_0(VAR_1);

    for(VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
        struct badge_color *VAR_5 = &VAR_0[VAR_3];

        if(VAR_4 == VAR_5->hash && !FUNC_1(VAR_1, VAR_5->name))
            return VAR_5->color;
    }

    return VAR_1;
}
