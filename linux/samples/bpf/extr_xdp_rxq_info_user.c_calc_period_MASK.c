
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct record {scalar_t__ timestamp; } ;
typedef scalar_t__ __u64 ;


 double VAR_0 ;

__attribute__((used)) static double FUNC_0(struct record *VAR_1, struct record *VAR_2)
{
 double VAR_3 = 0;
 __u64 VAR_4 = 0;

 VAR_4 = VAR_1->timestamp - VAR_2->timestamp;
 if (VAR_4 > 0)
  VAR_3 = ((double) VAR_4 / VAR_0);

 return VAR_3;
}
