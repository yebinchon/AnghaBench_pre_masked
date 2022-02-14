
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct darray {size_t const num; int array; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (size_t const,struct darray*,struct darray const*) ;
 int FUNC_2 (size_t const,struct darray*,int ,size_t const) ;
 int FUNC_3 (struct darray*) ;
 int FUNC_4 (struct darray*) ;
 int FUNC_5 (size_t const,struct darray*,size_t const) ;

__attribute__((used)) static inline void FUNC_6(const size_t VAR_0, struct darray *VAR_1,
    struct darray *VAR_2, const struct darray *VAR_3,
    const size_t VAR_4)
{
 struct darray VAR_5;

 FUNC_0(VAR_3->num >= VAR_4);
 FUNC_0(VAR_1 != VAR_2);

 FUNC_4(&VAR_5);
 FUNC_1(VAR_0, &VAR_5, VAR_3);

 FUNC_3(VAR_1);
 FUNC_3(VAR_2);

 if (VAR_3->num) {
  if (VAR_4)
   FUNC_2(VAR_0, VAR_1, VAR_5.array,
       VAR_5.num);
  if (VAR_4 < VAR_5.num - 1)
   FUNC_2(VAR_0, VAR_2,
       FUNC_5(VAR_0, &VAR_5, VAR_4),
       VAR_5.num - VAR_4);
 }

 FUNC_3(&VAR_5);
}
