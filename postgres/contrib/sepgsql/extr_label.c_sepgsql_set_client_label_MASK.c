
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int security_context_t ;
struct TYPE_4__ {int label; int subid; } ;
typedef TYPE_1__ pending_label ;
typedef int MemoryContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 char* VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,char const*) ;
 int FUNC_5 (int ,TYPE_1__*) ;
 TYPE_1__* FUNC_6 (int) ;
 int FUNC_7 (char const*) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (char const*,int ,int ,int *,int) ;
 char const* FUNC_10 () ;

__attribute__((used)) static void
FUNC_11(const char *VAR_8)
{
 const char *VAR_9;
 MemoryContext VAR_10;
 pending_label *VAR_11;


 if (!VAR_8)
  VAR_9 = VAR_6;
 else
 {
  if (FUNC_8((security_context_t) VAR_8) < 0)
   FUNC_2(VAR_2,
     (FUNC_3(VAR_1),
      FUNC_4("SELinux: invalid security label: \"%s\"",
       VAR_8)));
  VAR_9 = VAR_8;
 }


 FUNC_9(FUNC_10(),
          VAR_3,
          VAR_5,
          ((void*)0),
          1);

 FUNC_9(VAR_9,
          VAR_3,
          VAR_4,
          ((void*)0),
          1);





 VAR_10 = FUNC_1(VAR_0);

 VAR_11 = FUNC_6(sizeof(pending_label));
 VAR_11->subid = FUNC_0();
 if (VAR_8)
  VAR_11->label = FUNC_7(VAR_8);
 VAR_7 = FUNC_5(VAR_7, VAR_11);

 FUNC_1(VAR_10);
}
