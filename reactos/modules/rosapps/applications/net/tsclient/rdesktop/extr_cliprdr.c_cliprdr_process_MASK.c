
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int uint8 ;
typedef int uint32 ;
typedef scalar_t__ uint16 ;
struct TYPE_15__ {int last_formats_length; int last_formats; } ;
struct TYPE_17__ {TYPE_1__ cliprdr; } ;
struct TYPE_16__ {int * p; } ;
typedef TYPE_2__* STREAM ;
typedef TYPE_3__ RDPCLIENT ;





 scalar_t__ VAR_0 ;


 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (TYPE_3__*,int ,int ) ;
 int FUNC_2 (TYPE_3__*,int const,int ,int *,int ) ;
 int FUNC_3 (TYPE_2__*,scalar_t__) ;
 int FUNC_4 (TYPE_2__*,int ) ;
 int FUNC_5 (TYPE_3__*,int *,int ) ;
 int FUNC_6 (TYPE_3__*,int *,int ) ;
 int FUNC_7 (TYPE_3__*,int ) ;
 int FUNC_8 (TYPE_3__*) ;
 int FUNC_9 (TYPE_3__*) ;
 int FUNC_10 (char*,scalar_t__) ;

__attribute__((used)) static void
FUNC_11(RDPCLIENT * VAR_2, STREAM VAR_3)
{
 uint16 VAR_4, VAR_5;
 uint32 VAR_6, VAR_7;
 uint8 *VAR_8;

 FUNC_3(VAR_3, VAR_4);
 FUNC_3(VAR_3, VAR_5);
 FUNC_4(VAR_3, VAR_6);
 VAR_8 = VAR_3->p;

 FUNC_0(("CLIPRDR recv: type=%d, status=%d, length=%d\n", VAR_4, VAR_5, VAR_6));

 if (VAR_5 == VAR_0)
 {
  switch (VAR_4)
  {
   case 129:


    FUNC_1(VAR_2, VAR_2->cliprdr.last_formats,
            VAR_2->cliprdr.last_formats_length);
    break;
   case 130:
    FUNC_8(VAR_2);
    break;
   default:
    FUNC_0(("CLIPRDR error (type=%d)\n", VAR_4));
  }

  return;
 }

 switch (VAR_4)
 {
  case 132:
   FUNC_9(VAR_2);
   break;
  case 128:
   FUNC_5(VAR_2, VAR_8, VAR_6);
   FUNC_2(VAR_2, 129, VAR_1, ((void*)0), 0);
   return;
  case 129:
   break;
  case 131:
   FUNC_4(VAR_3, VAR_7);
   FUNC_7(VAR_2, VAR_7);
   break;
  case 130:
   FUNC_6(VAR_2, VAR_8, VAR_6);
   break;
  case 7:
   break;
  default:
   FUNC_10("CLIPRDR packet type %d\n", VAR_4);
 }
}
