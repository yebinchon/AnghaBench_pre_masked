
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ daylightBias; scalar_t__ standardBias; int daylightDate; int standardDate; } ;
typedef TYPE_1__ DateInstance ;
typedef scalar_t__ DOUBLE ;


 scalar_t__ FUNC_0 (int,int ) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static inline DOUBLE FUNC_3(DOUBLE VAR_0, DateInstance *VAR_1)
{
    int VAR_2 = FUNC_2(VAR_0);
    DOUBLE VAR_3, VAR_4;

    if(FUNC_1(VAR_0))
        return 0;

    VAR_3 = FUNC_0(VAR_2, VAR_1->standardDate);
    VAR_4 = FUNC_0(VAR_2, VAR_1->daylightDate);

    if(FUNC_1(VAR_3) || FUNC_1(VAR_4))
        return 0;
    else if(VAR_3 > VAR_4) {
        if(VAR_4 <= VAR_0 && VAR_0 < VAR_3)
            return VAR_1->daylightBias;

        return VAR_1->standardBias;
    }
    else {
        if(VAR_3 <= VAR_0 && VAR_0 < VAR_4)
            return VAR_1->standardBias;

        return VAR_1->daylightBias;
    }
}
