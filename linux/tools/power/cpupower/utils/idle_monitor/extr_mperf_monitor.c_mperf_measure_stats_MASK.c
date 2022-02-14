
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 unsigned long long* VAR_2 ;
 int* VAR_3 ;
 unsigned long long* VAR_4 ;
 int FUNC_0 (unsigned int,int ,unsigned long long*) ;

__attribute__((used)) static int FUNC_1(unsigned int VAR_5)
{
 unsigned long long VAR_6;
 int VAR_7;

 VAR_7 = FUNC_0(VAR_5, VAR_0, &VAR_6);
 VAR_2[VAR_5] = VAR_6;
 VAR_7 |= FUNC_0(VAR_5, VAR_1, &VAR_6);
 VAR_4[VAR_5] = VAR_6;
 VAR_3[VAR_5] = !VAR_7;

 return 0;
}
