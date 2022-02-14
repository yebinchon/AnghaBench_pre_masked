
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u64 ;
typedef int ktime_t ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (char*,char*,unsigned int,unsigned int,unsigned int,unsigned int,unsigned int) ;

void FUNC_3(ktime_t VAR_2, ktime_t VAR_3,
        unsigned VAR_4, char *VAR_5)
{
 ktime_t VAR_6;
 u64 VAR_7;
 unsigned int VAR_8;
 unsigned int VAR_9;
 unsigned int VAR_10;

 VAR_6 = FUNC_1(VAR_3, VAR_2);
 VAR_7 = FUNC_0(VAR_6, 10*VAR_0);
 VAR_8 = VAR_7;
 if (VAR_8 == 0)
  VAR_8 = 1;
 VAR_9 = VAR_4 * (VAR_1 / 1024);
 VAR_10 = (VAR_9 * 100) / VAR_8;
 FUNC_2("%s %u kbytes in %u.%02u seconds (%u.%02u MB/s)\n",
  VAR_5, VAR_9, VAR_8 / 100, VAR_8 % 100, VAR_10 / 1000,
  (VAR_10 % 1000) / 10);
}
