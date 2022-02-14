
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct tm {int tm_wday; int tm_year; int tm_mon; int tm_mday; int tm_hour; int tm_min; int tm_sec; } ;
struct interface_info {char* name; } ;
struct client_lease {char* filename; char* server_name; int expiry; int rebind; int renewal; TYPE_2__* options; TYPE_1__* medium; int address; scalar_t__ is_bootp; scalar_t__ is_static; } ;
struct TYPE_6__ {char* name; } ;
struct TYPE_5__ {scalar_t__ len; int data; } ;
struct TYPE_4__ {char* string; } ;


 TYPE_3__* VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int ,char*) ;
 int FUNC_3 (scalar_t__,char*,...) ;
 struct tm* FUNC_4 (int *) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 char* FUNC_5 (int ) ;
 char* FUNC_6 (int,int ,scalar_t__,int,int) ;
 int FUNC_7 (struct interface_info*) ;

void
FUNC_8(struct interface_info *VAR_3, struct client_lease *VAR_4,
    int VAR_5)
{
 static int VAR_6;
 struct tm *VAR_7;
 int VAR_8;

 if (!VAR_5) {
  if (VAR_6++ > 20) {
   FUNC_7(VAR_3);
   VAR_6 = 0;
  }
 }



 if (VAR_4->is_static)
  return;

 if (!VAR_1) {
  VAR_1 = FUNC_2(VAR_2, "w");
  if (!VAR_1) {
   FUNC_0("can't create %s", VAR_2);
                        return;
                }
 }

 FUNC_3(VAR_1, "lease {\n");
 if (VAR_4->is_bootp)
  FUNC_3(VAR_1, "  bootp;\n");
 FUNC_3(VAR_1, "  interface \"%s\";\n", VAR_3->name);
 FUNC_3(VAR_1, "  fixed-address %s;\n", FUNC_5(VAR_4->address));
 if (VAR_4->filename)
  FUNC_3(VAR_1, "  filename \"%s\";\n", VAR_4->filename);
 if (VAR_4->server_name)
  FUNC_3(VAR_1, "  server-name \"%s\";\n",
      VAR_4->server_name);
 if (VAR_4->medium)
  FUNC_3(VAR_1, "  medium \"%s\";\n", VAR_4->medium->string);
 for (VAR_8 = 0; VAR_8 < 256; VAR_8++)
  if (VAR_4->options[VAR_8].len)
   FUNC_3(VAR_1, "  option %s %s;\n",
       VAR_0[VAR_8].name,
       FUNC_6(VAR_8, VAR_4->options[VAR_8].data,
       VAR_4->options[VAR_8].len, 1, 1));

 VAR_7 = FUNC_4(&VAR_4->renewal);
        if (VAR_7)
     FUNC_3(VAR_1, "  renew %d %d/%d/%d %02d:%02d:%02d;\n",
         VAR_7->tm_wday, VAR_7->tm_year + 1900, VAR_7->tm_mon + 1, VAR_7->tm_mday,
         VAR_7->tm_hour, VAR_7->tm_min, VAR_7->tm_sec);
 VAR_7 = FUNC_4(&VAR_4->rebind);
        if (VAR_7)
     FUNC_3(VAR_1, "  rebind %d %d/%d/%d %02d:%02d:%02d;\n",
          VAR_7->tm_wday, VAR_7->tm_year + 1900, VAR_7->tm_mon + 1, VAR_7->tm_mday,
          VAR_7->tm_hour, VAR_7->tm_min, VAR_7->tm_sec);
 VAR_7 = FUNC_4(&VAR_4->expiry);
        if (VAR_7)
     FUNC_3(VAR_1, "  expire %d %d/%d/%d %02d:%02d:%02d;\n",
         VAR_7->tm_wday, VAR_7->tm_year + 1900, VAR_7->tm_mon + 1, VAR_7->tm_mday,
         VAR_7->tm_hour, VAR_7->tm_min, VAR_7->tm_sec);
 FUNC_3(VAR_1, "}\n");
 FUNC_1(VAR_1);
}
