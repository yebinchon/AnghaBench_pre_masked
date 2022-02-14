
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int zend_string ;
struct TYPE_7__ {int s; int member_0; } ;
typedef TYPE_1__ smart_str ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int *) ;
 int FUNC_2 (TYPE_1__*,char) ;
 int FUNC_3 (TYPE_1__*,char*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int ,int *,int ,int ,int ) ;

__attribute__((used)) static int FUNC_6(zend_string *VAR_2, zend_string *VAR_3) {
 int VAR_4;
 smart_str VAR_5 ={0};
 FUNC_3(&VAR_5, "session");
 FUNC_2(&VAR_5, '.');
 FUNC_1(&VAR_5, VAR_2);
 FUNC_0(&VAR_5);
 VAR_4 = FUNC_5(VAR_5.s, VAR_3, VAR_1, VAR_0, 0);
 FUNC_4(&VAR_5);
 return VAR_4;
}
