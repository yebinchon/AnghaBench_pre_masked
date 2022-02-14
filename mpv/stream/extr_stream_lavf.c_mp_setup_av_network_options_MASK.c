
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stream_lavf_params {char* useragent; char* cookies_file; char* tls_ca_file; char* tls_cert_file; char* tls_key_file; scalar_t__ timeout; char* http_proxy; int avopts; scalar_t__* http_header_fields; scalar_t__ referrer; scalar_t__ tls_verify; scalar_t__ cookies_enabled; } ;
struct mpv_global {int dummy; } ;
struct mp_log {int dummy; } ;
typedef int buf ;
typedef int AVDictionary ;


 int FUNC_0 (int **,char*,char*,int ) ;
 char* FUNC_1 (void*,struct mp_log*,char*) ;
 struct stream_lavf_params* FUNC_2 (void*,struct mpv_global*,int *) ;
 char* FUNC_3 (void*,struct mpv_global*,char*) ;
 int FUNC_4 (int **,int ) ;
 int FUNC_5 (char*,int,char*,long long) ;
 int VAR_0 ;
 scalar_t__ FUNC_6 (char*) ;
 char* FUNC_7 (char*,char*,scalar_t__) ;
 int FUNC_8 (void*) ;
 void* FUNC_9 (int *) ;
 char* FUNC_10 (void*,char*) ;

void FUNC_11(AVDictionary **VAR_1, struct mpv_global *VAR_2,
                                 struct mp_log *VAR_3)
{
    void *VAR_4 = FUNC_9(((void*)0));
    struct stream_lavf_params *VAR_5 =
        FUNC_2(VAR_4, VAR_2, &VAR_0);


    if (VAR_5->useragent)
        FUNC_0(VAR_1, "user_agent", VAR_5->useragent, 0);
    if (VAR_5->cookies_enabled) {
        char *VAR_6 = VAR_5->cookies_file;
        if (VAR_6 && VAR_6[0])
            VAR_6 = FUNC_3(VAR_4, VAR_2, VAR_6);
        char *VAR_7 = FUNC_1(VAR_4, VAR_3, VAR_6);
        if (VAR_7 && VAR_7[0])
            FUNC_0(VAR_1, "cookies", VAR_7, 0);
    }
    FUNC_0(VAR_1, "tls_verify", VAR_5->tls_verify ? "1" : "0", 0);
    if (VAR_5->tls_ca_file)
        FUNC_0(VAR_1, "ca_file", VAR_5->tls_ca_file, 0);
    if (VAR_5->tls_cert_file)
        FUNC_0(VAR_1, "cert_file", VAR_5->tls_cert_file, 0);
    if (VAR_5->tls_key_file)
        FUNC_0(VAR_1, "key_file", VAR_5->tls_key_file, 0);
    char *VAR_8 = FUNC_10(VAR_4, "");
    if (VAR_5->referrer) {
        VAR_8 = FUNC_7(VAR_8, "Referer: %s\r\n",
                                              VAR_5->referrer);
    }
    if (VAR_5->http_header_fields) {
        for (int VAR_9 = 0; VAR_5->http_header_fields[VAR_9]; VAR_9++) {
            VAR_8 = FUNC_7(VAR_8, "%s\r\n",
                                                  VAR_5->http_header_fields[VAR_9]);
        }
    }
    if (FUNC_6(VAR_8))
        FUNC_0(VAR_1, "headers", VAR_8, 0);
    FUNC_0(VAR_1, "icy", "1", 0);

    if (VAR_5->timeout > 0) {
        char VAR_10[80];
        FUNC_5(VAR_10, sizeof(VAR_10), "%lld", (long long)(VAR_5->timeout * 1e6));
        FUNC_0(VAR_1, "timeout", VAR_10, 0);
    }
    if (VAR_5->http_proxy && VAR_5->http_proxy[0])
        FUNC_0(VAR_1, "http_proxy", VAR_5->http_proxy, 0);

    FUNC_4(VAR_1, VAR_5->avopts);

    FUNC_8(VAR_4);
}
