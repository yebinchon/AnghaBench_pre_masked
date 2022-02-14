
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_4__ {scalar_t__ message; } ;
typedef TYPE_1__ MSG ;
typedef int HANDLE ;
typedef scalar_t__ DWORD ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_2 (int,int *,int ,scalar_t__,int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (TYPE_1__*,int *,int ,int ,int ) ;
 int VAR_4 ;
 int FUNC_4 (int ) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;

DWORD FUNC_5(HANDLE VAR_10, DWORD VAR_11)
{
 uint64_t VAR_12, VAR_13 = FUNC_1() + VAR_11;
 DWORD VAR_14;
 MSG VAR_15;

 do {

  while (FUNC_3(&VAR_15, ((void*)0), 0, 0, VAR_3)) {
   if ((VAR_15.message == VAR_9) || (VAR_15.message == VAR_8)) {
    FUNC_4(VAR_0);
    return VAR_5;
   } else {
    FUNC_0(&VAR_15);
   }
  }


  VAR_14 = FUNC_2(1, &VAR_10, VAR_1, VAR_11, VAR_4);

  if (VAR_11 != VAR_2) {
   VAR_12 = FUNC_1();


   if (VAR_12 < VAR_13)
    VAR_11 = (DWORD) (VAR_13 - VAR_12);
   else
    VAR_14 = VAR_7;
  }
 } while (VAR_14 == (VAR_6 + 1));

 return VAR_14;
}
