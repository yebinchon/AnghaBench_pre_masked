
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_queue {int dummy; } ;
struct bio {int dummy; } ;


 int FUNC_0 (struct request_queue*,struct bio*,unsigned int) ;
 int FUNC_1 (struct bio*) ;
 scalar_t__ FUNC_2 (struct request_queue*) ;

__attribute__((used)) static inline bool
FUNC_3(struct request_queue *VAR_0, struct bio *VAR_1,
  unsigned int VAR_2)
{
 if (FUNC_2(VAR_0) || !FUNC_1(VAR_1))
  return 0;

 return FUNC_0(VAR_0, VAR_1, VAR_2);
}
