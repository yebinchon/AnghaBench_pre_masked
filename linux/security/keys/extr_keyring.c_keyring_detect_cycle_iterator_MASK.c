
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct key const* raw_data; } ;
struct keyring_search_context {int result; TYPE_1__ match_data; } ;
struct key {int serial; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int ) ;
 struct key* FUNC_2 (void const*) ;

__attribute__((used)) static int FUNC_3(const void *VAR_1,
      void *VAR_2)
{
 struct keyring_search_context *VAR_3 = VAR_2;
 const struct key *VAR_4 = FUNC_2(VAR_1);

 FUNC_1("{%d}", VAR_4->serial);



 if (VAR_4 != VAR_3->match_data.raw_data)
  return 0;

 VAR_3->result = FUNC_0(-VAR_0);
 return 1;
}
