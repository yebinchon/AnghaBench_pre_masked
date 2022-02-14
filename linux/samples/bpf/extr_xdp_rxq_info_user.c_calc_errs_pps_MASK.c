
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct datarec {double issue; } ;
typedef double __u64 ;



__attribute__((used)) static __u64 FUNC_0(struct datarec *VAR_0,
       struct datarec *VAR_1, double VAR_2)
{
 __u64 VAR_3 = 0;
 __u64 VAR_4 = 0;

 if (VAR_2 > 0) {
  VAR_3 = VAR_0->issue - VAR_1->issue;
  VAR_4 = VAR_3 / VAR_2;
 }
 return VAR_4;
}
