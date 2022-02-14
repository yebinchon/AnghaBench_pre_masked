
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int VAR_0 ;
 int FUNC_0 (int,char*,int,unsigned int,unsigned int) ;
 int* VAR_1 ;
 unsigned int FUNC_1 (int) ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned long long VAR_4 ;

int FUNC_2(int VAR_5)
{
 unsigned int VAR_6;

 if (VAR_2 < VAR_5)
  VAR_2 = VAR_5;

 VAR_6 = FUNC_1(VAR_5);

 if (VAR_6 >= VAR_0)
  FUNC_0(1, "cpu%d: %d >= MAX_PACKAGES (%d)", VAR_5, VAR_6, VAR_0);

 if (VAR_6 > VAR_3)
  VAR_3 = VAR_6;

 if ((VAR_4 & (1ULL << VAR_6)) == 0) {
  VAR_4 |= (1ULL << VAR_6);
  VAR_1[VAR_6] = VAR_5;
 }

 return 0;
}
