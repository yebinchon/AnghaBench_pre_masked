
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct web_client {int id; int stats_sent_bytes; } ;
typedef scalar_t__ ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct web_client*) ;
 int FUNC_1 (int ,char*,int ,...) ;
 scalar_t__ FUNC_2 (struct web_client*,char*,int,int ) ;

ssize_t FUNC_3(struct web_client *VAR_2)
{


    ssize_t VAR_3;
    VAR_3 = FUNC_2(VAR_2,"\r\n",2,0);
    if(VAR_3 > 0) {
        FUNC_1(VAR_0, "%llu: Sent chunk suffix %zd bytes.", VAR_2->id, VAR_3);
        VAR_2->stats_sent_bytes += VAR_3;
    }

    else if(VAR_3 == 0) {
        FUNC_1(VAR_1, "%llu: Did not send chunk suffix to the client.", VAR_2->id);
        FUNC_0(VAR_2);
    }
    else {
        FUNC_1(VAR_1, "%llu: Failed to send chunk suffix to client.", VAR_2->id);
        FUNC_0(VAR_2);
    }

    return VAR_3;
}
