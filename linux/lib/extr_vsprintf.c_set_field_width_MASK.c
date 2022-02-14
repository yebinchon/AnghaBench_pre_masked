
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct printf_spec {int field_width; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int,char*,int) ;
 int FUNC_1 (int,int ,int ) ;

__attribute__((used)) static void
FUNC_2(struct printf_spec *VAR_1, int VAR_2)
{
 VAR_1->field_width = VAR_2;
 if (FUNC_0(VAR_1->field_width != VAR_2, "field width %d too large", VAR_2)) {
  VAR_1->field_width = FUNC_1(VAR_2, -VAR_0, VAR_0);
 }
}
