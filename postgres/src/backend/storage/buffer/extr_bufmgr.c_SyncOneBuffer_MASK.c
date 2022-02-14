
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint32 ;
typedef int WritebackContext ;
struct TYPE_9__ {int tag; } ;
typedef int BufferTag ;
typedef TYPE_1__ BufferDesc ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_3 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int *) ;
 TYPE_1__* FUNC_4 (int) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ) ;
 int VAR_4 ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 () ;
 int FUNC_10 (int *,int *) ;
 int FUNC_11 (TYPE_1__*,int) ;
 int FUNC_12 (TYPE_1__*,int) ;

__attribute__((used)) static int
FUNC_13(int VAR_5, bool VAR_6, WritebackContext *VAR_7)
{
 BufferDesc *VAR_8 = FUNC_4(VAR_5);
 int VAR_9 = 0;
 uint32 VAR_10;
 BufferTag VAR_11;

 FUNC_9();
 VAR_10 = FUNC_7(VAR_8);

 if (FUNC_0(VAR_10) == 0 &&
  FUNC_1(VAR_10) == 0)
 {
  VAR_9 |= VAR_2;
 }
 else if (VAR_6)
 {

  FUNC_11(VAR_8, VAR_10);
  return VAR_9;
 }

 if (!(VAR_10 & VAR_1) || !(VAR_10 & VAR_0))
 {

  FUNC_11(VAR_8, VAR_10);
  return VAR_9;
 }





 FUNC_8(VAR_8);
 FUNC_5(FUNC_2(VAR_8), VAR_4);

 FUNC_3(VAR_8, ((void*)0));

 FUNC_6(FUNC_2(VAR_8));

 VAR_11 = VAR_8->tag;

 FUNC_12(VAR_8, 1);

 FUNC_10(VAR_7, &VAR_11);

 return VAR_9 | VAR_3;
}
