
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* _str; } ;
struct TYPE_9__ {TYPE_1__ val; } ;
struct TYPE_8__ {int len; int data; } ;
typedef TYPE_2__ DsoJsonStr ;
typedef TYPE_3__ DsoJsonObj ;


 int FUNC_0 (TYPE_2__*,unsigned int) ;
 TYPE_3__* FUNC_1 () ;
 int FUNC_2 (int ,char const*,int ) ;

DsoJsonObj * FUNC_3 (const char *VAR_0, unsigned int VAR_1) {
 DsoJsonObj *VAR_2 = FUNC_1 ();
 if (!VAR_2) return ((void*)0);
 DsoJsonStr * VAR_3 = VAR_2->val._str;
 FUNC_0 (VAR_3, VAR_1);
 FUNC_2 (VAR_3->data, VAR_0, VAR_3->len);
 return VAR_2;
}
