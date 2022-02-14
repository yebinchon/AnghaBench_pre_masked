
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*) ;
 int VAR_0 ;

void FUNC_2(void) {
    FUNC_1(VAR_0,"Usage: ./redis-server [/path/to/redis.conf] [options]\n");
    FUNC_1(VAR_0,"       ./redis-server - (read config from stdin)\n");
    FUNC_1(VAR_0,"       ./redis-server -v or --version\n");
    FUNC_1(VAR_0,"       ./redis-server -h or --help\n");
    FUNC_1(VAR_0,"       ./redis-server --test-memory <megabytes>\n\n");
    FUNC_1(VAR_0,"Examples:\n");
    FUNC_1(VAR_0,"       ./redis-server (run the server with default conf)\n");
    FUNC_1(VAR_0,"       ./redis-server /etc/redis/6379.conf\n");
    FUNC_1(VAR_0,"       ./redis-server --port 7777\n");
    FUNC_1(VAR_0,"       ./redis-server --port 7777 --replicaof 127.0.0.1 8888\n");
    FUNC_1(VAR_0,"       ./redis-server /etc/myredis.conf --loglevel verbose\n\n");
    FUNC_1(VAR_0,"Sentinel mode:\n");
    FUNC_1(VAR_0,"       ./redis-server /etc/sentinel.conf --sentinel\n");
    FUNC_0(1);
}
