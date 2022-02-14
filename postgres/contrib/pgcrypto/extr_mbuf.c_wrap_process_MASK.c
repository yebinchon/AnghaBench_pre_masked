
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8 ;
struct TYPE_5__ {int next; int priv; TYPE_1__* op; } ;
struct TYPE_4__ {int (* push ) (int ,int ,int const*,int) ;} ;
typedef TYPE_2__ PushFilter ;


 int VAR_0 ;
 int FUNC_0 (int ,int const*,int) ;
 int FUNC_1 (int ,int ,int const*,int) ;

__attribute__((used)) static int
FUNC_2(PushFilter *VAR_1, const uint8 *VAR_2, int VAR_3)
{
 int VAR_4;

 if (VAR_1->op->push != ((void*)0))
  VAR_4 = VAR_1->op->push(VAR_1->next, VAR_1->priv, VAR_2, VAR_3);
 else
  VAR_4 = FUNC_0(VAR_1->next, VAR_2, VAR_3);
 if (VAR_4 > 0)
  return VAR_0;
 return VAR_4;
}
