
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int querybuf; } ;
typedef TYPE_1__ client ;
struct TYPE_6__ {int unixtime; } ;


 int VAR_0 ;
 size_t* VAR_1 ;
 size_t* VAR_2 ;
 size_t FUNC_0 (TYPE_1__*) ;
 size_t FUNC_1 (int ) ;
 TYPE_2__ VAR_3 ;

int FUNC_2(client *VAR_4) {
    size_t VAR_5 = FUNC_1(VAR_4->querybuf);
    size_t VAR_6 = FUNC_0(VAR_4);
    int VAR_7 = VAR_3.unixtime % VAR_0;
    int VAR_8 = (VAR_7+1) % VAR_0;
    VAR_1[VAR_8] = 0;
    VAR_2[VAR_8] = 0;


    if (VAR_5 > VAR_1[VAR_7]) VAR_1[VAR_7] = VAR_5;
    if (VAR_6 > VAR_2[VAR_7]) VAR_2[VAR_7] = VAR_6;

    return 0;
}
