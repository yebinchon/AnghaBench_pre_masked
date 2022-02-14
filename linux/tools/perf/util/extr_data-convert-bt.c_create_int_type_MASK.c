
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bt_ctf_field_type {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct bt_ctf_field_type* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct bt_ctf_field_type*,int ) ;
 scalar_t__ FUNC_2 (struct bt_ctf_field_type*,int) ;
 int FUNC_3 (struct bt_ctf_field_type*) ;
 int FUNC_4 (struct bt_ctf_field_type*,int ) ;
 int FUNC_5 (char*,int,char*,char*) ;

__attribute__((used)) static struct bt_ctf_field_type *FUNC_6(int VAR_3, bool VAR_4, bool VAR_5)
{
 struct bt_ctf_field_type *VAR_6;

 VAR_6 = FUNC_0(VAR_3);
 if (!VAR_6)
  return ((void*)0);

 if (VAR_4 &&
     FUNC_2(VAR_6, 1))
  goto err;

 if (VAR_5 &&
     FUNC_1(VAR_6, VAR_2))
  goto err;


 FUNC_4(VAR_6, VAR_0);




 FUNC_5("Created type: INTEGER %d-bit %ssigned %s\n",
     VAR_3, VAR_4 ? "un" : "", VAR_5 ? "hex" : "");
 return VAR_6;

err:
 FUNC_3(VAR_6);
 return ((void*)0);
}
