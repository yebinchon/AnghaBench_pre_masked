
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ra {int dummy; } ;
struct gl_timer {int query; } ;
typedef struct gl_timer ra_timer ;
struct TYPE_3__ {int (* DeleteQueries ) (int ,int ) ;} ;
typedef TYPE_1__ GL ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (struct ra*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct gl_timer*) ;

__attribute__((used)) static void FUNC_3(struct ra *VAR_1, ra_timer *VAR_2)
{
    if (!VAR_2)
        return;

    GL *VAR_3 = FUNC_0(VAR_1);
    struct gl_timer *VAR_4 = VAR_2;

    VAR_3->DeleteQueries(VAR_0, VAR_4->query);
    FUNC_2(VAR_4);
}
