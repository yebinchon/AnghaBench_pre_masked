
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct servent {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*) ;
 int FUNC_3 () ;
 struct servent* FUNC_4 (char const*,char const*) ;
 int FUNC_5 (char const*,char const*,struct servent*,char*,size_t,struct servent**) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_6(const char* VAR_2, const char* VAR_3, struct servent* VAR_4,
      char* VAR_5, size_t VAR_6, struct servent** VAR_7) {
 FUNC_3();




 struct servent *VAR_8;
 int VAR_9;
 (void) VAR_5; (void) VAR_6;
 FUNC_0(&VAR_1);
 VAR_8 = FUNC_4(VAR_2, VAR_3);
 if(VAR_8) {
  *VAR_4 = *VAR_8;
  *VAR_7 = VAR_4;
  VAR_9 = 0;
 } else {
  *VAR_7 = ((void*)0);
  VAR_9 = VAR_0;
 }
 FUNC_1(&VAR_1);
 return VAR_9;
}
