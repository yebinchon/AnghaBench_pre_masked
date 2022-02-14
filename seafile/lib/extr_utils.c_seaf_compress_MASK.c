
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int avail_in; int avail_out; int * next_out; int * next_in; void* opaque; void* zfree; void* zalloc; } ;
typedef TYPE_1__ z_stream ;
typedef int guint8 ;
struct TYPE_10__ {int len; } ;
typedef TYPE_2__ GByteArray ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (TYPE_2__*,int *,unsigned int) ;
 int * FUNC_4 (TYPE_2__*,int ) ;
 TYPE_2__* FUNC_5 () ;
 int FUNC_6 (char*) ;

int
FUNC_7 (guint8 *VAR_7, int VAR_8, guint8 **VAR_9, int *VAR_10)
{
    int VAR_11;
    unsigned VAR_12;
    z_stream VAR_13;
    guint8 VAR_14[VAR_1];
    GByteArray *VAR_15;

    if (VAR_8 == 0)
        return -1;


    VAR_13.zalloc = VAR_4;
    VAR_13.zfree = VAR_4;
    VAR_13.opaque = VAR_4;
    VAR_11 = FUNC_2(&VAR_13, VAR_2);
    if (VAR_11 != VAR_5) {
        FUNC_6 ("deflateInit failed.\n");
        return -1;
    }

    VAR_13.avail_in = VAR_8;
    VAR_13.next_in = VAR_7;
    VAR_15 = FUNC_5 ();

    do {
        VAR_13.avail_out = VAR_1;
        VAR_13.next_out = VAR_14;
        VAR_11 = FUNC_0(&VAR_13, VAR_3);
        VAR_12 = VAR_1 - VAR_13.avail_out;
        FUNC_3 (VAR_15, VAR_14, VAR_12);
    } while (VAR_11 != VAR_6);

    *VAR_10 = VAR_15->len;
    *VAR_9 = FUNC_4 (VAR_15, VAR_0);


    (void)FUNC_1(&VAR_13);
    return 0;
}
