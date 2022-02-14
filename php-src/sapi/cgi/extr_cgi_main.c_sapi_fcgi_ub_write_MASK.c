
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int fcgi_request ;


 int VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,char const*,int) ;
 int FUNC_2 () ;
 int VAR_2 ;

__attribute__((used)) static size_t FUNC_3(const char *VAR_3, size_t VAR_4)
{
 const char *VAR_5 = VAR_3;
 size_t VAR_6 = VAR_4;
 fcgi_request *VAR_7 = (fcgi_request*) FUNC_0(VAR_2);

 while (VAR_6 > 0) {
  int VAR_8 = VAR_6 > VAR_1 ? VAR_1 : (int)VAR_6;
  int VAR_9 = FUNC_1(VAR_7, VAR_0, VAR_5, VAR_8);

  if (VAR_9 <= 0) {
   FUNC_2();
   return VAR_4 - VAR_6;
  }
  VAR_5 += VAR_9;
  VAR_6 -= VAR_9;
 }

 return VAR_4;
}
