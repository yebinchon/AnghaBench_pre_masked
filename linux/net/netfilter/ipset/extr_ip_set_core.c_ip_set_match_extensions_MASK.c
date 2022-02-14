
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ip_set_ext {int bytes_op; int bytes; int packets_op; int packets; } ;
struct ip_set_counter {int dummy; } ;
struct ip_set {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct ip_set*) ;
 scalar_t__ FUNC_1 (struct ip_set*) ;
 scalar_t__ FUNC_2 (struct ip_set*) ;
 struct ip_set_counter* FUNC_3 (void*,struct ip_set*) ;
 int FUNC_4 (void*,struct ip_set*) ;
 int FUNC_5 (void*,struct ip_set*) ;
 int FUNC_6 (struct ip_set_counter*) ;
 int FUNC_7 (struct ip_set_counter*) ;
 int FUNC_8 (int ,struct ip_set_ext const*,struct ip_set_ext*,int) ;
 scalar_t__ FUNC_9 (int ,int ,int ) ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 (struct ip_set_counter*,struct ip_set_ext const*,int) ;

bool
FUNC_12(struct ip_set *VAR_1, const struct ip_set_ext *VAR_2,
   struct ip_set_ext *VAR_3, u32 VAR_4, void *VAR_5)
{
 if (FUNC_2(VAR_1) &&
     FUNC_10(FUNC_5(VAR_5, VAR_1)))
  return 0;
 if (FUNC_0(VAR_1)) {
  struct ip_set_counter *VAR_6 = FUNC_3(VAR_5, VAR_1);

  if (VAR_4 & VAR_0 &&
      !(FUNC_9(FUNC_7(VAR_6),
    VAR_3->packets, VAR_3->packets_op) &&
        FUNC_9(FUNC_6(VAR_6),
    VAR_3->bytes, VAR_3->bytes_op)))
   return 0;
  FUNC_11(VAR_6, VAR_2, VAR_4);
 }
 if (FUNC_1(VAR_1))
  FUNC_8(FUNC_4(VAR_5, VAR_1),
       VAR_2, VAR_3, VAR_4);
 return 1;
}
