
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,int,int,unsigned long) ;
 int FUNC_1 (char*,long) ;
 int FUNC_2 (long) ;
 int VAR_0 ;
 int FUNC_3 (int ,char*,int,char*) ;
 int FUNC_4 (int,unsigned char const* const,int,unsigned long) ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_5 (int) ;
 int FUNC_6 (int *,long,int) ;

__attribute__((used)) static int FUNC_7(int VAR_3, const unsigned char * const VAR_4,
        int VAR_5, unsigned long VAR_6)
{
 int VAR_7, VAR_8 = 0;
 unsigned long VAR_9;
 long VAR_10, VAR_11, VAR_12 = 0;

 VAR_9 = VAR_6;

 do {
  FUNC_2(VAR_10);
  VAR_7 = FUNC_4(VAR_3, VAR_4 + VAR_8,
        VAR_5 - VAR_8, VAR_9);
  FUNC_2(VAR_11);
  if (VAR_7 < 0) {
   FUNC_3(VAR_2, "pwrite(): error %d: %s\n",
    VAR_0, FUNC_5(VAR_0));
   return -VAR_0;
  }

  VAR_12 += (VAR_11 - VAR_10);
  FUNC_6(&VAR_1, VAR_12, VAR_5);
  VAR_8 += VAR_7;
  VAR_9 += VAR_7;

 } while (VAR_8 < VAR_5);

 FUNC_1("\tpwrite elapsed timed = %ld\n", VAR_12);
 FUNC_0("\tWrote %d of %d bytes starting at address 0x%lx\n",
         VAR_8, VAR_5, VAR_6);

 return VAR_8;
}
