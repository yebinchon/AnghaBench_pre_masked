
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int value; } ;
typedef TYPE_1__ token_t ;
typedef int conn ;
struct TYPE_6__ {unsigned int verbose; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,TYPE_1__*,size_t const) ;
 TYPE_2__ VAR_1 ;
 unsigned int FUNC_3 (int ,int *,int) ;

__attribute__((used)) static void FUNC_4(conn *VAR_2, token_t *VAR_3, const size_t VAR_4) {
    unsigned int VAR_5;

    FUNC_0(VAR_2 != ((void*)0));

    FUNC_2(VAR_2, VAR_3, VAR_4);

    VAR_5 = FUNC_3(VAR_3[1].value, ((void*)0), 10);
    VAR_1.verbose = VAR_5 > VAR_0 ? VAR_0 : VAR_5;
    FUNC_1(VAR_2, "OK");
    return;
}
