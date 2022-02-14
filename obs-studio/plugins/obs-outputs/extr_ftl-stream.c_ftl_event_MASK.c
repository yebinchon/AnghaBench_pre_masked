
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct ftl_stream {int output; } ;
struct TYPE_5__ {scalar_t__ type; scalar_t__ reason; int error_code; } ;
struct TYPE_6__ {TYPE_1__ event; } ;
struct TYPE_7__ {TYPE_2__ msg; } ;
typedef TYPE_3__ ftl_status_msg_t ;
typedef enum ret_type { ____Placeholder_ret_type } ret_type ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static enum ret_type FUNC_4(struct ftl_stream *VAR_7,
          ftl_status_msg_t VAR_8)
{
 if (VAR_8.msg.event.type != VAR_1)
  return VAR_5;

 FUNC_2("Disconnected from ingest with reason: %s",
      FUNC_1(VAR_8.msg.event.error_code));

 if (VAR_8.msg.event.reason == VAR_0) {
  return VAR_4;
 }


 FUNC_0(VAR_2, "Reconnecting to Ingest");
 FUNC_3(VAR_7->output, VAR_3);
 return VAR_6;
}
