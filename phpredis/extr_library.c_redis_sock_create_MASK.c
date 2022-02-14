
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {long retry_interval; int persistent; int port; double timeout; double read_timeout; scalar_t__ reply_literal; scalar_t__ tcp_keepalive; scalar_t__ readonly; int scan; int * err; int * pipeline_cmd; int * current; int * head; int mode; scalar_t__ compression_level; int compression; int serializer; int * persistent_id; scalar_t__ dbNumber; scalar_t__ watching; int status; int * stream; void* host; } ;
typedef TYPE_1__ RedisSock ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__* FUNC_0 (int,int) ;
 int FUNC_1 (char*) ;
 void* FUNC_2 (char*,int,int ) ;

RedisSock*
FUNC_3(char *VAR_5, int VAR_6, int VAR_7,
                  double VAR_8, double VAR_9,
                  int VAR_10, char *VAR_11,
                  long VAR_12)
{
    RedisSock *VAR_13;

    VAR_13 = FUNC_0(1, sizeof(RedisSock));
    VAR_13->host = FUNC_2(VAR_5, VAR_6, 0);
    VAR_13->stream = ((void*)0);
    VAR_13->status = VAR_4;
    VAR_13->watching = 0;
    VAR_13->dbNumber = 0;
    VAR_13->retry_interval = VAR_12 * 1000;
    VAR_13->persistent = VAR_10;
    VAR_13->persistent_id = ((void*)0);

    if (VAR_10 && VAR_11 != ((void*)0)) {
        VAR_13->persistent_id = FUNC_2(VAR_11, FUNC_1(VAR_11), 0);
    }

    VAR_13->port = VAR_7;
    VAR_13->timeout = VAR_8;
    VAR_13->read_timeout = VAR_9;

    VAR_13->serializer = VAR_3;
    VAR_13->compression = VAR_1;
    VAR_13->compression_level = 0;
    VAR_13->mode = VAR_0;
    VAR_13->head = ((void*)0);
    VAR_13->current = ((void*)0);

    VAR_13->pipeline_cmd = ((void*)0);

    VAR_13->err = ((void*)0);

    VAR_13->scan = VAR_2;

    VAR_13->readonly = 0;
    VAR_13->tcp_keepalive = 0;
    VAR_13->reply_literal = 0;

    return VAR_13;
}
