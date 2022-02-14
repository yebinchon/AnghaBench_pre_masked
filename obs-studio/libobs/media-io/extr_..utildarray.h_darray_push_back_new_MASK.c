
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct darray {int num; } ;


 void* FUNC_0 (size_t const,struct darray*) ;
 int FUNC_1 (size_t const,struct darray*,int ) ;
 int FUNC_2 (void*,int ,size_t const) ;

__attribute__((used)) static inline void *FUNC_3(const size_t VAR_0,
      struct darray *VAR_1)
{
 void *VAR_2;

 FUNC_1(VAR_0, VAR_1, ++VAR_1->num);

 VAR_2 = FUNC_0(VAR_0, VAR_1);
 FUNC_2(VAR_2, 0, VAR_0);
 return VAR_2;
}
