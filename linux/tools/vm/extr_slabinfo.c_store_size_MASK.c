
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*,int) ;
 int VAR_0 ;
 int FUNC_1 (char*,char*,unsigned long) ;

__attribute__((used)) static int FUNC_2(char *VAR_1, unsigned long VAR_2)
{
 unsigned long VAR_3 = 1;
 char VAR_4 = 0;
 int VAR_5;

 if (!VAR_0) {
  if (VAR_2 > 1000000000UL) {
   VAR_3 = 100000000UL;
   VAR_4 = 'G';
  } else if (VAR_2 > 1000000UL) {
   VAR_3 = 100000UL;
   VAR_4 = 'M';
  } else if (VAR_2 > 1000UL) {
   VAR_3 = 100;
   VAR_4 = 'K';
  }
 }

 VAR_2 /= VAR_3;
 VAR_5 = FUNC_1(VAR_1, "%ld",VAR_2);
 if (VAR_4) {
  VAR_1[VAR_5] = VAR_4;
  VAR_5++;
  VAR_1[VAR_5] = 0;
 }
 if (VAR_3 != 1) {
  FUNC_0(VAR_1 + VAR_5 - 2, VAR_1 + VAR_5 - 3, 4);
  VAR_1[VAR_5-2] = '.';
  VAR_5++;
 }
 return VAR_5;
}
