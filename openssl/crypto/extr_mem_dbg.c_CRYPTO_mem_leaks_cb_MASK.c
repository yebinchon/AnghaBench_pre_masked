
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int buf ;
struct TYPE_3__ {int (* print_cb ) (char const*,size_t,void*) ;scalar_t__ chunks; scalar_t__ bytes; void* print_cb_arg; } ;
typedef TYPE_1__ MEM_LEAK ;


 int FUNC_0 (char*,int,char*,scalar_t__,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int) ;
 int FUNC_5 () ;
 int FUNC_6 (int *,int ) ;
 int VAR_2 ;
 int FUNC_7 (int *,int ,TYPE_1__*) ;
 int FUNC_8 (int *) ;
 int * VAR_3 ;
 int VAR_4 ;
 int * VAR_5 ;
 int * VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 size_t FUNC_9 (char*) ;

int FUNC_10(int (*VAR_9) (const char *VAR_10, size_t VAR_11, void *VAR_12),
                        void *VAR_13)
{
    MEM_LEAK VAR_14;


    FUNC_5();

    if (!FUNC_6(&VAR_4, VAR_2))
        return -1;

    FUNC_4(VAR_0);

    VAR_14.print_cb = VAR_9;
    VAR_14.print_cb_arg = VAR_13;
    VAR_14.bytes = 0;
    VAR_14.chunks = 0;
    if (VAR_6 != ((void*)0))
        FUNC_7(VAR_6, VAR_8, &VAR_14);

    if (VAR_14.chunks != 0) {
        char VAR_15[256];

        FUNC_0(VAR_15, sizeof(VAR_15), "%ld bytes leaked in %d chunks\n",
                     VAR_14.bytes, VAR_14.chunks);
        VAR_9(VAR_15, FUNC_9(VAR_15), VAR_13);
    } else {






        int VAR_16;

        FUNC_3(VAR_5);





        VAR_16 = VAR_7;
        VAR_7 = VAR_1;

        FUNC_8(VAR_6);
        VAR_6 = ((void*)0);

        VAR_7 = VAR_16;
        FUNC_2(VAR_5);
    }
    FUNC_4(VAR_1);


    FUNC_1(VAR_5);
    FUNC_1(VAR_3);
    VAR_5 = ((void*)0);
    VAR_3 = ((void*)0);

    return VAR_14.chunks == 0 ? 1 : 0;
}
