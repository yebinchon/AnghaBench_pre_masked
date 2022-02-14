
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {unsigned int wFormatTag; unsigned int nChannels; int nSamplesPerSec; int nAvgBytesPerSec; unsigned int nBlockAlign; unsigned int wBitsPerSample; unsigned int cbSize; int cb; } ;
typedef TYPE_2__ WAVEFORMATEX ;
struct TYPE_8__ {size_t format_count; TYPE_2__* formats; } ;
struct TYPE_10__ {TYPE_1__ rdpsnd; } ;
typedef int STREAM ;
typedef TYPE_3__ RDPCLIENT ;
typedef scalar_t__ BOOL ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,unsigned int) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (int ,int) ;
 int FUNC_9 (int ,int) ;
 int FUNC_10 (TYPE_3__*,int,int) ;
 int FUNC_11 (TYPE_3__*,int ) ;
 scalar_t__ FUNC_12 (int ,int) ;
 int FUNC_13 (int ) ;
 int VAR_5 ;
 int FUNC_14 () ;
 scalar_t__ FUNC_15 (TYPE_2__*) ;
 scalar_t__ FUNC_16 () ;

__attribute__((used)) static void
FUNC_17(RDPCLIENT * VAR_6, STREAM VAR_7)
{
 unsigned int VAR_8, VAR_9;
 WAVEFORMATEX *VAR_10;
 STREAM VAR_11;
 BOOL VAR_12 = VAR_0;
 int VAR_13;
 int VAR_14;

 FUNC_4(VAR_7, 14);
 FUNC_1(VAR_7, VAR_8);
 FUNC_4(VAR_7, 4);

 if (FUNC_16())
 {
  FUNC_14();
  VAR_12 = VAR_4;
 }

 VAR_6->rdpsnd.format_count = 0;
 if (FUNC_12(VAR_7, 18 * VAR_8))
 {
  for (VAR_9 = 0; VAR_9 < VAR_8; VAR_9++)
  {
   VAR_10 = &VAR_6->rdpsnd.formats[VAR_6->rdpsnd.format_count];
   FUNC_1(VAR_7, VAR_10->wFormatTag);
   FUNC_1(VAR_7, VAR_10->nChannels);
   FUNC_2(VAR_7, VAR_10->nSamplesPerSec);
   FUNC_2(VAR_7, VAR_10->nAvgBytesPerSec);
   FUNC_1(VAR_7, VAR_10->nBlockAlign);
   FUNC_1(VAR_7, VAR_10->wBitsPerSample);
   FUNC_1(VAR_7, VAR_10->cbSize);


   VAR_13 = VAR_10->cbSize;
   VAR_14 = 0;
   if (VAR_10->cbSize > VAR_1)
   {
    FUNC_0(VAR_5, "cbSize too large for buffer: %d\n",
     VAR_10->cbSize);
    VAR_13 = VAR_1;
    VAR_14 = VAR_10->cbSize - VAR_1;
   }
   FUNC_3(VAR_7, VAR_10->cb, VAR_13);
   FUNC_4(VAR_7, VAR_14);

   if (VAR_12 && FUNC_15(VAR_10))
   {
    VAR_6->rdpsnd.format_count++;
    if (VAR_6->rdpsnd.format_count == VAR_2)
     break;
   }
  }
 }

 VAR_11 = FUNC_10(VAR_6, VAR_3 | 0x200, 20 + 18 * VAR_6->rdpsnd.format_count);
 FUNC_8(VAR_11, 3);
 FUNC_7(VAR_11, 0xffffffff);
 FUNC_7(VAR_11, 0);
 FUNC_5(VAR_11, 0);

 FUNC_6(VAR_11, VAR_6->rdpsnd.format_count);
 FUNC_9(VAR_11, 0x95);
 FUNC_6(VAR_11, 2);
 FUNC_9(VAR_11, 0x77);

 for (VAR_9 = 0; VAR_9 < VAR_6->rdpsnd.format_count; VAR_9++)
 {
  VAR_10 = &VAR_6->rdpsnd.formats[VAR_9];
  FUNC_6(VAR_11, VAR_10->wFormatTag);
  FUNC_6(VAR_11, VAR_10->nChannels);
  FUNC_8(VAR_11, VAR_10->nSamplesPerSec);
  FUNC_8(VAR_11, VAR_10->nAvgBytesPerSec);
  FUNC_6(VAR_11, VAR_10->nBlockAlign);
  FUNC_6(VAR_11, VAR_10->wBitsPerSample);
  FUNC_5(VAR_11, 0);
 }

 FUNC_13(VAR_11);
 FUNC_11(VAR_6, VAR_11);
}
