
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct amt_host_if_resp_header {int dummy; } ;
struct TYPE_2__ {scalar_t__ major; scalar_t__ minor; } ;
struct amt_host_if_msg_header {int length; int command; scalar_t__ _reserved; TYPE_1__ version; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static uint32_t FUNC_0(uint32_t VAR_4,
    const struct amt_host_if_msg_header *VAR_5,
    uint32_t VAR_6)
{
 if (VAR_6 < sizeof(struct amt_host_if_resp_header)) {
  return VAR_2;
 } else if (VAR_6 != (VAR_5->length +
    sizeof(struct amt_host_if_msg_header))) {
  return VAR_2;
 } else if (VAR_5->command != VAR_4) {
  return VAR_2;
 } else if (VAR_5->_reserved != 0) {
  return VAR_2;
 } else if (VAR_5->version.major != VAR_0 ||
     VAR_5->version.minor < VAR_1) {
  return VAR_2;
 }
 return VAR_3;
}
