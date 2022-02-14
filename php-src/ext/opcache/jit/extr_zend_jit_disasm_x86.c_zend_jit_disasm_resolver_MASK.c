
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ zend_uintptr_t ;
typedef scalar_t__ uint64_t ;
struct ud {int dummy; } ;
typedef int int64_t ;
struct TYPE_3__ {char const* dli_sname; void* dli_saddr; } ;
typedef TYPE_1__ Dl_info ;


 scalar_t__ FUNC_0 (void*,TYPE_1__*) ;
 char* FUNC_1 (scalar_t__,int *) ;

__attribute__((used)) static const char* FUNC_2(struct ud *VAR_0,
                                            uint64_t VAR_1,
                                            int64_t *VAR_2)
{

 ((void)VAR_0);
 const char *VAR_3;
 void *VAR_4 = (void*)(zend_uintptr_t)(VAR_1);
 Dl_info VAR_5;

 VAR_3 = FUNC_1(VAR_1, VAR_2);
 if (VAR_3) {
  return VAR_3;
 }

 if (FUNC_0(VAR_4, &VAR_5)
  && VAR_5.dli_sname != ((void*)0)
  && VAR_5.dli_saddr == VAR_4) {
  return VAR_5.dli_sname;
 }
 return ((void*)0);
}
