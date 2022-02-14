
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ rlen; TYPE_2__* data; } ;
struct web_client {scalar_t__ ifd; scalar_t__ ofd; int id; TYPE_1__ response; } ;
typedef scalar_t__ ssize_t ;
struct TYPE_4__ {scalar_t__ size; scalar_t__ len; char* buffer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct web_client*) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (TYPE_2__*,scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,char*,int ,...) ;
 scalar_t__ FUNC_4 (int) ;
 scalar_t__ FUNC_5 (scalar_t__,char*,size_t) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (struct web_client*) ;
 int FUNC_8 (struct web_client*) ;
 scalar_t__ VAR_3 ;

ssize_t FUNC_9(struct web_client *VAR_4)
{
    if(FUNC_6(VAR_4->response.rlen > VAR_4->response.data->size))
        FUNC_1(VAR_4->response.data, VAR_4->response.rlen - VAR_4->response.data->size);

    if(FUNC_6(VAR_4->response.rlen <= VAR_4->response.data->len))
        return 0;

    ssize_t VAR_5 = VAR_4->response.rlen - VAR_4->response.data->len;
    ssize_t VAR_6 = FUNC_5(VAR_4->ifd, &VAR_4->response.data->buffer[VAR_4->response.data->len], (size_t)VAR_5);
    if(FUNC_4(VAR_6 > 0)) {
        size_t VAR_7 = VAR_4->response.data->len;
        (void)VAR_7;

        VAR_4->response.data->len += VAR_6;
        VAR_4->response.data->buffer[VAR_4->response.data->len] = '\0';

        FUNC_3(VAR_0, "%llu: Read %zd bytes.", VAR_4->id, VAR_6);
        FUNC_3(VAR_1, "%llu: Read data: '%s'.", VAR_4->id, &VAR_4->response.data->buffer[VAR_7]);

        FUNC_8(VAR_4);

        if(VAR_4->response.rlen && VAR_4->response.data->len >= VAR_4->response.rlen)
            FUNC_7(VAR_4);
    }
    else if(FUNC_4(VAR_6 == 0)) {
        FUNC_3(VAR_0, "%llu: Out of input file data.", VAR_4->id);







        FUNC_7(VAR_4);

        FUNC_3(VAR_0, "%llu: Read the whole file.", VAR_4->id);

        if(VAR_3 != VAR_2) {
            if (VAR_4->ifd != VAR_4->ofd) FUNC_2(VAR_4->ifd);
        }

        VAR_4->ifd = VAR_4->ofd;
    }
    else {
        FUNC_3(VAR_0, "%llu: read data failed.", VAR_4->id);
        FUNC_0(VAR_4);
    }

    return(VAR_6);
}
