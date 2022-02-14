
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int table; } ;
struct common_datum {TYPE_1__ permissions; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int *) ;
 int FUNC_2 (void*) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_3(void *VAR_1, void *VAR_2, void *VAR_3)
{
 struct common_datum *VAR_4;

 FUNC_2(VAR_1);
 if (VAR_2) {
  VAR_4 = VAR_2;
  FUNC_1(VAR_4->permissions.table, VAR_0, ((void*)0));
  FUNC_0(VAR_4->permissions.table);
 }
 FUNC_2(VAR_2);
 return 0;
}
