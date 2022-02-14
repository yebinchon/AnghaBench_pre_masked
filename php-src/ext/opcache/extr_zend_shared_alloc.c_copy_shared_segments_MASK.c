
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zend_shared_segment ;


 int FUNC_0 (void*,void*,int) ;

__attribute__((used)) static void FUNC_1(void *VAR_0, void *VAR_1, int VAR_2, int VAR_3)
{
 zend_shared_segment **VAR_4 = (zend_shared_segment **)VAR_0;
 void *VAR_5 = ((char *)VAR_0 + VAR_2*(sizeof(void *)));
 void *VAR_6 = VAR_1;
 int VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++) {
  VAR_4[VAR_7] = VAR_5;
  FUNC_0(VAR_5, VAR_6, VAR_3);
  VAR_5 = ((char *)VAR_5 + VAR_3);
  VAR_6 = ((char *)VAR_6 + VAR_3);
 }
}
