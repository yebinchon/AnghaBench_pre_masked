
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int active; int * installfunc; int (* changefunc ) (size_t) ;int * text; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (size_t,int ,int ) ;
 int FUNC_1 (size_t) ;
 int FUNC_2 (size_t) ;
 int FUNC_3 (size_t) ;
 int FUNC_4 (size_t) ;
 size_t VAR_1 ;
 TYPE_1__* VAR_2 ;
 size_t VAR_3 ;
 int * VAR_4 ;
 int VAR_5 ;
 int * VAR_6 ;
 char* VAR_7 ;
 size_t VAR_8 ;
 int * VAR_9 ;
 int VAR_10 ;
 scalar_t__* VAR_11 ;
 size_t VAR_12 ;
 int * VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 int FUNC_5 (scalar_t__,char*) ;
 scalar_t__ VAR_16 ;

__attribute__((used)) static void
FUNC_6(void)
{

    FUNC_5(VAR_16, VAR_7);
    FUNC_5(VAR_16 + VAR_15, "_vimrc");


    if (*VAR_11 == VAR_0)
 VAR_2[VAR_1].installfunc = ((void*)0);
    else
 VAR_2[VAR_1].installfunc = VAR_6;
    VAR_2[VAR_1].text = ((void*)0);
    FUNC_4(VAR_1);
    VAR_2[VAR_1].changefunc = FUNC_4;
    VAR_2[VAR_1].active = 1;
    ++VAR_1;


    FUNC_0(VAR_1, VAR_5, VAR_4[VAR_3]);
    VAR_2[VAR_1].changefunc = FUNC_3;
    VAR_2[VAR_1].installfunc = ((void*)0);
    VAR_2[VAR_1].active = (*VAR_11 == VAR_0);
    ++VAR_1;


    FUNC_0(VAR_1, VAR_14 , VAR_13[VAR_12]);
    VAR_2[VAR_1].changefunc = FUNC_2;
    VAR_2[VAR_1].installfunc = ((void*)0);;
    VAR_2[VAR_1].active = (*VAR_11 == VAR_0);
    ++VAR_1;


    FUNC_0(VAR_1, VAR_10, VAR_9[VAR_8]);
    VAR_2[VAR_1].changefunc = FUNC_1;
    VAR_2[VAR_1].installfunc = ((void*)0);;
    VAR_2[VAR_1].active = (*VAR_11 == VAR_0);
    ++VAR_1;
}
