
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,int,unsigned long) ;
 int FUNC_1 (char*,unsigned long,unsigned char) ;
 int FUNC_2 (char*,long) ;
 int FUNC_3 (long) ;
 int VAR_0 ;
 int FUNC_4 (int,unsigned char*,int,unsigned long) ;
 int VAR_1 ;
 int FUNC_5 (int *,long,int) ;

__attribute__((used)) static int FUNC_6(int VAR_2, unsigned char *VAR_3,
       int VAR_4, unsigned long VAR_5)
{
 int VAR_6, VAR_7, VAR_8 = 0;
 unsigned long VAR_9;
 long VAR_10, VAR_11, VAR_12 = 0;

 VAR_9 = VAR_5;
 do {
  FUNC_3(VAR_10);
  VAR_6 = FUNC_4(VAR_2, VAR_3 + VAR_8, VAR_4 - VAR_8,
       VAR_9);
  FUNC_3(VAR_11);
  if (VAR_6 < 0)
   return -VAR_0;

  VAR_12 += VAR_11 - VAR_10;
  FUNC_5(&VAR_1, VAR_12, VAR_4);
  VAR_8 += VAR_6;
  VAR_9 += VAR_6;

 } while (VAR_8 < VAR_4);

 FUNC_2("\tpread elapsed timed = %ld\n", VAR_12);
 FUNC_0("\tRead  %d bytes starting at offset 0x%lx\n",
         VAR_8, VAR_5);
 for (VAR_7 = 0; VAR_7 < VAR_8; VAR_7++)
  FUNC_1("\t\t0x%lx\t%d\n", VAR_5 + VAR_7, VAR_3[VAR_7]);

 return VAR_8;
}
