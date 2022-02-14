
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct _HPDF_CCITT_Data {int dummy; } ;
struct TYPE_3__ {unsigned int bit; int data; } ;
typedef TYPE_1__ HPDF_Fax3CodecState ;


 TYPE_1__* FUNC_0 (struct _HPDF_CCITT_Data*) ;
 int FUNC_1 (struct _HPDF_CCITT_Data*,unsigned int,unsigned int) ;

__attribute__((used)) static void
FUNC_2(struct _HPDF_CCITT_Data *VAR_0, unsigned int VAR_1, unsigned int VAR_2)
{
 HPDF_Fax3CodecState* VAR_3 = FUNC_0(VAR_0);
 unsigned int VAR_4 = VAR_3->bit;
 int VAR_5 = VAR_3->data;

 FUNC_1(VAR_0, VAR_1, VAR_2);

 VAR_3->data = VAR_5;
 VAR_3->bit = VAR_4;
}
