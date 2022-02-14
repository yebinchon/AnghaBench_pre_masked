
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8 ;
typedef int uint16 ;
typedef int tmsize_t ;
struct TYPE_3__ {int (* decodepfunc ) (int *,int *,int ) ;scalar_t__ (* decoderow ) (int *,int *,int ,int ) ;} ;
typedef TYPE_1__ TIFFPredictorState ;
typedef int TIFF ;


 TYPE_1__* FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int *,int *,int ,int ) ;
 int FUNC_3 (int *,int *,int ) ;

__attribute__((used)) static int
FUNC_4(TIFF* VAR_0, uint8* VAR_1, tmsize_t VAR_2, uint16 VAR_3)
{
 TIFFPredictorState *VAR_4 = FUNC_0(VAR_0);

 FUNC_1(VAR_4 != ((void*)0));
 FUNC_1(VAR_4->decoderow != ((void*)0));
 FUNC_1(VAR_4->decodepfunc != ((void*)0));

 if ((*VAR_4->decoderow)(VAR_0, VAR_1, VAR_2, VAR_3)) {
  return (*VAR_4->decodepfunc)(VAR_0, VAR_1, VAR_2);
 } else
  return 0;
}
