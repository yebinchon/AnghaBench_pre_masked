
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nf_conntrack_l4proto {int dummy; } ;
struct nf_conn {scalar_t__ timeout; } ;
typedef scalar_t__ __s32 ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 struct nf_conntrack_l4proto* FUNC_0 (int) ;
 int FUNC_1 (struct nf_conn*) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static void FUNC_3(struct nf_conn *VAR_5)
{
 const struct nf_conntrack_l4proto *VAR_6;
 int VAR_7 = FUNC_1(VAR_5);
 unsigned int VAR_8;

 VAR_6 = FUNC_0(VAR_7);
 if (!VAR_6)
  return;

 if (VAR_7 == VAR_0)
  VAR_8 = VAR_2;
 else if (VAR_7 == VAR_1)
  VAR_8 = VAR_3;
 else
  return;

 if (FUNC_2(VAR_5->timeout) > (__s32)VAR_8)
  VAR_5->timeout = VAR_4 + VAR_8;
}
