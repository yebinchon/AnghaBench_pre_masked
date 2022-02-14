
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fdt_property {int len; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (void const*,int) ;
 struct fdt_property* FUNC_2 (void const*,int) ;

__attribute__((used)) static const struct fdt_property *FUNC_3(const void *VAR_0,
                    int VAR_1,
                    int *VAR_2)
{
 int VAR_3;
 const struct fdt_property *VAR_4;

 if ((VAR_3 = FUNC_1(VAR_0, VAR_1)) < 0) {
  if (VAR_2)
   *VAR_2 = VAR_3;
  return ((void*)0);
 }

 VAR_4 = FUNC_2(VAR_0, VAR_1);

 if (VAR_2)
  *VAR_2 = FUNC_0(&VAR_4->len);

 return VAR_4;
}
