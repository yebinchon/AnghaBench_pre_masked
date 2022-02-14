
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct sock {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct sock*) ;
 int FUNC_1 (struct sock*) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (struct sock*) ;
 int FUNC_3 (int,int) ;

__attribute__((used)) static u32 FUNC_4(struct sock *VAR_4)
{
 u32 VAR_5, VAR_6 = 0;

 if (VAR_2 && FUNC_2(VAR_4)) {
  VAR_5 = ((u64)FUNC_0(VAR_4) * VAR_3)
    / VAR_1;
  VAR_6 = (VAR_2 * FUNC_1(VAR_4))
        >> VAR_0;
  VAR_6 = FUNC_3(VAR_6, VAR_5);
 }

 return VAR_6;
}
