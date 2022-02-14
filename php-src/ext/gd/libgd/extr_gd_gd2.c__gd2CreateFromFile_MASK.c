
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int t_chunk_info ;
typedef TYPE_1__* gdImagePtr ;
typedef int gdIOCtxPtr ;
struct TYPE_7__ {int colorsTotal; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int*,int*,int*,int*,int*,int*,int*,int **) ;
 int FUNC_2 (int ,TYPE_1__*,int) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int *) ;
 TYPE_1__* FUNC_5 (int,int) ;
 TYPE_1__* FUNC_6 (int,int) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (char*,...) ;

__attribute__((used)) static gdImagePtr FUNC_9 (gdIOCtxPtr VAR_0, int *VAR_1, int *VAR_2, int *VAR_3, int *VAR_4, int *VAR_5, int *VAR_6, int *VAR_7, t_chunk_info ** VAR_8)
{
 gdImagePtr VAR_9;

 if (FUNC_1 (VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8) != 1) {
  FUNC_0(FUNC_8("Bad GD2 header"));
  goto fail1;
 }

 if (FUNC_3(*VAR_5)) {
  VAR_9 = FUNC_6(*VAR_1, *VAR_2);
 } else {
  VAR_9 = FUNC_5(*VAR_1, *VAR_2);
 }
 if (VAR_9 == ((void*)0)) {
  FUNC_0(FUNC_8("Could not create gdImage"));
  goto fail2;
 }

 if (!FUNC_2(VAR_0, VAR_9, (*VAR_4) == 2)) {
  FUNC_0(FUNC_8("Could not read color palette"));
  goto fail3;
 }
 FUNC_0(FUNC_8("Image palette completed: %d colours", VAR_9->colorsTotal));

 return VAR_9;

fail3:
 FUNC_7(VAR_9);
fail2:
 FUNC_4(*VAR_8);
fail1:
 return 0;
}
