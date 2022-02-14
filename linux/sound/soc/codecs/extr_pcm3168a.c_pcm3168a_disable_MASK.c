
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcm3168a_priv {int scki; int supplies; } ;
struct device {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct pcm3168a_priv* FUNC_2 (struct device*) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static void FUNC_4(struct device *VAR_0)
{
 struct pcm3168a_priv *VAR_1 = FUNC_2(VAR_0);

 FUNC_3(FUNC_0(VAR_1->supplies),
          VAR_1->supplies);
 FUNC_1(VAR_1->scki);
}
