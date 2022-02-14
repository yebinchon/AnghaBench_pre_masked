
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,char*) ;
 unsigned long* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned long* FUNC_1 (int ,int ,int,int,int,int ) ;
 int FUNC_2 (int,int*,int) ;
 int FUNC_3 (int,int*,int) ;

__attribute__((used)) static int FUNC_4(int VAR_6, unsigned long *VAR_7, int VAR_8)
{
 int VAR_9, VAR_10 = 0;

 VAR_7 = FUNC_1(0, VAR_3, VAR_4 | VAR_5,
   VAR_2 | VAR_1, VAR_8, 0);
 FUNC_0(VAR_7 == VAR_0, "mmap()");

 FUNC_0(*VAR_7 != 0xdeadbabe, "MAP_PRIVATE | MAP_POPULATE changed file");

 VAR_9 = FUNC_3(VAR_6, &VAR_10, sizeof(int));
 FUNC_0(VAR_9 <= 0, "write(sock)");

 VAR_9 = FUNC_2(VAR_6, &VAR_10, sizeof(int));
 FUNC_0(VAR_9 <= 0, "read(sock)");

 FUNC_0(*VAR_7 == 0x22222BAD, "MAP_POPULATE didn't COW private page");
 FUNC_0(*VAR_7 != 0xdeadbabe, "mapping was corrupted");

 return 0;
}
