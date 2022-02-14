
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;


 scalar_t__ FUNC_0 (unsigned long) ;
 unsigned long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (void*,int,int ) ;
 void* FUNC_3 (struct page*) ;
 int FUNC_4 (char*,char const*,unsigned long) ;
 struct page* FUNC_5 (void*) ;

unsigned long FUNC_6(void *VAR_3, void *VAR_4, int VAR_5, const char *VAR_6)
{
 void *VAR_7;
 unsigned long VAR_8 = 0;

 VAR_3 = (void *)FUNC_0((unsigned long)VAR_3);
 VAR_4 = (void *)((unsigned long)VAR_4 & VAR_0);
 for (VAR_7 = VAR_3; VAR_7 < VAR_4; VAR_7 += VAR_2, VAR_8++) {
  struct page *VAR_9 = FUNC_5(VAR_7);
  void *VAR_10;
  VAR_10 = FUNC_3(VAR_9);
  if ((unsigned int)VAR_5 <= 0xFF)
   FUNC_2(VAR_10, VAR_5, VAR_2);

  FUNC_1(VAR_9);
 }

 if (VAR_8 && VAR_6)
  FUNC_4("Freeing %s memory: %ldK\n",
   VAR_6, VAR_8 << (VAR_1 - 10));

 return VAR_8;
}
