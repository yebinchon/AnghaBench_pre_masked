
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,int,int) ;
 int FUNC_1 (char*,long) ;
 int FUNC_2 (long) ;
 int VAR_0 ;
 int FUNC_3 (int *,long,int) ;
 int FUNC_4 (int,unsigned char const* const,int) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_5(int VAR_2, const unsigned char * const VAR_3, int VAR_4)
{
 int VAR_5, VAR_6 = 0;
 long VAR_7, VAR_8, VAR_9 = 0;

 do {
  FUNC_2(VAR_7);
  VAR_5 = FUNC_4(VAR_2, VAR_3 + VAR_6, VAR_4 - VAR_6);
  FUNC_2(VAR_8);
  if (VAR_5 < 0)
   return -VAR_0;

  VAR_9 += (VAR_8 - VAR_7);
  FUNC_3(&VAR_1, VAR_9, VAR_4);
  VAR_6 += VAR_5;
 } while (VAR_6 < VAR_4);

 FUNC_1("\twrite elapsed timed = %ld\n", VAR_9);
 FUNC_0("\tWrote %d of %d bytes\n", VAR_6, VAR_4);

 return VAR_6;
}
