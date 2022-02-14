
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct seat_attachment_config {int identifier; } ;
struct cmd_results {int dummy; } ;
struct TYPE_5__ {TYPE_1__* seat_config; } ;
struct TYPE_6__ {TYPE_2__ handler_context; scalar_t__ reading; } ;
struct TYPE_4__ {int attachments; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct cmd_results* FUNC_0 (int,char*,int ,int) ;
 struct cmd_results* FUNC_1 (int ,char*) ;
 TYPE_3__* VAR_4 ;
 int FUNC_2 (int ,struct seat_attachment_config*) ;
 struct seat_attachment_config* FUNC_3 () ;
 int FUNC_4 (char*) ;

struct cmd_results *FUNC_5(int VAR_5, char **VAR_6) {
 struct cmd_results *VAR_7 = ((void*)0);
 if ((VAR_7 = FUNC_0(VAR_5, "attach", VAR_3, 1))) {
  return VAR_7;
 }
 if (!VAR_4->handler_context.seat_config) {
  return FUNC_1(VAR_1, "No seat defined");
 }
 if (VAR_4->reading) {
  return FUNC_1(VAR_0, ((void*)0));
 }

 struct seat_attachment_config *VAR_8 = FUNC_3();
 if (!VAR_8) {
  return FUNC_1(VAR_1,
    "Failed to allocate seat attachment config");
 }
 VAR_8->identifier = FUNC_4(VAR_6[0]);
 FUNC_2(VAR_4->handler_context.seat_config->attachments, VAR_8);

 return FUNC_1(VAR_2, ((void*)0));
}
