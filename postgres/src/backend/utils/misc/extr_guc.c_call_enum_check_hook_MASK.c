
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int name; } ;
struct config_enum {TYPE_1__ gen; int (* check_hook ) (int*,void**,int ) ;} ;
typedef int GucSource ;


 int VAR_0 ;
 int FUNC_0 () ;
 int VAR_1 ;
 int * VAR_2 ;
 int * VAR_3 ;
 int * VAR_4 ;
 int FUNC_1 (struct config_enum*,int) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,int *) ;
 int FUNC_5 (char*,int *) ;
 int FUNC_6 (char*,int ,int ) ;
 int FUNC_7 (char*,int *) ;
 int FUNC_8 (int*,void**,int ) ;

__attribute__((used)) static bool
FUNC_9(struct config_enum *VAR_5, int *VAR_6, void **VAR_7,
      GucSource VAR_8, int VAR_9)
{

 if (!VAR_5->check_hook)
  return 1;


 VAR_1 = VAR_0;
 VAR_4 = ((void*)0);
 VAR_2 = ((void*)0);
 VAR_3 = ((void*)0);

 if (!VAR_5->check_hook(VAR_6, VAR_7, VAR_8))
 {
  FUNC_2(VAR_9,
    (FUNC_3(VAR_1),
     VAR_4 ?
     FUNC_7("%s", VAR_4) :
     FUNC_6("invalid value for parameter \"%s\": \"%s\"",
      VAR_5->gen.name,
      FUNC_1(VAR_5, *VAR_6)),
     VAR_2 ?
     FUNC_4("%s", VAR_2) : 0,
     VAR_3 ?
     FUNC_5("%s", VAR_3) : 0));

  FUNC_0();
  return 0;
 }

 return 1;
}
