
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rsnd_priv {int dummy; } ;
struct rsnd_gen {int * regs; } ;
struct device {int dummy; } ;
typedef enum rsnd_reg { ____Placeholder_rsnd_reg } rsnd_reg ;


 int FUNC_0 (struct device*,char*,int) ;
 struct device* FUNC_1 (struct rsnd_priv*) ;

__attribute__((used)) static int FUNC_2(struct rsnd_priv *VAR_0,
      struct rsnd_gen *VAR_1, enum rsnd_reg VAR_2)
{
 if (!VAR_1->regs[VAR_2]) {
  struct device *VAR_3 = FUNC_1(VAR_0);

  FUNC_0(VAR_3, "unsupported register access %x\n", VAR_2);
  return 0;
 }

 return 1;
}
