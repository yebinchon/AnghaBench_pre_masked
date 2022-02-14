
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef void guint8 ;
struct TYPE_3__ {int obj_store; } ;
typedef TYPE_1__ SeafFSManager ;
typedef int CDCFileDescriptor ;


 int VAR_0 ;
 void* FUNC_0 (int,int *,int*,char*) ;
 void* FUNC_1 (int *,int*,char*) ;
 int FUNC_2 (void*) ;
 int FUNC_3 (void*) ;
 int FUNC_4 (char*,unsigned char*,int) ;
 scalar_t__ FUNC_5 (void*,int,void**,int*) ;
 scalar_t__ FUNC_6 (int ,char const*,int,char*,void*,int,int ) ;
 int FUNC_7 (char*,char const*,char*) ;

__attribute__((used)) static int
FUNC_8 (SeafFSManager *VAR_1,
               const char *VAR_2,
               int VAR_3,
               CDCFileDescriptor *VAR_4,
               unsigned char *VAR_5)
{
    int VAR_6 = 0;
    char VAR_7[41];
    void *VAR_8;
    int VAR_9;

    if (VAR_3 > 0) {
        VAR_8 = FUNC_0 (VAR_3, VAR_4, &VAR_9, VAR_7);

        guint8 *VAR_10;
        int VAR_11;

        if (FUNC_5 (VAR_8, VAR_9, &VAR_10, &VAR_11) < 0) {
            FUNC_7 ("Failed to compress seafile obj %s:%s.\n",
                          VAR_2, VAR_7);
            VAR_6 = -1;
            FUNC_2 (VAR_8);
            goto out;
        }

        if (FUNC_6 (VAR_1->obj_store, VAR_2, VAR_3, VAR_7,
                                      VAR_10, VAR_11, VAR_0) < 0)
            VAR_6 = -1;
        FUNC_3 (VAR_10);
        FUNC_2 (VAR_8);
    } else {
        VAR_8 = FUNC_1 (VAR_4, &VAR_9, VAR_7);

        if (FUNC_6 (VAR_1->obj_store, VAR_2, VAR_3, VAR_7,
                                      VAR_8, VAR_9, VAR_0) < 0)
            VAR_6 = -1;
        FUNC_3 (VAR_8);
    }

out:
    if (VAR_6 == 0)
        FUNC_4 (VAR_7, VAR_5, 20);

    return VAR_6;
}
