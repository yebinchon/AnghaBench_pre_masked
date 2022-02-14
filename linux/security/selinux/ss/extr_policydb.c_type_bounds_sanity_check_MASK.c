
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct type_datum {int bounds; scalar_t__ value; scalar_t__ attribute; } ;
struct policydb {struct type_datum** type_val_to_struct; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*,char*,...) ;
 int FUNC_2 (struct policydb*,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_3(void *VAR_3, void *VAR_4, void *VAR_5)
{
 struct type_datum *VAR_6;
 struct policydb *VAR_7 = VAR_5;
 int VAR_8 = 0;

 VAR_6 = VAR_4;
 while (VAR_6->bounds) {
  if (++VAR_8 == VAR_1) {
   FUNC_1("SELinux: type %s: "
          "too deep or looped boundary\n",
          (char *) VAR_3);
   return -VAR_0;
  }

  VAR_6 = VAR_7->type_val_to_struct[VAR_6->bounds - 1];
  FUNC_0(!VAR_6);

  if (VAR_6->attribute) {
   FUNC_1("SELinux: type %s: "
          "bounded by attribute %s",
          (char *) VAR_3,
          FUNC_2(VAR_7, VAR_2, VAR_6->value - 1));
   return -VAR_0;
  }
 }

 return 0;
}
