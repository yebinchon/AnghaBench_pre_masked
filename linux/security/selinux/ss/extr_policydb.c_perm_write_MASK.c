
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct perm_datum {size_t value; } ;
typedef char __le32 ;


 char FUNC_0 (size_t) ;
 int FUNC_1 (char*,int,size_t,void*) ;
 size_t FUNC_2 (char*) ;

__attribute__((used)) static int FUNC_3(void *VAR_0, void *VAR_1, void *VAR_2)
{
 char *VAR_3 = VAR_0;
 struct perm_datum *VAR_4 = VAR_1;
 __le32 VAR_5[2];
 size_t VAR_6;
 int VAR_7;

 VAR_6 = FUNC_2(VAR_3);
 VAR_5[0] = FUNC_0(VAR_6);
 VAR_5[1] = FUNC_0(VAR_4->value);
 VAR_7 = FUNC_1(VAR_5, sizeof(u32), 2, VAR_2);
 if (VAR_7)
  return VAR_7;

 VAR_7 = FUNC_1(VAR_3, 1, VAR_6, VAR_2);
 if (VAR_7)
  return VAR_7;

 return 0;
}
