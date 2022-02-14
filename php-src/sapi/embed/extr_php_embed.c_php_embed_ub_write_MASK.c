
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t FUNC_0 (char const*,size_t) ;
 int FUNC_1 () ;

__attribute__((used)) static size_t FUNC_2(const char *VAR_0, size_t VAR_1)
{
 const char *VAR_2 = VAR_0;
 size_t VAR_3 = VAR_1;
 size_t VAR_4;

 while (VAR_3 > 0) {
  VAR_4 = FUNC_0(VAR_2, VAR_3);
  if (!VAR_4) {
   FUNC_1();
  }
  VAR_2 += VAR_4;
  VAR_3 -= VAR_4;
 }

 return VAR_1;
}
