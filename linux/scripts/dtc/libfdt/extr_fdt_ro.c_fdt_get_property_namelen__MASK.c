
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fdt_property {int nameoff; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (void const*,int) ;
 struct fdt_property* FUNC_2 (void const*,int,int*) ;
 int FUNC_3 (void const*,int) ;
 scalar_t__ FUNC_4 (void const*,int ,char const*,int) ;

__attribute__((used)) static const struct fdt_property *FUNC_5(const void *VAR_1,
                  int VAR_2,
                  const char *VAR_3,
                  int VAR_4,
           int *VAR_5,
           int *VAR_6)
{
 for (VAR_2 = FUNC_1(VAR_1, VAR_2);
      (VAR_2 >= 0);
      (VAR_2 = FUNC_3(VAR_1, VAR_2))) {
  const struct fdt_property *VAR_7;

  if (!(VAR_7 = FUNC_2(VAR_1, VAR_2, VAR_5))) {
   VAR_2 = -VAR_0;
   break;
  }
  if (FUNC_4(VAR_1, FUNC_0(&VAR_7->nameoff),
       VAR_3, VAR_4)) {
   if (VAR_6)
    *VAR_6 = VAR_2;
   return VAR_7;
  }
 }

 if (VAR_5)
  *VAR_5 = VAR_2;
 return ((void*)0);
}
