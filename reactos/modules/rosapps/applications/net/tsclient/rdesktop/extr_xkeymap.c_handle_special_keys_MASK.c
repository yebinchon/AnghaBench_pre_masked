
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_1__ ;


typedef int uint32 ;
struct TYPE_11__ {int numlock_sync; int win_button_size; } ;
typedef TYPE_1__ RDPCLIENT ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (TYPE_1__*,unsigned int,int ) ;
 int FUNC_1 (TYPE_1__*,int,int ,int ,int,int ) ;
 int FUNC_2 (TYPE_1__*,int,int ,int) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int,int ,int ) ;
 int FUNC_5 (TYPE_1__*,int ) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;

BOOL
FUNC_8(RDPCLIENT * VAR_11, uint32 VAR_12, unsigned int VAR_13, uint32 VAR_14, BOOL VAR_15)
{
 switch (VAR_12)
 {
  case 131:
   if ((FUNC_0(VAR_11, VAR_13, VAR_7) || FUNC_0(VAR_11, VAR_13, VAR_8))
       && (FUNC_0(VAR_11, VAR_13, VAR_9)
    || FUNC_0(VAR_11, VAR_13, VAR_10)))
   {

    if (VAR_15)
     FUNC_7(VAR_11);
    return VAR_6;
   }
   break;

  case 139:

   if (VAR_15)
   {
    FUNC_2(VAR_11, VAR_14, VAR_3,
        (VAR_5 | 0x46));
    FUNC_2(VAR_11, VAR_14, VAR_3,
        (VAR_5 | 0xc6));
   }

   return VAR_6;
   break;

  case 132:
   if (VAR_15)
   {
    FUNC_1(VAR_11, VAR_14, VAR_1, VAR_3, 0xe1, 0);
    FUNC_1(VAR_11, VAR_14, VAR_1, VAR_3, 0x1d, 0);
    FUNC_1(VAR_11, VAR_14, VAR_1, VAR_3, 0x45, 0);
    FUNC_1(VAR_11, VAR_14, VAR_1, VAR_3, 0xe1, 0);
    FUNC_1(VAR_11, VAR_14, VAR_1, VAR_3, 0x9d, 0);
    FUNC_1(VAR_11, VAR_14, VAR_1, VAR_3, 0xc5, 0);
   }
   else
   {

    FUNC_1(VAR_11, VAR_14, VAR_1, VAR_4,
            0x1d, 0);
   }
   return VAR_6;
   break;

  case 136:
  case 130:
  case 138:
   FUNC_4(VAR_11, VAR_14, VAR_15, VAR_6);
   return VAR_6;
   break;

  case 135:
  case 129:
  case 137:
   FUNC_4(VAR_11, VAR_14, VAR_15, VAR_0);
   return VAR_6;
   break;

  case 128:

   if (VAR_11->win_button_size
       && (FUNC_0(VAR_11, VAR_13, VAR_7) || FUNC_0(VAR_11, VAR_13, VAR_8)))
    return VAR_6;
   break;

  case 134:

   if (VAR_11->numlock_sync && !VAR_15)
    FUNC_1(VAR_11, 0, VAR_2, 0,
            FUNC_5(VAR_11, FUNC_3(VAR_11)), 0);


   return VAR_6;
   break;
  case 133:

   if (VAR_15)
    FUNC_6(VAR_11);
   break;

 }
 return VAR_0;
}
