
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sctp_transport {scalar_t__ error_count; int last_time_heard; } ;


 scalar_t__ FUNC_0 (int ,int ) ;

__attribute__((used)) static struct sctp_transport *FUNC_1(struct sctp_transport *VAR_0,
         struct sctp_transport *VAR_1)
{
 if (VAR_0->error_count > VAR_1->error_count) {
  return VAR_1;
 } else if (VAR_0->error_count == VAR_1->error_count &&
     FUNC_0(VAR_1->last_time_heard,
          VAR_0->last_time_heard)) {
  return VAR_1;
 } else {
  return VAR_0;
 }
}
