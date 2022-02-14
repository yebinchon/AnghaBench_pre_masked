
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum conn_states { ____Placeholder_conn_states } conn_states ;



__attribute__((used)) static const char *FUNC_0(enum conn_states VAR_0) {
    const char* const VAR_1[] = { "conn_listening",
                                       "conn_new_cmd",
                                       "conn_waiting",
                                       "conn_read",
                                       "conn_parse_cmd",
                                       "conn_write",
                                       "conn_nread",
                                       "conn_swallow",
                                       "conn_closing",
                                       "conn_mwrite",
                                       "conn_closed",
                                       "conn_watch" };
    return VAR_1[VAR_0];
}
