
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int gsize ;
typedef scalar_t__ gboolean ;
struct TYPE_5__ {scalar_t__ disable_block_hash; } ;
struct TYPE_4__ {int len; char* block_buf; } ;
typedef int SeafileCrypt ;
typedef int GChecksum ;
typedef TYPE_1__ CDCDescriptor ;


 int VAR_0 ;
 int FUNC_0 (char const*,int,int *,char*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *,int*) ;
 int * FUNC_3 (int ) ;
 int FUNC_4 (int *,unsigned char*,int) ;
 int FUNC_5 (char*) ;
 char* FUNC_6 () ;
 TYPE_3__* VAR_1 ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char**,int*,char*,int,int *) ;
 int FUNC_9 (char*) ;

int
FUNC_10 (const char *VAR_2,
                     int VAR_3,
                     CDCDescriptor *VAR_4,
                     SeafileCrypt *VAR_5,
                     uint8_t *VAR_6,
                     gboolean VAR_7)
{
    GChecksum *VAR_8 = FUNC_3 (VAR_0);
    gsize VAR_9 = 20;
    int VAR_10 = 0;



    if (VAR_5 != ((void*)0) && VAR_4->len) {
        char *VAR_11 = ((void*)0);
        int VAR_12 = -1;

        VAR_10 = FUNC_8 (&VAR_11,
                               &VAR_12,
                               VAR_4->block_buf,
                               VAR_4->len,
                               VAR_5);
        if (VAR_10 != 0) {
            FUNC_7 ("Error: failed to encrypt block\n");
            FUNC_1 (VAR_8);
            return -1;
        }

        if (VAR_1->disable_block_hash) {
            char *VAR_13 = FUNC_6();
            FUNC_4 (VAR_8, (unsigned char *)VAR_13, FUNC_9(VAR_13));
            FUNC_5(VAR_13);
        } else {
            FUNC_4 (VAR_8, (unsigned char *)VAR_11, VAR_12);
        }
        FUNC_2 (VAR_8, VAR_6, &VAR_9);

        if (VAR_7)
            VAR_10 = FUNC_0 (VAR_2, VAR_3, VAR_6, VAR_11, VAR_12);
        FUNC_5 (VAR_11);
    } else {

        if (VAR_1->disable_block_hash) {
            char *VAR_14 = FUNC_6();
            FUNC_4 (VAR_8, (unsigned char *)VAR_14, FUNC_9(VAR_14));
            FUNC_5(VAR_14);
        }
        else {
            FUNC_4 (VAR_8, (unsigned char *)VAR_4->block_buf, VAR_4->len);
        }
        FUNC_2 (VAR_8, VAR_6, &VAR_9);

        if (VAR_7)
            VAR_10 = FUNC_0 (VAR_2, VAR_3, VAR_6, VAR_4->block_buf, VAR_4->len);
    }

    FUNC_1 (VAR_8);

    return VAR_10;
}
