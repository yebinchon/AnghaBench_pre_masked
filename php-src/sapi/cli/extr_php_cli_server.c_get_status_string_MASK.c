
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int needle ;
struct TYPE_4__ {int member_0; char const* str; int * member_1; } ;
typedef TYPE_1__ http_response_status_code_pair ;


 TYPE_1__* FUNC_0 (TYPE_1__*,int ,int ,int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static const char *FUNC_1(int VAR_3)
{
 http_response_status_code_pair VAR_4 = {VAR_3, ((void*)0)},
  *VAR_5 = ((void*)0);

 VAR_5 = FUNC_0(&VAR_4, VAR_0, VAR_1, sizeof(VAR_4), VAR_2);

 if (VAR_5) {
  return VAR_5->str;
 }





 return "Unknown Status Code";
}
