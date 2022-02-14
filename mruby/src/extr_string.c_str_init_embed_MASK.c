
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct RString {int dummy; } ;


 int VAR_0 ;
 char* FUNC_0 (struct RString*) ;
 int FUNC_1 (struct RString*,size_t) ;
 int FUNC_2 (struct RString*,int ) ;
 int FUNC_3 (char*,char const*,size_t) ;

__attribute__((used)) static struct RString*
FUNC_4(struct RString *VAR_1, const char *VAR_2, size_t VAR_3)
{
  if (VAR_2) FUNC_3(FUNC_0(VAR_1), VAR_2, VAR_3);
  FUNC_0(VAR_1)[VAR_3] = '\0';
  FUNC_2(VAR_1, VAR_0);
  FUNC_1(VAR_1, VAR_3);
  return VAR_1;
}
