
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeouts {scalar_t__ curtime; scalar_t__* pending; scalar_t__ expired; scalar_t__** wheel; } ;


 unsigned int FUNC_0 (scalar_t__*) ;
 int FUNC_1 (scalar_t__*) ;

__attribute__((used)) static struct timeouts *FUNC_2(struct timeouts *VAR_0)
{
    unsigned VAR_1, VAR_2;

    for (VAR_1 = 0; VAR_1 < FUNC_0(*VAR_0->wheel); VAR_1++) {
        for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_0->wheel[VAR_1]); VAR_2++) {
            FUNC_1(&VAR_0->wheel[VAR_1][VAR_2]);
        }
    }

    FUNC_1(&VAR_0->expired);

    for (VAR_1 = 0; VAR_1 < FUNC_0(VAR_0->pending); VAR_1++) {
        VAR_0->pending[VAR_1] = 0;
    }

    VAR_0->curtime = 0;

    return VAR_0;
}
