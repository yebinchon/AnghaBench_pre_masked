
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 char* FUNC_0 (unsigned int) ;
 unsigned int FUNC_1 (char*,unsigned int*) ;

__attribute__((used)) static inline unsigned int FUNC_2(unsigned int VAR_6,
       unsigned int *VAR_7,
       unsigned int VAR_8)
{
 unsigned int VAR_9 = 0;
 char *VAR_10 = FUNC_0(VAR_6);
 unsigned int VAR_11 = FUNC_1(VAR_10, VAR_7);

 VAR_9 += (VAR_6 & VAR_2) << VAR_3;
 VAR_9 += (VAR_11 & VAR_4) << VAR_5;
 VAR_9 += (VAR_8 & VAR_0) << VAR_1;
 return VAR_9;
}
