
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int WPACKET ;
struct TYPE_8__ {int * data; } ;
struct TYPE_7__ {int s; int r; } ;
typedef TYPE_1__ DSA_SIG ;
typedef TYPE_2__ BUF_MEM ;


 int FUNC_0 (TYPE_2__*) ;
 TYPE_2__* FUNC_1 () ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,size_t*) ;
 int FUNC_5 (int *,TYPE_2__*,int ) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,unsigned char*,int ,int ) ;
 int FUNC_8 (int *,int ,int ) ;

int FUNC_9(const DSA_SIG *VAR_1, unsigned char **VAR_2)
{
    BUF_MEM *VAR_3 = ((void*)0);
    size_t VAR_4;
    WPACKET VAR_5;

    if (VAR_2 == ((void*)0)) {
        if (!FUNC_6(&VAR_5, 0))
            return -1;
    } else if (*VAR_2 == ((void*)0)) {
        if ((VAR_3 = FUNC_1()) == ((void*)0)
                || !FUNC_5(&VAR_5, VAR_3, 0)) {
            FUNC_0(VAR_3);
            return -1;
        }
    } else {
        if (!FUNC_7(&VAR_5, *VAR_2, VAR_0, 0))
            return -1;
    }

    if (!FUNC_8(&VAR_5, VAR_1->r, VAR_1->s)
            || !FUNC_4(&VAR_5, &VAR_4)
            || !FUNC_3(&VAR_5)) {
        FUNC_0(VAR_3);
        FUNC_2(&VAR_5);
        return -1;
    }

    if (VAR_2 != ((void*)0)) {
        if (*VAR_2 == ((void*)0)) {
            *VAR_2 = (unsigned char *)VAR_3->data;
            VAR_3->data = ((void*)0);
            FUNC_0(VAR_3);
        } else {
            *VAR_2 += VAR_4;
        }
    }

    return (int)VAR_4;
}
