
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int XLogRecPtr ;
struct TYPE_2__ {scalar_t__ num_sync; scalar_t__ syncrep_method; } ;
typedef int List ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_2 (int *,int *,int *,int *,scalar_t__) ;
 int FUNC_3 (int *,int *,int *,int *) ;
 int * FUNC_4 (int*) ;
 int VAR_3 ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;

__attribute__((used)) static bool
FUNC_7(XLogRecPtr *VAR_4, XLogRecPtr *VAR_5,
      XLogRecPtr *VAR_6, bool *VAR_7)
{
 List *VAR_8;

 FUNC_0(FUNC_1(VAR_3));

 *VAR_4 = VAR_0;
 *VAR_5 = VAR_0;
 *VAR_6 = VAR_0;
 *VAR_7 = 0;


 VAR_8 = FUNC_4(VAR_7);





 if (!(*VAR_7) ||
  VAR_2 == ((void*)0) ||
  FUNC_6(VAR_8) < VAR_2->num_sync)
 {
  FUNC_5(VAR_8);
  return 0;
 }
 if (VAR_2->syncrep_method == VAR_1)
 {
  FUNC_3(VAR_4, VAR_5, VAR_6,
           VAR_8);
 }
 else
 {
  FUNC_2(VAR_4, VAR_5, VAR_6,
           VAR_8, VAR_2->num_sync);
 }

 FUNC_5(VAR_8);
 return 1;
}
