
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int rlayer; } ;
struct TYPE_5__ {int left; scalar_t__ offset; scalar_t__ buf; } ;
typedef TYPE_1__ SSL3_BUFFER ;
typedef TYPE_2__ SSL ;
typedef int PACKET ;


 int FUNC_0 (int *,scalar_t__,int ) ;
 int FUNC_1 (int *,int) ;
 scalar_t__ FUNC_2 (int *,int *) ;
 scalar_t__ FUNC_3 (int *) ;
 TYPE_1__* FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(SSL *VAR_0)
{
    SSL3_BUFFER *VAR_1 = FUNC_4(&VAR_0->rlayer);
    PACKET VAR_2, VAR_3;
    int VAR_4 = 0;

    if (!FUNC_0(&VAR_2, VAR_1->buf + VAR_1->offset, VAR_1->left))
        return -1;

    while (FUNC_3(&VAR_2) > 0) {

        if (!FUNC_1(&VAR_2, 3))
            return -1;


        if (FUNC_2(&VAR_2, &VAR_3))
            return -1;

        VAR_4 += 1;
    }

    return VAR_4;
}
