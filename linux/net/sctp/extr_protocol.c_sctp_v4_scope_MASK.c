
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int s_addr; } ;
struct TYPE_4__ {TYPE_1__ sin_addr; } ;
union sctp_addr {TYPE_2__ v4; } ;
typedef enum sctp_scope { ____Placeholder_sctp_scope } sctp_scope ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;

__attribute__((used)) static enum sctp_scope FUNC_6(union sctp_addr *VAR_5)
{
 enum sctp_scope VAR_6;


 if (FUNC_0(VAR_5->v4.sin_addr.s_addr)) {
  VAR_6 = VAR_4;
 } else if (FUNC_2(VAR_5->v4.sin_addr.s_addr)) {
  VAR_6 = VAR_2;
 } else if (FUNC_1(VAR_5->v4.sin_addr.s_addr)) {
  VAR_6 = VAR_1;
 } else if (FUNC_3(VAR_5->v4.sin_addr.s_addr) ||
     FUNC_4(VAR_5->v4.sin_addr.s_addr) ||
     FUNC_5(VAR_5->v4.sin_addr.s_addr)) {
  VAR_6 = VAR_3;
 } else {
  VAR_6 = VAR_0;
 }

 return VAR_6;
}
