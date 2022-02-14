
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hdac_bus {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct hdac_bus*,int ,int ) ;
 int FUNC_1 (struct hdac_bus*,int ) ;

__attribute__((used)) static irqreturn_t FUNC_2(int VAR_3, void *VAR_4)
{
 struct hdac_bus *VAR_5 = VAR_4;
 u32 VAR_6;

 VAR_6 = FUNC_1(VAR_5, VAR_0);

 FUNC_0(VAR_5, VAR_6, VAR_2);

 return VAR_1;
}
