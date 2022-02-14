
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fdt_property {void* data; void* len; void* nameoff; void* tag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (void*) ;
 scalar_t__ FUNC_1 (int) ;
 void* FUNC_2 (int) ;
 int FUNC_3 (void*,char const*) ;
 int FUNC_4 (void*,char const*) ;
 int FUNC_5 (void*,char const*,int*) ;
 struct fdt_property* FUNC_6 (void*,scalar_t__) ;
 int FUNC_7 (void*) ;

int FUNC_8(void *VAR_3, const char *VAR_4, int VAR_5, void **VAR_6)
{
 struct fdt_property *VAR_7;
 int VAR_8;
 int VAR_9;

 FUNC_0(VAR_3);


 if (FUNC_7(VAR_3) & VAR_0) {
  VAR_9 = 1;
  VAR_8 = FUNC_3(VAR_3, VAR_4);
 } else {
  VAR_8 = FUNC_5(VAR_3, VAR_4, &VAR_9);
 }
 if (VAR_8 == 0)
  return -VAR_1;

 VAR_7 = FUNC_6(VAR_3, sizeof(*VAR_7) + FUNC_1(VAR_5));
 if (! VAR_7) {
  if (VAR_9)
   FUNC_4(VAR_3, VAR_4);
  return -VAR_1;
 }

 VAR_7->tag = FUNC_2(VAR_2);
 VAR_7->nameoff = FUNC_2(VAR_8);
 VAR_7->len = FUNC_2(VAR_5);
 *VAR_6 = VAR_7->data;
 return 0;
}
