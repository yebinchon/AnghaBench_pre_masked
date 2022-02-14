
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct audit_buffer {int dummy; } ;
typedef scalar_t__ __be32 ;
typedef scalar_t__ __be16 ;


 int FUNC_0 (struct audit_buffer*,char*,char*,scalar_t__*) ;
 scalar_t__* FUNC_1 (scalar_t__) ;

__attribute__((used)) static inline void FUNC_2(struct audit_buffer *VAR_0, __be32 VAR_1,
       __be16 VAR_2, char *VAR_3, char *VAR_4)
{
 if (VAR_1)
  FUNC_0(VAR_0, " %s=%pI4", VAR_3, &VAR_1);
 if (VAR_2)
  FUNC_0(VAR_0, " %s=%d", VAR_4, FUNC_1(VAR_2));
}
