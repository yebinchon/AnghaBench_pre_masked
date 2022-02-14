
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int name; } ;


 TYPE_1__* VAR_0 ;
 unsigned long long** VAR_1 ;
 int FUNC_0 (char*,int ,double,unsigned long long,double,...) ;
 unsigned long long** VAR_2 ;
 double VAR_3 ;

__attribute__((used)) static int FUNC_1(unsigned int VAR_4, double *VAR_5,
         unsigned int VAR_6)
{
 unsigned long long VAR_7 = VAR_1[VAR_6][VAR_4]
  - VAR_2[VAR_6][VAR_4];
 FUNC_0("%s: - diff: %llu - percent: %f (%u)\n",
        VAR_0[VAR_4].name, VAR_3, *VAR_5, VAR_6);

 if (VAR_3 == 0)
  *VAR_5 = 0.0;
 else
  *VAR_5 = ((100.0 * VAR_7) / VAR_3);

 FUNC_0("%s: - timediff: %llu - statediff: %llu - percent: %f (%u)\n",
        VAR_0[VAR_4].name, VAR_3, VAR_7, *VAR_5, VAR_6);

 return 0;
}
