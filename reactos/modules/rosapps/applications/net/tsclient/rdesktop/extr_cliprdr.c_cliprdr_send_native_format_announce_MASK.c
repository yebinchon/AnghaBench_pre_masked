
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8 ;
typedef int uint32 ;
struct TYPE_5__ {int last_formats_length; int * last_formats; } ;
struct TYPE_6__ {TYPE_1__ cliprdr; } ;
typedef TYPE_2__ RDPCLIENT ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (TYPE_2__*,int ,int ,int *,int ) ;
 int FUNC_2 (int *,int *,int ) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int ) ;

void
FUNC_5(RDPCLIENT * VAR_2, uint8 * VAR_3, uint32 VAR_4)
{
 FUNC_0(("cliprdr_send_native_format_announce\n"));

 FUNC_1(VAR_2, VAR_0, VAR_1, VAR_3,
       VAR_4);

 if (VAR_3 != VAR_2->cliprdr.last_formats)
 {
  if (VAR_2->cliprdr.last_formats)
   FUNC_3(VAR_2->cliprdr.last_formats);

  VAR_2->cliprdr.last_formats = FUNC_4(VAR_4);
  FUNC_2(VAR_2->cliprdr.last_formats, VAR_3, VAR_4);
  VAR_2->cliprdr.last_formats_length = VAR_4;
 }
}
