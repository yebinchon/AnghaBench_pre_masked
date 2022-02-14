
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_8__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {int ce; } ;
typedef TYPE_1__ zend_object ;
struct TYPE_14__ {TYPE_1__* (* create_object ) (int ) ;} ;
struct TYPE_13__ {int zo; int uspoof; } ;
typedef TYPE_2__ Spoofchecker_object ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 TYPE_8__* VAR_1 ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *,int ,char*,int ) ;
 TYPE_2__* FUNC_7 (TYPE_1__*) ;
 TYPE_1__* FUNC_8 (int ) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ,char*) ;
 int FUNC_11 (int *,int *) ;

__attribute__((used)) static zend_object *FUNC_12(zend_object *VAR_2)
{
 zend_object *VAR_3;
 Spoofchecker_object *VAR_4, *VAR_5;

    VAR_4 = FUNC_7(VAR_2);
    FUNC_5(FUNC_2(VAR_4));

 VAR_3 = VAR_1->create_object(VAR_2->ce);
 VAR_5 = FUNC_7(VAR_3);

 FUNC_11(&VAR_5->zo, &VAR_4->zo);

 VAR_5->uspoof = FUNC_9(VAR_4->uspoof, FUNC_1(VAR_5));
 if(FUNC_4(FUNC_0(VAR_5))) {

  FUNC_6( ((void*)0), FUNC_0(VAR_5), "Failed to clone SpoofChecker object", 0 );
  FUNC_3(&VAR_5->zo);
  FUNC_10(VAR_0, "Failed to clone SpoofChecker object");
 }
 return VAR_3;
}
