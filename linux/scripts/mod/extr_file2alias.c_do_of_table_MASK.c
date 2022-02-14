
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct module {int name; } ;


 unsigned long VAR_0 ;
 int FUNC_0 (int ,char*,unsigned long,unsigned long const,void*) ;
 int FUNC_1 (void*,struct module*) ;

__attribute__((used)) static void FUNC_2(void *VAR_1, unsigned long VAR_2,
   struct module *VAR_3)
{
 unsigned int VAR_4;
 const unsigned long VAR_5 = VAR_0;

 FUNC_0(VAR_3->name, "of", VAR_2, VAR_5, VAR_1);


 VAR_2 -= VAR_5;

 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4 += VAR_5)
  FUNC_1(VAR_1 + VAR_4, VAR_3);
}
