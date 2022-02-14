
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int VAR_0 ;
 unsigned long** VAR_1 ;
 int FUNC_0 (char*,double,unsigned long,double) ;
 unsigned long** VAR_2 ;
 double VAR_3 ;

__attribute__((used)) static int FUNC_1(unsigned int VAR_4, double *VAR_5,
        unsigned int VAR_6)
{
 unsigned long VAR_7;

 if (VAR_4 >= VAR_0)
  return -1;

 VAR_7 = VAR_1[VAR_4][VAR_6] - VAR_2[VAR_4][VAR_6];

 if (VAR_3 == 0)
  *VAR_5 = 0.0;
 else
  *VAR_5 = 100.0 * VAR_7 / VAR_3 / 12.5;

 FUNC_0("Timediff: %llu - res~: %lu us - percent: %.2f %%\n",
        VAR_3, VAR_7 * 10 / 125, *VAR_5);

 return 0;
}
