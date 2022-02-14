
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {void* s_addr; } ;
struct sockaddr_in {scalar_t__ sin_port; TYPE_1__ sin_addr; int sin_family; } ;
struct sockaddr {int dummy; } ;
typedef int selfAddr ;
struct TYPE_5__ {int wVersion; } ;
typedef TYPE_2__ WSADATA ;
typedef int WORD ;
typedef scalar_t__ SOCKET ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int,int) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_4 () ;
 int FUNC_5 (int ,TYPE_2__*) ;
 scalar_t__ FUNC_6 (scalar_t__,struct sockaddr*,int*) ;
 scalar_t__ FUNC_7 (scalar_t__,struct sockaddr*,int) ;
 int FUNC_8 (scalar_t__) ;
 scalar_t__ FUNC_9 (scalar_t__,struct sockaddr*,int) ;
 scalar_t__ FUNC_10 (scalar_t__,struct sockaddr*,int*) ;
 void* FUNC_11 (int ) ;
 scalar_t__ FUNC_12 (scalar_t__,int) ;
 scalar_t__ FUNC_13 (int ,int ,int ) ;

int FUNC_14()
{
   SOCKET VAR_5;
   SOCKET VAR_6[2];
   struct sockaddr_in VAR_7, VAR_8;
   int VAR_9;
   WORD VAR_10;
   WSADATA VAR_11;
   int VAR_12;





   VAR_10 = FUNC_3( 2, 2 );

   FUNC_0("Calling WSAStartup\n");
   VAR_12 = FUNC_5( VAR_10, &VAR_11 );
   if ( VAR_12 != 0 ) {


       FUNC_0("WSAStartup failed\n");
       return 1;
   }







   if ( FUNC_2( VAR_11.wVersion ) != 2 ||
           FUNC_1( VAR_11.wVersion ) != 2 ) {


       FUNC_0("WSAStartup version unacceptable\n");
       FUNC_4( );
       return 1;
   }



   FUNC_0("Calling socket\n");
   VAR_6[0] = VAR_6[1] = VAR_2;
   VAR_5 = FUNC_13(VAR_0, VAR_4, 0);
   if (VAR_5 == VAR_2) {
       FUNC_0("socket failed\n");
       goto failed;
   }

   VAR_7.sin_family = VAR_0;
   VAR_7.sin_port = 0;
   VAR_7.sin_addr.s_addr = FUNC_11(VAR_1);
   VAR_9 = sizeof(VAR_7);
   FUNC_0("Calling bind\n");
   if (FUNC_7(VAR_5, (struct sockaddr *) &VAR_7,
           VAR_9) == VAR_3) {
       FUNC_0("bind failed\n");
       goto failed;
   }

   FUNC_0("Calling getsockname\n");
   if (FUNC_10(VAR_5, (struct sockaddr *) &VAR_7,
           &VAR_9) == VAR_3) {
       FUNC_0("getsockname failed\n");
       goto failed;
   }

   FUNC_0("Calling listen\n");
   if (FUNC_12(VAR_5, 5) == VAR_3) {
       FUNC_0("listen failed\n");
       goto failed;
   }

   FUNC_0("Calling socket\n");
   VAR_6[0] = FUNC_13(VAR_0, VAR_4, 0);
   if (VAR_6[0] == VAR_2) {
       FUNC_0("socket failed\n");
       goto failed;
   }
   VAR_7.sin_addr.s_addr = FUNC_11(VAR_1);
   FUNC_0("Calling connect\n");
   if (FUNC_9(VAR_6[0], (struct sockaddr *) &VAR_7,
           VAR_9) == VAR_3) {
       FUNC_0("connect failed\n");
       goto failed;
   }






   FUNC_0("Calling getsockname\n");
   if (FUNC_10(VAR_6[0], (struct sockaddr *) &VAR_7,
           &VAR_9) == VAR_3) {
       FUNC_0("getsockname failed\n");
       goto failed;
   }

   FUNC_0("Calling accept\n");
   VAR_6[1] = FUNC_6(VAR_5, (struct sockaddr *) &VAR_8, &VAR_9);
   if (VAR_6[1] == VAR_2) {
       FUNC_0("accept failed\n");
       goto failed;
   }
   if (VAR_8.sin_port != VAR_7.sin_port) {

       FUNC_0("peerAddr.sin_port != selfAddr.sin_port\n");
       goto failed;
   }

   FUNC_0("Hurray!\n");

   FUNC_8(VAR_5);

   FUNC_8(VAR_6[0]);
   FUNC_8(VAR_6[1]);

   FUNC_4();

   return 0;

failed:
   if (VAR_5 != VAR_2) {
       FUNC_8(VAR_5);
   }
   if (VAR_6[0] != VAR_2) {
       FUNC_8(VAR_6[0]);
   }
   if (VAR_6[1] != VAR_2) {
       FUNC_8(VAR_6[1]);
   }

   FUNC_4();

   return 1;
}
