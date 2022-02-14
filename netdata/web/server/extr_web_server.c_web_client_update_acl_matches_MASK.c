
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct web_client {int port_acl; int acl; int client_host; int client_ip; int ifd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int ,int ,int ,int,int ,char*,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;

void FUNC_1(struct web_client *VAR_19) {
    VAR_19->acl = VAR_4;

    if (!VAR_10 ||
        FUNC_0(VAR_19->ifd, VAR_19->client_ip, VAR_19->client_host, sizeof(VAR_19->client_host),
                           VAR_10, "dashboard", VAR_9))
        VAR_19->acl |= VAR_1;

    if (!VAR_16 ||
        FUNC_0(VAR_19->ifd, VAR_19->client_ip, VAR_19->client_host, sizeof(VAR_19->client_host),
                           VAR_16, "registry", VAR_15))
        VAR_19->acl |= VAR_5;

    if (!VAR_8 ||
        FUNC_0(VAR_19->ifd, VAR_19->client_ip, VAR_19->client_host, sizeof(VAR_19->client_host),
                           VAR_8, "badges", VAR_7))
        VAR_19->acl |= VAR_0;

    if (!VAR_12 ||
        FUNC_0(VAR_19->ifd, VAR_19->client_ip, VAR_19->client_host, sizeof(VAR_19->client_host),
                           VAR_12, "management", VAR_11))
        VAR_19->acl |= VAR_2;

    if (!VAR_18 ||
        FUNC_0(VAR_19->ifd, VAR_19->client_ip, VAR_19->client_host, sizeof(VAR_19->client_host),
                           VAR_18, "streaming", VAR_17))
        VAR_19->acl |= VAR_6;

    if (!VAR_14 ||
       FUNC_0(VAR_19->ifd, VAR_19->client_ip, VAR_19->client_host, sizeof(VAR_19->client_host),
                          VAR_14, "netdata.conf", VAR_13))
        VAR_19->acl |= VAR_3;

    VAR_19->acl &= VAR_19->port_acl;
}
