
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int status; scalar_t__ bytes_to_read; int bytes_to_write; int write_buf_len; int write_buf; int ssl; int read_buf_len; int read_buf; } ;
typedef TYPE_1__ PEER ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_5(PEER *VAR_5)
{
    int VAR_6 = 1, VAR_7;

    if (!FUNC_3(VAR_5->status, VAR_1)) {
        VAR_5->status = VAR_3;
        return;
    }


    while (VAR_6 > 0 && VAR_5->bytes_to_read) {
        VAR_6 = FUNC_1(VAR_5->ssl, VAR_5->read_buf, VAR_5->read_buf_len);
        if (VAR_6 > 0) {
            if (!FUNC_4(VAR_6, VAR_5->bytes_to_read)) {
                VAR_5->status = VAR_3;
                return;
            }
            VAR_5->bytes_to_read -= VAR_6;
        } else if (VAR_6 == 0) {
            VAR_5->status = VAR_0;
            return;
        } else {
            int VAR_8 = FUNC_0(VAR_5->ssl, VAR_6);
            if (VAR_8 != VAR_4) {
                VAR_5->status = VAR_0;
                return;
            }
        }
    }


    VAR_7 = VAR_5->bytes_to_write < VAR_5->write_buf_len ? VAR_5->bytes_to_write :
        VAR_5->write_buf_len;
    if (VAR_7) {
        VAR_6 = FUNC_2(VAR_5->ssl, VAR_5->write_buf, VAR_7);
        if (VAR_6 > 0) {

            if (!FUNC_3(VAR_6, VAR_7)) {
                VAR_5->status = VAR_3;
                return;
            }
            VAR_5->bytes_to_write -= VAR_6;
        } else {




            VAR_5->status = VAR_0;
            return;
        }
    }







    if (VAR_5->bytes_to_write == 0 && VAR_5->bytes_to_read == 0) {
        VAR_5->status = VAR_2;
    }
}
