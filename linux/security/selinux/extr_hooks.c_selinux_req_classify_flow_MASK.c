
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_sock {int secid; } ;
struct flowi {int flowi_secid; } ;



__attribute__((used)) static void FUNC_0(const struct request_sock *VAR_0,
          struct flowi *VAR_1)
{
 VAR_1->flowi_secid = VAR_0->secid;
}
