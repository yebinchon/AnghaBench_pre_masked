
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct array_info {int kids_type; } ;
typedef int buf ;


 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (char*,int,char*,char const*) ;
 char* FUNC_2 (char*,char) ;
 int FUNC_3 (int ,char*) ;

__attribute__((used)) static struct array_info* FUNC_4(const char* VAR_0) {
 struct array_info* VAR_1 = ((void*)0);
 if (VAR_0) {
  VAR_1 = (struct array_info*)FUNC_0(1, sizeof(struct array_info));
  if (VAR_1) {
   char VAR_2[128], *VAR_3;
   FUNC_1(VAR_2, sizeof(VAR_2), "%s", VAR_0);
   VAR_3 = FUNC_2(VAR_2, '[');
   if (VAR_3) {
    *VAR_3 = 0;
   }
   FUNC_3(VAR_1->kids_type, VAR_2);
  }
 }
 return VAR_1;
}
