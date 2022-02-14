
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_8__ {int encoding; int length; } ;
typedef TYPE_1__ intset ;
typedef scalar_t__ int64_t ;


 scalar_t__ FUNC_0 (TYPE_1__*,int,int) ;
 int FUNC_1 (TYPE_1__*,int,scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int) ;
 TYPE_1__* FUNC_4 (TYPE_1__*,int ) ;

__attribute__((used)) static intset *FUNC_5(intset *VAR_0, int64_t VAR_1) {
    uint8_t VAR_2 = FUNC_3(VAR_0->encoding);
    uint8_t VAR_3 = FUNC_2(VAR_1);
    int VAR_4 = FUNC_3(VAR_0->length);
    int VAR_5 = VAR_1 < 0 ? 1 : 0;


    VAR_0->encoding = FUNC_3(VAR_3);
    VAR_0 = FUNC_4(VAR_0,FUNC_3(VAR_0->length)+1);




    while(VAR_4--)
        FUNC_1(VAR_0,VAR_4+VAR_5,FUNC_0(VAR_0,VAR_4,VAR_2));


    if (VAR_5)
        FUNC_1(VAR_0,0,VAR_1);
    else
        FUNC_1(VAR_0,FUNC_3(VAR_0->length),VAR_1);
    VAR_0->length = FUNC_3(FUNC_3(VAR_0->length)+1);
    return VAR_0;
}
