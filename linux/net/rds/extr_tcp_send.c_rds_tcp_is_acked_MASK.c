
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
typedef scalar_t__ u32 ;
struct rds_message {scalar_t__ m_ack_seq; int m_flags; } ;
typedef scalar_t__ __s32 ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;

__attribute__((used)) static int FUNC_1(struct rds_message *VAR_1, uint64_t VAR_2)
{
 if (!FUNC_0(VAR_0, &VAR_1->m_flags))
  return 0;
 return (__s32)((u32)VAR_1->m_ack_seq - (u32)VAR_2) < 0;
}
