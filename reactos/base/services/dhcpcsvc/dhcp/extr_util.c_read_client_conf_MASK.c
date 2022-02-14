
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef char u_int8_t ;
struct TYPE_6__ {char* haddr; int hlen; } ;
struct interface_info {TYPE_3__ hw_address; TYPE_1__* client; } ;
struct client_config {size_t* requested_options; int requested_option_count; TYPE_2__* send_options; } ;
struct TYPE_5__ {char* data; int len; } ;
struct TYPE_4__ {struct client_config* config; } ;
typedef int * LPSTR ;
typedef int DWORD ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 int FUNC_0 (char*,int*) ;
 int FUNC_1 () ;
 int * FUNC_2 (int ,int ,int) ;
 int VAR_9 ;
 int FUNC_3 (char*,char*,int) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int *,char*,int) ;
 int FUNC_6 (char*) ;

int FUNC_7(struct interface_info *VAR_10) {

       struct client_config *VAR_11;
       char VAR_12 [VAR_9 + 1];
       LPSTR VAR_13;
       DWORD VAR_14 = sizeof VAR_12 / sizeof VAR_12[0];

       if ((VAR_10!= ((void*)0)) && (VAR_10->client->config != ((void*)0)))
          VAR_11 = VAR_10->client->config;
       else
       {
           FUNC_6("util.c read_client_conf poorly implemented!");
           return 0;
       }


       FUNC_0(VAR_12, & VAR_14);
       FUNC_3("Hostname: %s, length: %lu",
      VAR_12, VAR_14);

       VAR_13 =
       FUNC_2(FUNC_1(), 0, VAR_14 + 1);
       if (VAR_13 !=((void*)0)) {
           FUNC_5(VAR_13, VAR_12, VAR_14 + 1);

           VAR_11->send_options[VAR_4].data = (u_int8_t*)VAR_13;
           VAR_11->send_options[VAR_4].len = VAR_14;
           FUNC_3("Hostname: %s, length: %d",
                 VAR_11->send_options[VAR_4].data,
                 VAR_11->send_options[VAR_4].len);
       } else {
           FUNC_4("Failed to allocate heap for hostname");
       }

       VAR_11->send_options[VAR_1].data =
             VAR_10->hw_address.haddr;
       VAR_11->send_options[VAR_1].len =
             VAR_10->hw_address.hlen;


       VAR_11->requested_options
           [VAR_11->requested_option_count++] = VAR_7;
       VAR_11->requested_options
           [VAR_11->requested_option_count++] = VAR_0;
       VAR_11->requested_options
           [VAR_11->requested_option_count++] = VAR_8;
       VAR_11->requested_options
           [VAR_11->requested_option_count++] = VAR_6;
       VAR_11->requested_options
           [VAR_11->requested_option_count++] = VAR_2;
       VAR_11->requested_options
           [VAR_11->requested_option_count++] = VAR_3;
       VAR_11->requested_options
           [VAR_11->requested_option_count++] = VAR_4;
       VAR_11->requested_options
           [VAR_11->requested_option_count++] = VAR_5;

       FUNC_6("util.c read_client_conf poorly implemented!");
    return 0;
}
