
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct lan9303 {scalar_t__ is_bridged; } ;
struct dsa_port {TYPE_1__* ds; } ;
struct TYPE_2__ {struct lan9303* priv; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static int FUNC_1(struct dsa_port *VAR_0, u8 *VAR_1)
{
 struct lan9303 *VAR_2 = VAR_0->ds->priv;

 return VAR_2->is_bridged && !FUNC_0(VAR_1);
}
