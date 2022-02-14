
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32 ;
struct _HPDF_CCITT_Data {int dummy; } ;
struct TYPE_6__ {int rowbytes; int rowpixels; } ;
struct TYPE_5__ {int* runs; int* curruns; int* refruns; unsigned char* refline; } ;
typedef int HPDF_UINT ;
typedef TYPE_1__ HPDF_Fax3CodecState ;
typedef TYPE_2__ HPDF_Fax3BaseState ;


 TYPE_1__* FUNC_0 (struct _HPDF_CCITT_Data*) ;
 TYPE_2__* FUNC_1 (struct _HPDF_CCITT_Data*) ;
 int VAR_0 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,int) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static int
FUNC_5(struct _HPDF_CCITT_Data *VAR_1, HPDF_UINT VAR_2,
       HPDF_UINT VAR_3,
       HPDF_UINT VAR_4)
{
 HPDF_Fax3BaseState* VAR_5 = FUNC_1(VAR_1);
 HPDF_Fax3CodecState* VAR_6 = FUNC_0(VAR_1);
 uint32 VAR_7, VAR_8, VAR_9;

 FUNC_2 (VAR_3);

 VAR_7 = VAR_4;
 VAR_8 = VAR_2;

 VAR_5->rowbytes = (uint32) VAR_7;
 VAR_5->rowpixels = (uint32) VAR_8;

 VAR_9 = 2*FUNC_3(VAR_8,32);
 VAR_9 += 3;
 VAR_6->runs = (uint32*) FUNC_4(2*VAR_9 * sizeof (uint32));
 if (VAR_6->runs == ((void*)0))
  return 1;
 VAR_6->curruns = VAR_6->runs;
 VAR_6->refruns = VAR_6->runs + VAR_9;
 VAR_6->refline = (unsigned char*) FUNC_4(VAR_7);
 if (VAR_6->refline == ((void*)0)) {
  return 1;
 }

 return VAR_0;
}
