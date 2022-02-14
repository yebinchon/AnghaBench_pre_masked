
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct testcase {char* msg; int size; int keep_mapped; scalar_t__ low_addr_required; int flags; int addr; } ;


 scalar_t__ VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (void*,int ,int ) ;
 void* FUNC_1 (int ,int ,int,int ,int,int ) ;
 int FUNC_2 (void*,int ) ;
 int FUNC_3 (char*,...) ;

__attribute__((used)) static int FUNC_4(struct testcase *VAR_4, int VAR_5)
{
 void *VAR_6;
 int VAR_7, VAR_8 = 0;

 for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++) {
  struct testcase *VAR_9 = VAR_4 + VAR_7;

  VAR_6 = FUNC_1(VAR_9->addr, VAR_9->size, VAR_2 | VAR_3, VAR_9->flags, -1, 0);

  FUNC_3("%s: %p - ", VAR_9->msg, VAR_6);

  if (VAR_6 == VAR_1) {
   FUNC_3("FAILED\n");
   VAR_8 = 1;
   continue;
  }

  if (VAR_9->low_addr_required && VAR_6 >= (void *)(VAR_0)) {
   FUNC_3("FAILED\n");
   VAR_8 = 1;
  } else {




   FUNC_0(VAR_6, 0, VAR_9->size);
   FUNC_3("OK\n");
  }
  if (!VAR_9->keep_mapped)
   FUNC_2(VAR_6, VAR_9->size);
 }

 return VAR_8;
}
