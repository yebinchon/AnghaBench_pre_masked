
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct packet {TYPE_5__* raw; TYPE_4__* options; } ;
struct TYPE_8__ {int len; char* iabuf; } ;
struct TYPE_7__ {int len; char* iabuf; } ;
struct client_lease {char* server_name; char* filename; TYPE_3__ address; TYPE_2__ serveraddress; TYPE_1__* options; } ;
struct TYPE_10__ {int yiaddr; int siaddr; int* sname; int* file; } ;
struct TYPE_9__ {int len; int* data; } ;
struct TYPE_6__ {char* data; size_t len; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (struct client_lease*,int) ;
 int FUNC_1 (struct client_lease*) ;
 void* FUNC_2 (int) ;
 int FUNC_3 (char*,int*,int) ;
 int FUNC_4 (struct client_lease*,int ,int) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*,...) ;

struct client_lease *
FUNC_7(struct packet *VAR_3)
{
 struct client_lease *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_2(sizeof(struct client_lease));

 if (!VAR_4) {
  FUNC_6("dhcpoffer: no memory to record lease.");
  return (((void*)0));
 }

 FUNC_4(VAR_4, 0, sizeof(*VAR_4));


 for (VAR_5 = 0; VAR_5 < 256; VAR_5++) {
  if (VAR_3->options[VAR_5].len) {
   VAR_4->options[VAR_5].data =
       FUNC_2(VAR_3->options[VAR_5].len + 1);
   if (!VAR_4->options[VAR_5].data) {
    FUNC_6("dhcpoffer: no memory for option %d", VAR_5);
    FUNC_1(VAR_4);
    return (((void*)0));
   } else {
    FUNC_3(VAR_4->options[VAR_5].data,
        VAR_3->options[VAR_5].data,
        VAR_3->options[VAR_5].len);
    VAR_4->options[VAR_5].len =
        VAR_3->options[VAR_5].len;
    VAR_4->options[VAR_5].data[VAR_4->options[VAR_5].len] =
        0;
   }
   if (!FUNC_0(VAR_4,VAR_5)) {

    FUNC_6("Invalid lease option - ignoring offer");
    FUNC_1(VAR_4);
    return (((void*)0));
   }
  }
 }

 VAR_4->address.len = sizeof(VAR_3->raw->yiaddr);
 FUNC_3(VAR_4->address.iabuf, &VAR_3->raw->yiaddr, VAR_4->address.len);






 if ((!VAR_3->options[VAR_2].len ||
     !(VAR_3->options[VAR_2].data[0] & 2)) &&
     VAR_3->raw->sname[0]) {
  VAR_4->server_name = FUNC_2(VAR_1 + 1);
  if (!VAR_4->server_name) {
   FUNC_6("dhcpoffer: no memory for server name.");
   FUNC_1(VAR_4);
   return (((void*)0));
  }
  FUNC_3(VAR_4->server_name, VAR_3->raw->sname, VAR_1);
  VAR_4->server_name[VAR_1]='\0';
  if (!FUNC_5(VAR_4->server_name) ) {
   FUNC_6("Bogus server name %s", VAR_4->server_name );
   FUNC_1(VAR_4);
   return (((void*)0));
  }

 }


 if ((!VAR_3->options[VAR_2].len ||
     !(VAR_3->options[VAR_2].data[0] & 1)) &&
     VAR_3->raw->file[0]) {

  VAR_4->filename = FUNC_2(VAR_0 + 1);
  if (!VAR_4->filename) {
   FUNC_6("dhcpoffer: no memory for filename.");
   FUNC_1(VAR_4);
   return (((void*)0));
  }
  FUNC_3(VAR_4->filename, VAR_3->raw->file, VAR_0);
  VAR_4->filename[VAR_0]='\0';
 }
 return VAR_4;
}
