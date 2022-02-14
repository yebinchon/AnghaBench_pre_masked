
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned long long VAR_0 ;
 unsigned long long VAR_1 ;
 int FUNC_0 (char*,int,unsigned long,unsigned long) ;

__attribute__((used)) static inline void FUNC_1(unsigned long long VAR_2, int VAR_3)
{
 unsigned long VAR_4;
 unsigned long VAR_5;

 VAR_4 = VAR_2 / VAR_0;
 VAR_2 -= VAR_4 * VAR_0;
 VAR_5 = VAR_2 / VAR_1;
 FUNC_0("%*lu.%03lu ", VAR_3, VAR_4, VAR_5);
}
