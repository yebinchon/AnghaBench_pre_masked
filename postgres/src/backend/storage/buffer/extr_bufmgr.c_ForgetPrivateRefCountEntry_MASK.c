
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ refcount; int buffer; } ;
typedef TYPE_1__ PrivateRefCountEntry ;
typedef int Buffer ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 size_t VAR_5 ;
 TYPE_1__* VAR_6 ;
 int FUNC_1 (int ,void*,int ,int*) ;

__attribute__((used)) static void
FUNC_2(PrivateRefCountEntry *VAR_7)
{
 FUNC_0(VAR_7->refcount == 0);

 if (VAR_7 >= &VAR_2[0] &&
  VAR_7 < &VAR_2[VAR_5])
 {
  VAR_7->buffer = VAR_1;






  VAR_6 = VAR_7;
 }
 else
 {
  bool VAR_8;
  Buffer VAR_9 = VAR_7->buffer;

  FUNC_1(VAR_3,
     (void *) &VAR_9,
     VAR_0,
     &VAR_8);
  FUNC_0(VAR_8);
  FUNC_0(VAR_4 > 0);
  VAR_4--;
 }
}
