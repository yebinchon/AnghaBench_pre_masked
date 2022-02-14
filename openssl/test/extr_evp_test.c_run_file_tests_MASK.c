
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {int errors; int key; int numskip; int fp; } ;
struct TYPE_10__ {TYPE_2__ s; scalar_t__ skip; } ;
typedef TYPE_1__ EVP_TEST ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;
 TYPE_1__* FUNC_3 (int) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_2__*) ;
 char* FUNC_10 (int) ;
 int FUNC_11 (TYPE_2__*,char const*) ;

__attribute__((used)) static int FUNC_12(int VAR_2)
{
    EVP_TEST *VAR_3;
    const char *VAR_4 = FUNC_10(VAR_2);
    int VAR_5;

    if (!FUNC_4(VAR_3 = FUNC_3(sizeof(*VAR_3))))
        return 0;
    if (!FUNC_11(&VAR_3->s, VAR_4)) {
        FUNC_2(VAR_3);
        return 0;
    }

    while (!FUNC_0(VAR_3->s.fp)) {
        VAR_5 = FUNC_7(VAR_3);
        if (VAR_3->skip) {
            VAR_3->s.numskip++;
            continue;
        }
        if (VAR_5 == 0 || !FUNC_8(VAR_3)) {
            VAR_3->s.errors++;
            break;
        }
    }
    FUNC_9(&VAR_3->s);
    FUNC_5(VAR_3);

    FUNC_6(VAR_1);
    FUNC_6(VAR_0);
    FUNC_1(VAR_3->s.key);
    VAR_5 = VAR_3->s.errors;
    FUNC_2(VAR_3);
    return VAR_5 == 0;
}
