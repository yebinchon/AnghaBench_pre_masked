
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ TCHAR ;
typedef scalar_t__* LPTSTR ;
typedef int * HANDLE ;
typedef int DWORD ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_1 (scalar_t__*,scalar_t__,int ) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 () ;
 int VAR_3 ;
 int * VAR_4 ;
 int FUNC_4 (scalar_t__*) ;
 int FUNC_5 (scalar_t__*) ;
 scalar_t__ VAR_5 ;


 int FUNC_6 (int,int **,scalar_t__,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_7 (scalar_t__*,scalar_t__*,int,int *,int ,scalar_t__*,int,scalar_t__*,int) ;
 int FUNC_8 (char*) ;

void FUNC_9(LPTSTR VAR_8)
{
   DWORD VAR_9;
   HANDLE VAR_10[2];
   TCHAR VAR_11[4];
   TCHAR VAR_12[VAR_7];
   TCHAR VAR_13[VAR_6];

   FUNC_7(VAR_8, VAR_11, 4, ((void*)0), 0, VAR_12, VAR_7, VAR_13, VAR_6);

   VAR_11[2] = (TCHAR)'\\';
   VAR_11[3] = (TCHAR)'\0';



   VAR_10[0] = FUNC_1(
      VAR_8,
      VAR_0,
      VAR_2);

   if (VAR_10[0] == VAR_4)
   {
     FUNC_8("\n ERROR: FindFirstChangeNotification function failed.\n");
     FUNC_0(FUNC_3());
   }



   VAR_10[1] = FUNC_1(
      VAR_11,
      VAR_5,
      VAR_1);

   if (VAR_10[1] == VAR_4)
   {
     FUNC_8("\n ERROR: FindFirstChangeNotification function failed.\n");
     FUNC_0(FUNC_3());
   }




   if ((VAR_10[0] == ((void*)0)) || (VAR_10[1] == ((void*)0)))
   {
     FUNC_8("\n ERROR: Unexpected NULL from FindFirstChangeNotification.\n");
     FUNC_0(FUNC_3());
   }




   while (VAR_5)
   {


      FUNC_8("\nWaiting for notification...\n");

      VAR_9 = FUNC_6(2, VAR_10,
         VAR_0, VAR_3);

      switch (VAR_9)
      {
         case 129:




             FUNC_4(VAR_8);
             if ( FUNC_2(VAR_10[0]) == VAR_0 )
             {
               FUNC_8("\n ERROR: FindNextChangeNotification function failed.\n");
               FUNC_0(FUNC_3());
             }
             break;

         case 129 + 1:




             FUNC_5(VAR_11);
             if (FUNC_2(VAR_10[1]) == VAR_0 )
             {
               FUNC_8("\n ERROR: FindNextChangeNotification function failed.\n");
               FUNC_0(FUNC_3());
             }
             break;

         case 128:






            FUNC_8("\nNo changes in the timeout period.\n");
            break;

         default:
            FUNC_8("\n ERROR: Unhandled dwWaitStatus.\n");
            FUNC_0(FUNC_3());
            break;
      }
   }
}
