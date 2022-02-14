
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;


 int VAR_0 ;
 int FUNC_0 (char*,unsigned long,char const*) ;
 unsigned long FUNC_1 (int ,int) ;
 unsigned long FUNC_2 (unsigned long,int) ;
 unsigned long FUNC_3 (char const*,char**,int ) ;

__attribute__((used)) static int FUNC_4(const char *VAR_1, unsigned long *VAR_2)
{
 char *VAR_3;
 unsigned long VAR_4;
 unsigned long VAR_5 = FUNC_1(VAR_0, sizeof(u64));

 VAR_4 = FUNC_3(VAR_1, &VAR_3, 0);

 do {
  if (*VAR_3)
   break;

  VAR_4 = FUNC_2(VAR_4, sizeof(u64));
  if (!VAR_4 || VAR_4 > VAR_5)
   break;

  *VAR_2 = VAR_4;
  return 0;

 } while (0);

 FUNC_0("callchain: Incorrect stack dump size (max %ld): %s\n",
        VAR_5, VAR_1);
 return -1;
}
