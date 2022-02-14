
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int realSize; void* data; int logicalSize; } ;
typedef TYPE_1__ dynamicPtr ;


 int VAR_0 ;
 int FUNC_0 (void*) ;
 void* FUNC_1 (int) ;
 void* FUNC_2 (void*,int) ;
 int FUNC_3 (void*,void*,int ) ;

__attribute__((used)) static int FUNC_4 (dynamicPtr * VAR_1, int VAR_2)
{
 void *VAR_3;


 if ((VAR_3 = FUNC_2(VAR_1->data, VAR_2))) {
  VAR_1->realSize = VAR_2;
  VAR_1->data = VAR_3;
  return VAR_0;
 }


 VAR_3 = FUNC_1(VAR_2);


 FUNC_3(VAR_3, VAR_1->data, VAR_1->logicalSize);
 FUNC_0(VAR_1->data);
 VAR_1->data = VAR_3;

 VAR_1->realSize = VAR_2;

 return VAR_0;
}
