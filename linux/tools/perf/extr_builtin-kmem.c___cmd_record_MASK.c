
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int FUNC_0 (char const* const*) ;
 int VAR_0 ;
 char** FUNC_1 (unsigned int,int) ;
 int FUNC_2 (unsigned int,char const**) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 char* FUNC_3 (char const* const) ;

__attribute__((used)) static int FUNC_4(int VAR_3, const char **VAR_4)
{
 const char * const VAR_5[] = {
 "record", "-a", "-R", "-c", "1",
 };
 const char * const VAR_6[] = {
 "-e", "kmem:kmalloc",
 "-e", "kmem:kmalloc_node",
 "-e", "kmem:kfree",
 "-e", "kmem:kmem_cache_alloc",
 "-e", "kmem:kmem_cache_alloc_node",
 "-e", "kmem:kmem_cache_free",
 };
 const char * const VAR_7[] = {
 "-e", "kmem:mm_page_alloc",
 "-e", "kmem:mm_page_free",
 };
 unsigned int VAR_8, VAR_9, VAR_10;
 const char **VAR_11;

 VAR_8 = FUNC_0(VAR_5) + VAR_3 - 1;
 if (VAR_2)
  VAR_8 += FUNC_0(VAR_6);
 if (VAR_1)
  VAR_8 += FUNC_0(VAR_7) + 1;

 VAR_11 = FUNC_1(VAR_8 + 1, sizeof(char *));

 if (VAR_11 == ((void*)0))
  return -VAR_0;

 for (VAR_9 = 0; VAR_9 < FUNC_0(VAR_5); VAR_9++)
  VAR_11[VAR_9] = FUNC_3(VAR_5[VAR_9]);

 if (VAR_2) {
  for (VAR_10 = 0; VAR_10 < FUNC_0(VAR_6); VAR_10++, VAR_9++)
   VAR_11[VAR_9] = FUNC_3(VAR_6[VAR_10]);
 }
 if (VAR_1) {
  VAR_11[VAR_9++] = FUNC_3("-g");

  for (VAR_10 = 0; VAR_10 < FUNC_0(VAR_7); VAR_10++, VAR_9++)
   VAR_11[VAR_9] = FUNC_3(VAR_7[VAR_10]);
 }

 for (VAR_10 = 1; VAR_10 < (unsigned int)VAR_3; VAR_10++, VAR_9++)
  VAR_11[VAR_9] = VAR_4[VAR_10];

 return FUNC_2(VAR_9, VAR_11);
}
