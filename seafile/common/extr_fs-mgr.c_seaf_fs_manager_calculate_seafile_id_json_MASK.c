
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int json_t ;
typedef int guint8 ;
struct TYPE_3__ {int block_nr; int * blk_sha1s; int file_size; } ;
typedef TYPE_1__ CDCFileDescriptor ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (char*) ;
 int * FUNC_2 () ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;
 char* FUNC_5 (int *,int ) ;
 int * FUNC_6 () ;
 int FUNC_7 (int *,char*,int ) ;
 int FUNC_8 (int *,char*,int *) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (int *,char*,int) ;
 int FUNC_11 (int) ;
 int FUNC_12 (char*) ;

void
FUNC_13 (int VAR_2,
                                           CDCFileDescriptor *VAR_3,
                                           guint8 *VAR_4)
{
    json_t *VAR_5, *VAR_6;

    VAR_5 = FUNC_6 ();

    FUNC_7 (VAR_5, "type", VAR_1);
    FUNC_7 (VAR_5, "version",
                                FUNC_11(VAR_2));

    FUNC_7 (VAR_5, "size", VAR_3->file_size);

    VAR_6 = FUNC_2 ();
    int VAR_7;
    uint8_t *VAR_8 = VAR_3->blk_sha1s;
    char VAR_9[41];
    for (VAR_7 = 0; VAR_7 < VAR_3->block_nr; ++VAR_7) {
        FUNC_10 (VAR_8, VAR_9, 20);
        FUNC_3 (VAR_6, FUNC_9(VAR_9));
        VAR_8 += 20;
    }
    FUNC_8 (VAR_5, "block_ids", VAR_6);

    char *VAR_10 = FUNC_5 (VAR_5, VAR_0);
    int VAR_11 = FUNC_12(VAR_10);


    FUNC_0 (VAR_4, VAR_10, VAR_11);

    FUNC_4 (VAR_5);
    FUNC_1 (VAR_10);
}
