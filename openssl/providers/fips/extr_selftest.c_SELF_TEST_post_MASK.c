
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int (* bio_free_cb ) (int *) ;int libctx; int bio_read_ex_cb; int * indicator_data; int * (* bio_new_buffer_cb ) (int *,int ) ;int * indicator_checksum_data; int module_filename; int * (* bio_new_file_cb ) (int ,char*) ;int * module_checksum_data; } ;
typedef TYPE_1__ SELF_TEST_POST_PARAMS ;
typedef int BIO ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (unsigned char*) ;
 unsigned char* FUNC_1 (int *,long*) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int ,char*) ;
 int * FUNC_4 (int *,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int ,unsigned char*,long,int ) ;

int FUNC_8(SELF_TEST_POST_PARAMS *VAR_5)
{
    int VAR_6 = 0;
    int VAR_7 = 0;
    int VAR_8 = (VAR_4 != VAR_1);
    long VAR_9;
    BIO *VAR_10 = ((void*)0), *VAR_11 = ((void*)0);
    unsigned char *VAR_12 = ((void*)0);
    unsigned char *VAR_13 = ((void*)0);

    if (VAR_5 == ((void*)0)
            || VAR_4 == VAR_0
            || VAR_4 == VAR_3
            || VAR_5->module_checksum_data == ((void*)0))
        goto end;

    VAR_12 = FUNC_1(VAR_5->module_checksum_data,
                                         &VAR_9);
    if (VAR_12 == ((void*)0))
        goto end;
    VAR_10 = (*VAR_5->bio_new_file_cb)(VAR_5->module_filename, "rb");


    if (VAR_10 == ((void*)0)
            || !FUNC_7(VAR_10, VAR_5->bio_read_ex_cb,
                                 VAR_12, VAR_9, VAR_5->libctx))
        goto end;


    if (VAR_5->indicator_data != ((void*)0)) {




        if (VAR_5->indicator_checksum_data == ((void*)0))
            goto end;
        VAR_13 = FUNC_1(VAR_5->indicator_checksum_data,
                                                &VAR_9);
        if (VAR_13 == ((void*)0))
            goto end;

        VAR_11 =
            (*VAR_5->bio_new_buffer_cb)(VAR_5->indicator_data,
                                     FUNC_2(VAR_5->indicator_data));
        if (VAR_11 == ((void*)0)
                || !FUNC_7(VAR_11, VAR_5->bio_read_ex_cb,
                                     VAR_13, VAR_9,
                                     VAR_5->libctx))
            goto end;
        else
            VAR_7 = 1;
    }


    if (VAR_8 || VAR_7 == 0) {

    }
    VAR_6 = 1;
end:
    FUNC_0(VAR_12);
    FUNC_0(VAR_13);

    if (VAR_5 != ((void*)0)) {
        (*VAR_5->bio_free_cb)(VAR_11);
        (*VAR_5->bio_free_cb)(VAR_10);
    }
    VAR_4 = VAR_6 ? VAR_2 : VAR_0;

    return VAR_6;
}
