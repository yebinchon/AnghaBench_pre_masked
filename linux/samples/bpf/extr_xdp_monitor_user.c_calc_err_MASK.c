
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct datarec {double err; } ;
typedef double __u64 ;



__attribute__((used)) static double FUNC_0(struct datarec *VAR_0, struct datarec *VAR_1, double VAR_2)
{
 __u64 VAR_3 = 0;
 double VAR_4 = 0;

 if (VAR_2 > 0) {
  VAR_3 = VAR_0->err - VAR_1->err;
  VAR_4 = VAR_3 / VAR_2;
 }
 return VAR_4;
}
