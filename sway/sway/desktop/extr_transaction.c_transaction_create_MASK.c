
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sway_transaction {int instructions; } ;


 struct sway_transaction* FUNC_0 (int,int) ;
 int FUNC_1 () ;
 int FUNC_2 (struct sway_transaction*,char*) ;

__attribute__((used)) static struct sway_transaction *FUNC_3(void) {
 struct sway_transaction *VAR_0 =
  FUNC_0(1, sizeof(struct sway_transaction));
 if (!FUNC_2(VAR_0, "Unable to allocate transaction")) {
  return ((void*)0);
 }
 VAR_0->instructions = FUNC_1();
 return VAR_0;
}
