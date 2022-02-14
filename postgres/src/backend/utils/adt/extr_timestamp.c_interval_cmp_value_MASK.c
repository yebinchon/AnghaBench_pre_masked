
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int int64 ;
struct TYPE_3__ {int time; int month; scalar_t__ day; } ;
typedef TYPE_1__ Interval ;
typedef int INT128 ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int *,int,int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static inline INT128
FUNC_3(const Interval *VAR_1)
{
 INT128 VAR_2;
 int64 VAR_3;
 int64 VAR_4;





 VAR_3 = VAR_1->time % VAR_0;
 VAR_4 = VAR_1->time / VAR_0;
 VAR_4 += VAR_1->month * FUNC_0(30);
 VAR_4 += VAR_1->day;


 VAR_2 = FUNC_2(VAR_3);


 FUNC_1(&VAR_2, VAR_4, VAR_0);

 return VAR_2;
}
