
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ code; } ;
typedef TYPE_1__ http_response_status_code_pair ;



__attribute__((used)) static int FUNC_0(const void *VAR_0, const void *VAR_1)
{
 const http_response_status_code_pair *VAR_2 = (const http_response_status_code_pair *) VAR_0;
 const http_response_status_code_pair *VAR_3 = (const http_response_status_code_pair *) VAR_1;

 if (VAR_2->code < VAR_3->code) {
  return -1;
 } else if (VAR_2->code > VAR_3->code) {
  return 1;
 }

 return 0;
}
