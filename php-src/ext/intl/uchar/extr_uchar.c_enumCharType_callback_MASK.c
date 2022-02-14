
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int zval ;
struct TYPE_5__ {int param_count; int * params; int * retval; } ;
struct TYPE_4__ {int fci_cache; TYPE_2__ fci; } ;
typedef TYPE_1__ enumCharType_data ;
typedef int UCharCategory ;
typedef int UChar32 ;
typedef int UBool ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,char*,int ) ;
 scalar_t__ FUNC_4 (TYPE_2__*,int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static UBool FUNC_6(enumCharType_data *VAR_2,
                                   UChar32 VAR_3, UChar32 VAR_4,
                                   UCharCategory VAR_5) {
 zval VAR_6;
 zval VAR_7[3];

 FUNC_1(&VAR_6);



 FUNC_0(&VAR_7[0], VAR_3);
 FUNC_0(&VAR_7[1], VAR_4);
 FUNC_0(&VAR_7[2], VAR_5);

 VAR_2->fci.retval = &VAR_6;
 VAR_2->fci.param_count = 3;
 VAR_2->fci.params = VAR_7;

 if (FUNC_4(&VAR_2->fci, &VAR_2->fci_cache) == VAR_0) {
  FUNC_2(((void*)0), VAR_1);
  FUNC_3(((void*)0), "enumCharTypes callback failed", 0);
  FUNC_5(&VAR_6);
  return 0;
 }
 FUNC_5(&VAR_6);
 return 1;
}
