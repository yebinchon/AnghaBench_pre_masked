
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int json_t ;
typedef int guint8 ;
struct TYPE_3__ {int n_blocks; int file_id; int * blk_sha1s; int file_size; int version; } ;
typedef TYPE_1__ Seafile ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned char*,char*,int) ;
 int * FUNC_1 () ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 char* FUNC_4 (int *,int ) ;
 int * FUNC_5 () ;
 int FUNC_6 (int *,char*,int ) ;
 int FUNC_7 (int *,char*,int *) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (unsigned char*,int ,int) ;
 int FUNC_10 (char*) ;

__attribute__((used)) static guint8 *
FUNC_11 (Seafile *VAR_2, int *VAR_3)
{
    json_t *VAR_4, *VAR_5;

    VAR_4 = FUNC_5 ();

    FUNC_6 (VAR_4, "type", VAR_1);
    FUNC_6 (VAR_4, "version", VAR_2->version);

    FUNC_6 (VAR_4, "size", VAR_2->file_size);

    VAR_5 = FUNC_1 ();
    int VAR_6;
    for (VAR_6 = 0; VAR_6 < VAR_2->n_blocks; ++VAR_6) {
        FUNC_2 (VAR_5, FUNC_8(VAR_2->blk_sha1s[VAR_6]));
    }
    FUNC_7 (VAR_4, "block_ids", VAR_5);

    char *VAR_7 = FUNC_4 (VAR_4, VAR_0);
    *VAR_3 = FUNC_10(VAR_7);

    unsigned char VAR_8[20];
    FUNC_0 (VAR_8, VAR_7, *VAR_3);
    FUNC_9 (VAR_8, VAR_2->file_id, 20);

    FUNC_3 (VAR_4);
    return (guint8 *)VAR_7;
}
