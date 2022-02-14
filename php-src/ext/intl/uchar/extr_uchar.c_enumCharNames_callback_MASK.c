
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int zval ;
typedef int int32_t ;
struct TYPE_5__ {int param_count; int * params; int * retval; } ;
struct TYPE_4__ {int fci_cache; TYPE_2__ fci; } ;
typedef TYPE_1__ enumCharNames_data ;
typedef int UCharNameChoice ;
typedef int UChar32 ;
typedef int UBool ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char const*,int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,char*,int ) ;
 scalar_t__ FUNC_5 (TYPE_2__*,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static UBool FUNC_8(enumCharNames_data *VAR_2,
                                    UChar32 VAR_3, UCharNameChoice VAR_4,
                                    const char *VAR_5, int32_t VAR_6) {
 zval VAR_7;
 zval VAR_8[3];

 FUNC_1(&VAR_7);
 FUNC_0(&VAR_8[0], VAR_3);
 FUNC_0(&VAR_8[1], VAR_4);
 FUNC_2(&VAR_8[2], VAR_5, VAR_6);

 VAR_2->fci.retval = &VAR_7;
 VAR_2->fci.param_count = 3;
 VAR_2->fci.params = VAR_8;

 if (FUNC_5(&VAR_2->fci, &VAR_2->fci_cache) == VAR_0) {
  FUNC_3(((void*)0), VAR_1);
  FUNC_4(((void*)0), "enumCharNames callback failed", 0);
  FUNC_6(&VAR_7);
  FUNC_7(&VAR_8[2]);
  return 0;
 }
 FUNC_6(&VAR_7);
 FUNC_7(&VAR_8[2]);
 return 1;
}
