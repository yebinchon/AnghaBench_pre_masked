
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct curlstate {int accept_ranges; int content_length; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct curlstate*) ;
 scalar_t__ FUNC_3 (void*,char*,int) ;
 int FUNC_4 (struct curlstate*) ;

__attribute__((used)) static size_t FUNC_5(void *VAR_0, size_t VAR_1, size_t VAR_2, void *VAR_3)
{
 struct curlstate *VAR_4 = VAR_3;

 FUNC_2(VAR_4);
 if (FUNC_3(VAR_0, "Accept-Ranges: bytes", 20) == 0)
 {
  FUNC_0(("header arrived with Accept-Ranges!\n"));
  VAR_4->accept_ranges = 1;
 }

 if (FUNC_3(VAR_0, "Content-Length:", 15) == 0)
 {
  char *VAR_5 = VAR_0;
  VAR_4->content_length = FUNC_1(VAR_5 + 15);
  FUNC_0(("header arrived with Content-Length: %d\n", VAR_4->content_length));
 }
 FUNC_4(VAR_4);

 return VAR_2 * VAR_1;
}
