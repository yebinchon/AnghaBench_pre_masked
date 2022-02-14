
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct xsk_queue {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct xsk_queue*,struct xsk_queue*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 () ;
 struct xsk_queue* FUNC_3 (scalar_t__,int) ;

__attribute__((used)) static int FUNC_4(u32 VAR_2, struct xsk_queue **VAR_3,
     bool VAR_4)
{
 struct xsk_queue *VAR_5;

 if (VAR_2 == 0 || *VAR_3 || !FUNC_1(VAR_2))
  return -VAR_0;

 VAR_5 = FUNC_3(VAR_2, VAR_4);
 if (!VAR_5)
  return -VAR_1;


 FUNC_2();
 FUNC_0(*VAR_3, VAR_5);
 return 0;
}
