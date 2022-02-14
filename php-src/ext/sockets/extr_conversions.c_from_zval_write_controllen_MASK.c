
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int zval ;
typedef scalar_t__ uint32_t ;
struct msghdr {scalar_t__ msg_controllen; int msg_control; } ;
struct TYPE_7__ {int has_error; } ;
struct TYPE_8__ {TYPE_1__ err; } ;
typedef TYPE_2__ ser_context ;


 int FUNC_0 (scalar_t__,TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,char*) ;
 int FUNC_2 (int const*,char*,TYPE_2__*) ;

__attribute__((used)) static void FUNC_3(const zval *VAR_0, char *VAR_1, ser_context *VAR_2)
{
 struct msghdr *VAR_3 = (struct msghdr *)VAR_1;
 uint32_t VAR_4;




 FUNC_2(VAR_0, (char*)&VAR_4, VAR_2);
 if (!VAR_2->err.has_error && VAR_4 == 0) {
  FUNC_1(VAR_2, "controllen cannot be 0");
  return;
 }
 VAR_3->msg_control = FUNC_0(VAR_4, VAR_2);
 VAR_3->msg_controllen = VAR_4;
}
