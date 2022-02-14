
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zval ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,char*,char*) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void
FUNC_4 (const char * const VAR_1,
                        const char * const VAR_2,
                        const char * const VAR_3,
                        void * VAR_4)
{
 zval *VAR_5 = (zval *) VAR_4;
 zval VAR_6;

 FUNC_3(&VAR_6);

 FUNC_1(&VAR_6, "name", (char *)VAR_1);
 FUNC_1(&VAR_6, "desc", (char *)VAR_2);
 FUNC_1(&VAR_6, "file", (char *)VAR_3);

 if (FUNC_0(VAR_5)!=VAR_0) {
  FUNC_3(VAR_5);
 }

 FUNC_2(VAR_5, &VAR_6);
}
