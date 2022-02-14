
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int gfp_t ;
struct TYPE_2__ {struct TYPE_2__* next; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int ,int ) ;
 int FUNC_1 (void*,int ,int ) ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static void *FUNC_2(gfp_t VAR_3)
{
 if (VAR_2) {
  void *VAR_4 = VAR_2;

  VAR_2 = VAR_2->next;
  FUNC_1(VAR_4, 0, VAR_0);
  return VAR_4;
 }
 return FUNC_0(VAR_3, VAR_1);
}
