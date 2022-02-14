
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {unsigned int code; unsigned int length; int runlen; } ;
typedef TYPE_1__ tableentry ;
struct _HPDF_CCITT_Data {int dummy; } ;
typedef int int32 ;
struct TYPE_6__ {unsigned int bit; int data; } ;
typedef TYPE_2__ HPDF_Fax3CodecState ;


 int FUNC_0 (char*,int) ;
 TYPE_2__* FUNC_1 (struct _HPDF_CCITT_Data*) ;
 int FUNC_2 (struct _HPDF_CCITT_Data*,unsigned int,unsigned int) ;
 int FUNC_3 (int) ;

__attribute__((used)) static void
FUNC_4(struct _HPDF_CCITT_Data *VAR_0, int32 VAR_1, const tableentry* VAR_2)
{
 HPDF_Fax3CodecState* VAR_3 = FUNC_1(VAR_0);
 unsigned int VAR_4 = VAR_3->bit;
 int VAR_5 = VAR_3->data;
 unsigned int VAR_6, VAR_7;

 while (VAR_1 >= 2624) {
  const tableentry* VAR_8 = &VAR_2[63 + (2560>>6)];
  VAR_6 = VAR_8->code, VAR_7 = VAR_8->length;



  FUNC_2(VAR_0, VAR_6, VAR_7);
  VAR_1 -= VAR_8->runlen;
 }
 if (VAR_1 >= 64) {
  const tableentry* VAR_9 = &VAR_2[63 + (VAR_1>>6)];
  FUNC_3(VAR_9->runlen == 64*(VAR_1>>6));
  VAR_6 = VAR_9->code, VAR_7 = VAR_9->length;



  FUNC_2(VAR_0, VAR_6, VAR_7);
  VAR_1 -= VAR_9->runlen;
 }
 VAR_6 = VAR_2[VAR_1].code, VAR_7 = VAR_2[VAR_1].length;



 FUNC_2(VAR_0, VAR_6, VAR_7);

 VAR_3->data = VAR_5;
 VAR_3->bit = VAR_4;
}
