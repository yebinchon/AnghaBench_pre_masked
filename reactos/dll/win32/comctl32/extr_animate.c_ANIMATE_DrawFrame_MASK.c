
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ (* fnICDecompress ) (scalar_t__,int ,int ,int ,int ,int ) ;} ;
struct TYPE_7__ {int dwSuggestedBufferSize; } ;
struct TYPE_8__ {size_t currFrame; int nLoop; size_t nFromFrame; int nToFrame; int outdata; int outbih; int indata; int inbih; scalar_t__ hic; TYPE_1__ ash; int hMMio; int * lpIndex; } ;
typedef int HDC ;
typedef int BOOL ;
typedef TYPE_2__ ANIMATE_INFO ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (char*,size_t,int) ;
 int VAR_3 ;
 int FUNC_3 (char*) ;
 TYPE_3__ VAR_4 ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int ,int ,int ) ;
 scalar_t__ FUNC_6 (scalar_t__,int ,int ,int ,int ,int ) ;

__attribute__((used)) static BOOL FUNC_7(ANIMATE_INFO *VAR_5, HDC VAR_6)
{
    FUNC_2("Drawing frame %d (loop %d)\n", VAR_5->currFrame, VAR_5->nLoop);

    FUNC_5(VAR_5->hMMio, VAR_5->lpIndex[VAR_5->currFrame], VAR_2);
    FUNC_4(VAR_5->hMMio, VAR_5->indata, VAR_5->ash.dwSuggestedBufferSize);

    if (VAR_5->hic &&
 VAR_4.fnICDecompress(VAR_5->hic, 0, VAR_5->inbih, VAR_5->indata,
       VAR_5->outbih, VAR_5->outdata) != VAR_1) {
 FUNC_3("Decompression error\n");
 return VAR_0;
    }

    FUNC_1(VAR_5, VAR_6);

    if (VAR_5->currFrame++ >= VAR_5->nToFrame) {
 VAR_5->currFrame = VAR_5->nFromFrame;
 if (VAR_5->nLoop != -1) {
     if (--VAR_5->nLoop == 0) {
  FUNC_0(VAR_5);
     }
 }
    }

    return VAR_3;
}
