
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ USHORT ;
struct TYPE_4__ {scalar_t__ Length; scalar_t__ MaximumLength; scalar_t__ Buffer; } ;
typedef int PUNICODE_STRING ;
typedef scalar_t__ LPSTR ;
typedef scalar_t__ INT ;
typedef scalar_t__ DWORD ;
typedef TYPE_1__ ANSI_STRING ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,int ,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*,int ,int ) ;
 scalar_t__ VAR_2 ;

DWORD
FUNC_4(
   LPSTR VAR_3,
   INT VAR_4,
   PUNICODE_STRING VAR_5
   )
{
   DWORD VAR_6;


   if (VAR_4 > VAR_1) VAR_4 = VAR_1;

   VAR_6 = VAR_2? FUNC_0(VAR_5) : FUNC_2(VAR_5);


   if (VAR_3 && (INT)VAR_6 <= VAR_4)
   {
      ANSI_STRING VAR_7;

      VAR_7.Buffer = VAR_3;
      VAR_7.MaximumLength = (USHORT)VAR_4;


      if (VAR_2)
         FUNC_1(&VAR_7, VAR_5, VAR_0 );
      else
         FUNC_3(&VAR_7, VAR_5, VAR_0 );

      VAR_6 = VAR_7.Length;
   }

   return VAR_6;
}
