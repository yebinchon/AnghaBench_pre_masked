
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct alloc_context {int nodemask; int zonelist; } ;
typedef int gfp_t ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (unsigned int) ;
 unsigned int FUNC_5 () ;
 int FUNC_6 (unsigned long*) ;
 int FUNC_7 (unsigned long*) ;
 int FUNC_8 (int ,unsigned int,int ,int ) ;

__attribute__((used)) static int
FUNC_9(gfp_t VAR_0, unsigned int VAR_1,
     const struct alloc_context *VAR_2)
{
 int VAR_3;
 unsigned int VAR_4;
 unsigned long VAR_5;

 FUNC_0();


 FUNC_1();
 FUNC_6(&VAR_5);
 FUNC_2(VAR_0);
 VAR_4 = FUNC_5();

 VAR_3 = FUNC_8(VAR_2->zonelist, VAR_1, VAR_0,
        VAR_2->nodemask);

 FUNC_4(VAR_4);
 FUNC_3(VAR_0);
 FUNC_7(&VAR_5);

 FUNC_0();

 return VAR_3;
}
