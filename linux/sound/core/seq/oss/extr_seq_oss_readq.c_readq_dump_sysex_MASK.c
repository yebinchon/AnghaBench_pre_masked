
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct readq_sysex_ctx {int dev; int readq; } ;


 int FUNC_0 (int ,int ,void*,int) ;

__attribute__((used)) static int FUNC_1(void *VAR_0, void *VAR_1, int VAR_2)
{
 struct readq_sysex_ctx *VAR_3 = VAR_0;

 return FUNC_0(VAR_3->readq, VAR_3->dev, VAR_1, VAR_2);
}
