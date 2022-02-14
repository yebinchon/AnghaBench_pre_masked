
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ port; int host; int stream; } ;
typedef TYPE_1__ RedisSock ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int * FUNC_3 (int ,char*,int,size_t*) ;
 int FUNC_4 (TYPE_1__*,int ) ;
 int FUNC_5 (TYPE_1__*,int) ;
 int FUNC_6 (char**,int ,char*,int ,...) ;

int
FUNC_7(RedisSock *VAR_0, char *VAR_1, int VAR_2,
                size_t *VAR_3)
{

    if(-1 == FUNC_4(VAR_0, 0)) {
        return -1;
    }

    if(FUNC_3(VAR_0->stream, VAR_1, VAR_2, VAR_3)
                           == ((void*)0))
    {
        char *VAR_4 = ((void*)0);

        if (VAR_0->port < 0) {
            FUNC_6(&VAR_4, 0, "read error on connection to %s", FUNC_1(VAR_0->host));
        } else {
            FUNC_6(&VAR_4, 0, "read error on connection to %s:%d", FUNC_1(VAR_0->host), VAR_0->port);
        }

        FUNC_5(VAR_0, 1);


        FUNC_0(VAR_4, 0);
        FUNC_2(VAR_4);
        return -1;
    }


    *VAR_3-=2;
    VAR_1[*VAR_3]='\0';


    return 0;
}
