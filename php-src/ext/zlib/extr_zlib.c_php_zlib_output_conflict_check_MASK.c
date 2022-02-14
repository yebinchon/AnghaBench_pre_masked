
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ FUNC_2 (char const*,size_t,int ) ;

__attribute__((used)) static int FUNC_3(const char *VAR_3, size_t VAR_4)
{
 if (FUNC_1() > 0) {
  if (FUNC_2(VAR_3, VAR_4, FUNC_0(VAR_1))
  || FUNC_2(VAR_3, VAR_4, FUNC_0("ob_gzhandler"))
  || FUNC_2(VAR_3, VAR_4, FUNC_0("mb_output_handler"))
  || FUNC_2(VAR_3, VAR_4, FUNC_0("URL-Rewriter"))) {
   return VAR_0;
  }
 }
 return VAR_2;
}
