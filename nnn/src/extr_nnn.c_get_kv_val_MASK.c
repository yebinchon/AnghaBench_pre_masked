
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uchar ;
typedef int ssize_t ;
struct TYPE_3__ {int key; char* val; } ;
typedef TYPE_1__ kv ;


 int FUNC_0 (char*) ;
 char* VAR_0 ;
 scalar_t__ FUNC_1 (int) ;
 char* FUNC_2 (char*,char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,char*,int) ;

__attribute__((used)) static char *FUNC_5(kv *VAR_1, char *VAR_2, int VAR_3, uchar VAR_4, bool VAR_5)
{
 int VAR_6 = 0;

 for (; VAR_1[VAR_6].key && VAR_6 < VAR_4; ++VAR_6) {
  if (VAR_1[VAR_6].key == VAR_3) {
   if (!VAR_5)
    return VAR_1[VAR_6].val;

   if (VAR_1[VAR_6].val[0] == '~') {
    ssize_t VAR_7 = FUNC_3(VAR_0);
    ssize_t VAR_8 = FUNC_3(VAR_1[VAR_6].val);

    if (!VAR_2)
     VAR_2 = (char *)FUNC_1(VAR_7 + VAR_8);

    FUNC_4(VAR_2, VAR_0, VAR_7 + 1);
    FUNC_4(VAR_2 + VAR_7, VAR_1[VAR_6].val + 1, VAR_8);
    return VAR_2;
   }

   return FUNC_2(VAR_1[VAR_6].val, VAR_2);
  }
 }

 FUNC_0("Invalid key");
 return ((void*)0);
}
