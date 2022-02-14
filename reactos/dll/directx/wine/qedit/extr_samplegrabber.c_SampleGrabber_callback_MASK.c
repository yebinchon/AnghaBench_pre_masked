
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ ULONG ;
struct TYPE_5__ {int csFilter; } ;
struct TYPE_6__ {scalar_t__ bufferLen; int grabberMethod; int grabberIface; TYPE_1__ filter; int * bufferData; } ;
typedef TYPE_2__ SG_Impl ;
typedef int REFERENCE_TIME ;
typedef scalar_t__ LONG ;
typedef int IMediaSample ;
typedef int BYTE ;


 int * FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *,scalar_t__) ;
 int FUNC_3 (char*,TYPE_2__*,int *,scalar_t__) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*,int) ;
 scalar_t__ FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (int *,int **) ;
 int FUNC_9 (int *,int*,int*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int ,double,int *,scalar_t__) ;
 int FUNC_12 (int ,double,int *) ;
 int FUNC_13 (int *) ;
 scalar_t__ FUNC_14 (int ) ;

__attribute__((used)) static void FUNC_15(SG_Impl *VAR_0, IMediaSample *VAR_1)
{
    double VAR_2 = 0.0;
    REFERENCE_TIME VAR_3, VAR_4;
    if (VAR_0->bufferLen >= 0) {
        BYTE *VAR_5 = 0;
        LONG VAR_6 = FUNC_7(VAR_1);
        if (VAR_6 >= 0 && FUNC_14(FUNC_8(VAR_1, &VAR_5))) {
            if (!VAR_5)
                VAR_6 = 0;
            FUNC_4(&VAR_0->filter.csFilter);
            if (VAR_0->bufferLen != VAR_6) {
                FUNC_1(VAR_0->bufferData);
                VAR_0->bufferData = VAR_6 ? FUNC_0(VAR_6) : ((void*)0);
                VAR_0->bufferLen = VAR_6;
            }
            if (VAR_6)
                FUNC_2(VAR_0->bufferData, VAR_5, VAR_6);
            FUNC_13(&VAR_0->filter.csFilter);
        }
    }
    if (!VAR_0->grabberIface)
        return;
    if (FUNC_14(FUNC_9(VAR_1, &VAR_3, &VAR_4)))
        VAR_2 = 1e-7 * VAR_3;
    switch (VAR_0->grabberMethod) {
        case 0:
     {
  ULONG VAR_7 = FUNC_6(VAR_1);
  FUNC_12(VAR_0->grabberIface, VAR_2, VAR_1);
  VAR_7 = FUNC_10(VAR_1) + 1 - VAR_7;
  if (VAR_7)
  {
      FUNC_3("(%p) Callback referenced sample %p by %u\n", VAR_0, VAR_1, VAR_7);

      while (VAR_7--)
   FUNC_10(VAR_1);
  }
     }
            break;
        case 1:
            {
                BYTE *VAR_8 = 0;
                LONG VAR_9 = FUNC_7(VAR_1);
                if (VAR_9 && FUNC_14(FUNC_8(VAR_1, &VAR_8)) && VAR_8)
                    FUNC_11(VAR_0->grabberIface, VAR_2, VAR_8, VAR_9);
            }
            break;
        case -1:
            break;
        default:
            FUNC_5("unsupported method %d\n", VAR_0->grabberMethod);

            VAR_0->grabberMethod = -1;
    }
}
