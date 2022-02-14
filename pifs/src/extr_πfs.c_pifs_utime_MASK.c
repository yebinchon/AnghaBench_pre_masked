
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct utimbuf {int dummy; } ;


 int FUNC_0 (char const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,struct utimbuf*) ;

__attribute__((used)) static int FUNC_2(const char *VAR_2, struct utimbuf *VAR_3)
{
  FUNC_0(VAR_2);
  int VAR_4 = FUNC_1(VAR_1, VAR_3);
  return VAR_4 == -1 ? -VAR_0 : VAR_4;
}
