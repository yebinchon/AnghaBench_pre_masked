
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fdt_property {void* len; void* nameoff; void* tag; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 void* FUNC_1 (int) ;
 int FUNC_2 (void*,int) ;
 int FUNC_3 (void*,char const*) ;
 int FUNC_4 (void*,char const*,int*) ;
 struct fdt_property* FUNC_5 (void*,int) ;
 int FUNC_6 (void*,struct fdt_property*,int ,int) ;

__attribute__((used)) static int FUNC_7(void *VAR_1, int VAR_2, const char *VAR_3,
        int VAR_4, struct fdt_property **VAR_5)
{
 int VAR_6;
 int VAR_7;
 int VAR_8;
 int VAR_9;
 int VAR_10;

 if ((VAR_7 = FUNC_2(VAR_1, VAR_2)) < 0)
  return VAR_7;

 VAR_8 = FUNC_4(VAR_1, VAR_3, &VAR_10);
 if (VAR_8 < 0)
  return VAR_8;

 *VAR_5 = FUNC_5(VAR_1, VAR_7);
 VAR_6 = sizeof(**VAR_5) + FUNC_0(VAR_4);

 VAR_9 = FUNC_6(VAR_1, *VAR_5, 0, VAR_6);
 if (VAR_9) {
  if (VAR_10)
   FUNC_3(VAR_1, VAR_3);
  return VAR_9;
 }

 (*VAR_5)->tag = FUNC_1(VAR_0);
 (*VAR_5)->nameoff = FUNC_1(VAR_8);
 (*VAR_5)->len = FUNC_1(VAR_4);
 return 0;
}
