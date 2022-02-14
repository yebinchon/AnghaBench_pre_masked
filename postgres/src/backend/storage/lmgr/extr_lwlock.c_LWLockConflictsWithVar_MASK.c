
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint64 ;
struct TYPE_5__ {int state; } ;
typedef TYPE_1__ LWLock ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;

__attribute__((used)) static bool
FUNC_3(LWLock *VAR_1,
        uint64 *VAR_2, uint64 VAR_3, uint64 *VAR_4,
        bool *VAR_5)
{
 bool VAR_6;
 uint64 VAR_7;
 VAR_6 = (FUNC_2(&VAR_1->state) & VAR_0) != 0;

 if (!VAR_6)
 {
  *VAR_5 = 1;
  return 0;
 }

 *VAR_5 = 0;






 FUNC_0(VAR_1);
 VAR_7 = *VAR_2;
 FUNC_1(VAR_1);

 if (VAR_7 != VAR_3)
 {
  VAR_6 = 0;
  *VAR_4 = VAR_7;
 }
 else
 {
  VAR_6 = 1;
 }

 return VAR_6;
}
