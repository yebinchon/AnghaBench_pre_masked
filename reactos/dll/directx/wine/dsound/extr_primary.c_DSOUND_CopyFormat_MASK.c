
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ wFormatTag; } ;
struct TYPE_9__ {int nBlockAlign; int nChannels; int wBitsPerSample; int nAvgBytesPerSec; int nSamplesPerSec; scalar_t__ cbSize; } ;
typedef int PCMWAVEFORMAT ;
typedef TYPE_1__* LPWAVEFORMATEX ;
typedef TYPE_2__* LPCWAVEFORMATEX ;
typedef int DWORD ;


 int FUNC_0 (TYPE_1__*,TYPE_2__*,int) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 () ;
 TYPE_1__* FUNC_3 (int ,int ,int) ;
 int FUNC_4 (char*,...) ;
 scalar_t__ VAR_0 ;

LPWAVEFORMATEX FUNC_5(LPCWAVEFORMATEX VAR_1)
{
 DWORD VAR_2 = FUNC_1(VAR_1);
 LPWAVEFORMATEX VAR_3 = FUNC_3(FUNC_2(),0,VAR_2);
 if (VAR_3 == ((void*)0)) {
  FUNC_4("out of memory\n");
 } else if (VAR_1->wFormatTag != VAR_0) {
  FUNC_0(VAR_3, VAR_1, VAR_2);
 } else {
  FUNC_0(VAR_3, VAR_1, sizeof(PCMWAVEFORMAT));
  VAR_3->cbSize=0;
  if (VAR_3->nBlockAlign != VAR_3->nChannels * VAR_3->wBitsPerSample/8) {
   FUNC_4("Fixing bad nBlockAlign (%u)\n", VAR_3->nBlockAlign);
   VAR_3->nBlockAlign = VAR_3->nChannels * VAR_3->wBitsPerSample/8;
  }
  if (VAR_3->nAvgBytesPerSec != VAR_3->nSamplesPerSec * VAR_3->nBlockAlign) {
   FUNC_4("Fixing bad nAvgBytesPerSec (%u)\n", VAR_3->nAvgBytesPerSec);
   VAR_3->nAvgBytesPerSec = VAR_3->nSamplesPerSec * VAR_3->nBlockAlign;
  }
 }
 return VAR_3;
}
