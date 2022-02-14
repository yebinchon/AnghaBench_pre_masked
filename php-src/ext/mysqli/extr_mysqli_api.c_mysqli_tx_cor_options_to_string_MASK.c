
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_5__ {scalar_t__ s; } ;
typedef TYPE_1__ smart_str ;
typedef int MYSQL ;


 int const VAR_0 ;
 int const VAR_1 ;
 int const VAR_2 ;
 int const VAR_3 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,char*,int) ;

__attribute__((used)) static void FUNC_3(const MYSQL * const VAR_4, smart_str * VAR_5, const uint32_t VAR_6)
{
 if (VAR_6 & VAR_0 && !(VAR_6 & VAR_1)) {
  if (VAR_5->s && FUNC_0(VAR_5->s)) {
   FUNC_2(VAR_5, " ", sizeof(" ") - 1);
  }
  FUNC_2(VAR_5, "AND CHAIN", sizeof("AND CHAIN") - 1);
 } else if (VAR_6 & VAR_1 && !(VAR_6 & VAR_0)) {
  if (VAR_5->s && FUNC_0(VAR_5->s)) {
   FUNC_2(VAR_5, " ", sizeof(" ") - 1);
  }
  FUNC_2(VAR_5, "AND NO CHAIN", sizeof("AND NO CHAIN") - 1);
 }

 if (VAR_6 & VAR_3 && !(VAR_6 & VAR_2)) {
  if (VAR_5->s && FUNC_0(VAR_5->s)) {
   FUNC_2(VAR_5, " ", sizeof(" ") - 1);
  }
  FUNC_2(VAR_5, "RELEASE", sizeof("RELEASE") - 1);
 } else if (VAR_6 & VAR_2 && !(VAR_6 & VAR_3)) {
  if (VAR_5->s && FUNC_0(VAR_5->s)) {
   FUNC_2(VAR_5, " ", sizeof(" ") - 1);
  }
  FUNC_2(VAR_5, "NO RELEASE", sizeof("NO RELEASE") - 1);
 }
 FUNC_1(VAR_5);
}
