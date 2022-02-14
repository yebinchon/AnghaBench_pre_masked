
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct web_client {size_t stats_sent_bytes; int id; } ;
typedef size_t ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct web_client*) ;
 int FUNC_1 (int ,char*,int ,...) ;
 scalar_t__ FUNC_2 (char*,char*,size_t) ;
 int FUNC_3 (char*) ;
 size_t FUNC_4 (struct web_client*,char*,int ,int ) ;

ssize_t FUNC_5(struct web_client *VAR_2, size_t VAR_3)
{
    FUNC_1(VAR_0, "%llu: OPEN CHUNK of %zu bytes (hex: %zx).", VAR_2->id, VAR_3, VAR_3);
    char VAR_4[24];
    ssize_t VAR_5;
    VAR_5 = (ssize_t)FUNC_2(VAR_4, "%zX\r\n", VAR_3);
    VAR_4[VAR_5] = 0x00;

    VAR_5 = FUNC_4(VAR_2,VAR_4,FUNC_3(VAR_4),0);
    if(VAR_5 > 0) {
        FUNC_1(VAR_0, "%llu: Sent chunk header %zd bytes.", VAR_2->id, VAR_5);
        VAR_2->stats_sent_bytes += VAR_5;
    }

    else if(VAR_5 == 0) {
        FUNC_1(VAR_1, "%llu: Did not send chunk header to the client.", VAR_2->id);
        FUNC_0(VAR_2);
    }
    else {
        FUNC_1(VAR_1, "%llu: Failed to send chunk header to client.", VAR_2->id);
        FUNC_0(VAR_2);
    }

    return VAR_5;
}
