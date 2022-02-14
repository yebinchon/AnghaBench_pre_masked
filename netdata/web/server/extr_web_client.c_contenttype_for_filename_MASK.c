
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
struct TYPE_2__ {char const* extension; scalar_t__ hash; int contenttype; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 void* FUNC_0 (char const*) ;
 int FUNC_1 (char const*,char const*) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static inline uint8_t FUNC_3(const char *VAR_2) {


    static int VAR_3 = 0;
    int VAR_4;

    if(FUNC_2(!VAR_3)) {
        for (VAR_4 = 0; VAR_1[VAR_4].extension; VAR_4++)
            VAR_1[VAR_4].hash = FUNC_0(VAR_1[VAR_4].extension);

        VAR_3 = 1;
    }

    const char *VAR_5 = VAR_2, *VAR_6 = ((void*)0);


    while(*VAR_5) {
        if(FUNC_2(*VAR_5 == '.')) VAR_6 = VAR_5;
        VAR_5++;
    }

    if(FUNC_2(!VAR_6 || !*VAR_6 || !VAR_6[1])) {

        return VAR_0;
    }
    VAR_6++;



    uint32_t VAR_7 = FUNC_0(VAR_6);
    for(VAR_4 = 0; VAR_1[VAR_4].extension ; VAR_4++) {
        if(FUNC_2(VAR_7 == VAR_1[VAR_4].hash && !FUNC_1(VAR_6, VAR_1[VAR_4].extension))) {

            return VAR_1[VAR_4].contenttype;
        }
    }


    return VAR_0;
}
